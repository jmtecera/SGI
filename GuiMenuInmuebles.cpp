#include "GuiMenuInmuebles.h"
#include "GuiAgregarInmuebles.h"
#include <wx/msgdlg.h>
#include <vector>
#include "Inmueble.h"
#include "ioInmueble.h"
#include "string_conv.h"
#include "Inquilino.h"
#include "Propietario.h"
#include "ioPropietario.h"
#include "ioInquilino.h"
#include <string>
#include <sstream>
#include <iomanip>
#include "GuiEditInmuebles.h"
#include <iostream>
#include <algorithm>
using namespace std;

GuiMenuInmuebles::GuiMenuInmuebles(wxWindow *parent) : MenuInmuebles(parent) {
	this->RefreshGrid();
	GrillaInmuebles->SetSelectionMode(wxGrid::wxGridSelectRows);
}

void GuiMenuInmuebles::RefreshGrid() {
	vector <Inmueble> inmuebles = IoInmueble::leerDatosInm();
	vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
	vector <Propietario> propietarios = IoPropietario::leerDatosProp();

	string prop = "";
	string inq = "";
	
	GrillaInmuebles->DeleteRows(0, GrillaInmuebles->GetNumberRows(), true);
	
	GrillaInmuebles->ClearGrid();
	
	for(unsigned int i = 0; i < inmuebles.size(); i++) { 		
		for (unsigned int j = 0; j < propietarios.size(); j++) {
			if (inmuebles[i].getIdProp() == propietarios[j].getId()) {
				prop = propietarios[j].getApellido() + ", " + propietarios[j].getNombre();
			}
		}
		for (unsigned int k = 0; k < inquilinos.size(); k++) {
			if (inmuebles[i].getIdInq() == inquilinos[k].getId()) {
				inq = inquilinos[k].getApellido() + ", " + inquilinos[k].getNombre();
			}
		}
		stringstream sstream;
		sstream << fixed << setprecision(2) << (inmuebles[i].getMontoAlq());
		
		GrillaInmuebles->AppendRows();
		GrillaInmuebles->SetCellValue(i, 0, std_to_wx(inmuebles[i].getDomicilio()));
		GrillaInmuebles->SetCellValue(i, 1, std_to_wx(prop));
		GrillaInmuebles->SetCellValue(i, 2, std_to_wx(inq));
		GrillaInmuebles->SetCellValue(i, 3, std_to_wx("$ " + sstream.str()));
	}
}

void GuiMenuInmuebles::OnClickInmBuscar( wxCommandEvent& event )  {
	vector <Inmueble> inmuebles = IoInmueble::leerDatosInm();
	
	string campo = wx_to_std(campoBusInm->GetValue());
	
	if (campo != "") {
		for (unsigned int i = 0; i < inmuebles.size(); i++) {
			string domicilio = inmuebles[i].getDomicilio();
			
			if (domicilio.find(campo, 0) != std::string::npos){
				GrillaInmuebles->SetGridCursor(i, 0);
				GrillaInmuebles->SelectRow(i);
			}
		}	
	} else {
		wxMessageBox("¡Debe escribir algo para buscar!", "SGI - Error", wxOK | wxICON_ERROR);
	}
}

void GuiMenuInmuebles::OnClickInmMenu( wxCommandEvent& event )  {
	EndModal(0);
}

void GuiMenuInmuebles::OnClickInmNuevo( wxCommandEvent& event )  {
	GuiAgregarInmuebles gai(this);
	if (gai.ShowModal() == 1) {
		RefreshGrid();
	}
	
	gai.Close();
}

void GuiMenuInmuebles::OnClickInmEdit( wxCommandEvent& event )  {
	if (GrillaInmuebles->IsSelection() == true && GrillaInmuebles->GetSelectedRows().GetCount() == 1){
		vector <Inmueble> inmuebles = IoInmueble::leerDatosInm();
		Inmueble inm = inmuebles[GrillaInmuebles->GetGridCursorRow()];
		GuiEditInmuebles gei(this);
		gei.Inicializar(&inm);
		
		if (gei.ShowModal() == 1) {
			RefreshGrid();
		}
		
		gei.Close();
	}
}

void GuiMenuInmuebles::OnClickInmElim( wxCommandEvent& event )  {
	if (GrillaInmuebles->IsSelection() == true && GrillaInmuebles->GetSelectedRows().GetCount() == 1){
		vector <Inmueble> inmuebles = IoInmueble::leerDatosInm();
		Inmueble inm = inmuebles[GrillaInmuebles->GetGridCursorRow()];
		
		int button = wxMessageBox("¿Está seguro que desea eliminar la fila seleccionada?", "SGI - Advertencia", wxYES_NO| wxICON_QUESTION);
		
		if (button == wxYES){
			IoInmueble::borrarInm(inm);
			RefreshGrid();
		}
	}
}

GuiMenuInmuebles::~GuiMenuInmuebles() {
	
}

