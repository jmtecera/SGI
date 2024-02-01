#include "../../include/GuiMenuPropietarios.h"
#include <vector>
#include "../../include/ioPropietario.h"
#include "../../include/string_conv.h"
#include "../../include/GuiAgregarPropietarios.h"
#include <wx/msgdlg.h>
#include <iostream>
#include "../../include/ioInmueble.h"
#include "../../include/Inmueble.h"
#include <sstream>
#include <iomanip>
#include "../../include/GuiEditPropietarios.h"
#include <cctype>
#include <wx/grid.h>
#include "../../include/Propietario.h"
#include <string>
using namespace std;

GuiMenuPropietarios::GuiMenuPropietarios(wxWindow *parent) : MenuPropietarios(parent) {
	this->RefreshGrid();
	GrillaPropietarios->SetSelectionMode(wxGrid::wxGridSelectRows);
}

void GuiMenuPropietarios::RefreshGrid() {
	vector <Propietario> propietarios = IoPropietario::leerDatosProp();
	
	GrillaPropietarios->DeleteRows(0, GrillaPropietarios->GetNumberRows(), true);
	
	GrillaPropietarios->ClearGrid();
	
	for(unsigned int i = 0; i < propietarios.size(); i++) { 
		GrillaPropietarios->AppendRows();
		GrillaPropietarios->SetCellValue(i, 0, std_to_wx(propietarios[i].getNombre()));
		GrillaPropietarios->SetCellValue(i, 1, std_to_wx(propietarios[i].getApellido()));
		
		stringstream sstream;
		
		sstream << fixed << setprecision(2) << (propietarios[i].getComision());
		
		GrillaPropietarios->SetCellValue(i, 2, std_to_wx(sstream.str() + " %"));
		
		if (propietarios[i].getCUIx().size() == 11) {
			GrillaPropietarios->SetCellValue(i, 3, std_to_wx(propietarios[i].getCUIx().insert(2, "-").insert(11, "-")));
		}
	}
}

void GuiMenuPropietarios::OnClickPropMenu( wxCommandEvent& event )  {
	EndModal(0);
}

void GuiMenuPropietarios::OnClickPropNuevo( wxCommandEvent& event )  {
	GuiAgregarPropietarios gap(this);
	if (gap.ShowModal() == 1) {
		RefreshGrid();
	}
	
	gap.Close();
}


void GuiMenuPropietarios::OnClickPropElim( wxCommandEvent& event )  {	
	if (GrillaPropietarios->IsSelection() == true && GrillaPropietarios->GetSelectedRows().GetCount() == 1){
		vector <Propietario> propietarios = IoPropietario::leerDatosProp();
		Propietario prop = propietarios[GrillaPropietarios->GetGridCursorRow()];
		
		int button = wxMessageBox("�Est� seguro que desea eliminar el propietario seleccionado?", "SGI - Advertencia", wxYES_NO | wxICON_QUESTION);
		
		if (button == wxYES){
			IoPropietario::borrarProp(prop);
			RefreshGrid();
		}
	}
}

void GuiMenuPropietarios::OnClickPropLiq( wxCommandEvent& event )  {
	vector <Propietario> propietarios = IoPropietario::leerDatosProp();
	vector <Inmueble> inmuebles = IoInmueble::leerDatosInm();
	
	Propietario prop = propietarios[GrillaPropietarios->GetGridCursorRow()];
	
	float montoAlq = 0;
	
	for (unsigned int i = 0; i < inmuebles.size(); i++) {
		
		if (inmuebles[i].getIdProp() == prop.getId()) {
			
			montoAlq += inmuebles[i].getMontoAlq();
			
		}
	}
	
	float liquidado = (montoAlq - (montoAlq * (prop.getComision() / 100)));
	
	stringstream sLiquidado;
	
	sLiquidado << fixed << setprecision(2) << liquidado;
	
	wxMessageBox(wx_to_std("Liquidado: $ " + sLiquidado.str()), "SGI - INFORMACI�N - " + prop.getApellido(),  wxOK | wxICON_INFORMATION);
	GrillaPropietarios->SetCellValue(prop.getId(), 4, wx_to_std("$ " + sLiquidado.str()));
}

void GuiMenuPropietarios::OnClickPropEdit( wxCommandEvent& event )  {
	
	if (GrillaPropietarios->IsSelection() == true && GrillaPropietarios->GetSelectedRows().GetCount() == 1){
		vector <Propietario> propietarios = IoPropietario::leerDatosProp();
		Propietario prop = propietarios[GrillaPropietarios->GetGridCursorRow()];
		GuiEditPropietarios gep(this);
		gep.Inicializar(&prop);
		
		if (gep.ShowModal() == 1) {
			RefreshGrid();
		}
		
		gep.Close();
	}
}

void GuiMenuPropietarios::OnClickPropBuscar( wxCommandEvent& event )  {
	vector <Propietario> propietarios = IoPropietario::leerDatosProp();
	
	string campo = wx_to_std(campoBusProp->GetValue());
	if (campo != "") {
		for (unsigned int i = 0; i < propietarios.size(); i++) {
			string nombre = propietarios[i].getNombre();
			string apellido = propietarios[i].getApellido();
			
			if (nombre.find(campo, 0) != std::string::npos){
				GrillaPropietarios->SetGridCursor(i, 0);
				GrillaPropietarios->SelectRow(i);
			}
			if (apellido.find(campo, 0) != std::string::npos) {
				GrillaPropietarios->SetGridCursor(i, 0);
				GrillaPropietarios->SelectRow(i);
			}
		}
	} else {
		wxMessageBox("�Debe escribir algo para buscar!", "SGI - Error", wxOK | wxICON_ERROR);
	}
}

GuiMenuPropietarios::~GuiMenuPropietarios() {
	
}



