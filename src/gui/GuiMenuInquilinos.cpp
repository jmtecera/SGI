#include "../../include/GuiMenuInquilinos.h"
#include "../../include/GuiAgregarInquilinos.h"
#include "../../include/ioInquilino.h"
#include <wx/grid.h>
#include "../../include/string_conv.h"
#include <sstream>
#include <iomanip>
#include <wx/msgdlg.h>
#include <vector>
#include "../../include/ioInmueble.h"
#include "../../include/Inquilino.h"
#include "../../include/GuiEditInquilinos.h"
using namespace std;

GuiMenuInquilinos::GuiMenuInquilinos(wxWindow *parent) : MenuInquilinos(parent) {
	this->RefreshGrid();
	GrillaInquilinos->SetSelectionMode(wxGrid::wxGridSelectRows);
}

void GuiMenuInquilinos::RefreshGrid() {
	vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
	
	GrillaInquilinos->DeleteRows(0, GrillaInquilinos->GetNumberRows(), true);
	
	GrillaInquilinos->ClearGrid();
	
	for(unsigned int i = 0; i < inquilinos.size(); i++) { 
		GrillaInquilinos->AppendRows();
		GrillaInquilinos->SetCellValue(i, 0, std_to_wx(inquilinos[i].getNombre()));
		GrillaInquilinos->SetCellValue(i, 1, std_to_wx(inquilinos[i].getApellido()));
		
		if (inquilinos[i].getCUIx().size() == 11) {
			GrillaInquilinos->SetCellValue(i, 2, std_to_wx(inquilinos[i].getCUIx().insert(2, "-").insert(11, "-")));
		}
	}
}

void GuiMenuInquilinos::OnClickInqMenu( wxCommandEvent& event )  {
	EndModal(0);
}

void GuiMenuInquilinos::OnClickInqNuevo( wxCommandEvent& event )  {
	GuiAgregarInquilinos gainq(this);
	if (gainq.ShowModal() == 1) {
		RefreshGrid();
	}
	
	gainq.Close();
}

void GuiMenuInquilinos::OnClickInqElim( wxCommandEvent& event )  {
	if (GrillaInquilinos->IsSelection() == true && GrillaInquilinos->GetSelectedRows().GetCount() == 1){
		vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
		Inquilino inq = inquilinos[GrillaInquilinos->GetGridCursorRow()];
		
		int button = wxMessageBox("�Est� seguro que desea eliminar la fila seleccionada?", "SGI - Advertencia", wxYES_NO| wxICON_QUESTION);
		
		if (button == wxYES){
			IoInquilino::borrarInq(inq);
			RefreshGrid();
		}
	}
}

void GuiMenuInquilinos::OnClickInqLiq( wxCommandEvent& event )  {
	vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
	vector <Inmueble> inmuebles = IoInmueble::leerDatosInm();
	
	Inquilino inq = inquilinos[GrillaInquilinos->GetGridCursorRow()];
	
	float montoAlq = 0;
	
	for (unsigned int i = 0; i < inmuebles.size(); i++) {
		
		if (inmuebles[i].getIdInq() == inq.getId()) {
			
			montoAlq += inmuebles[i].getMontoAlq();
			
		}
	}
	
	float liquidado = (montoAlq);
	
	stringstream sLiquidado;
	
	sLiquidado << fixed << setprecision(2) << liquidado;
	
	wxMessageBox(wx_to_std("Liquidado: $ " + sLiquidado.str()), "SGI - INFORMACI�N - " + inq.getApellido(),  wxOK | wxICON_INFORMATION);
}

void GuiMenuInquilinos::OnClickInqEdit( wxCommandEvent& event )  {
	
	if (GrillaInquilinos->IsSelection() == true && GrillaInquilinos->GetSelectedRows().GetCount() == 1){
		vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
		Inquilino inq = inquilinos[GrillaInquilinos->GetGridCursorRow()];
		GuiEditInquilinos gei(this);
		gei.Inicializar(&inq);
		
		if (gei.ShowModal() == 1) {
			RefreshGrid();
		}
		
		gei.Close();
	}
}

void GuiMenuInquilinos::OnClickInqBuscar( wxCommandEvent& event )  {
	vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
	
	string campo = wx_to_std(campoBusInq->GetValue());
	if (campo != "") {
		for (unsigned int i = 0; i < inquilinos.size(); i++) {
			string nombre = inquilinos[i].getNombre();
			string apellido = inquilinos[i].getApellido();
			
			if (nombre.find(campo, 0) != std::string::npos){
				GrillaInquilinos->SetGridCursor(i, 0);
				GrillaInquilinos->SelectRow(i);
			}
			if (apellido.find(campo, 0) != std::string::npos) {
				GrillaInquilinos->SetGridCursor(i, 0);
				GrillaInquilinos->SelectRow(i);
			}
		}
	} else {
		wxMessageBox("�Debe escribir algo para buscar!", "SGI - Error", wxOK | wxICON_ERROR);
	}
}
GuiMenuInquilinos::~GuiMenuInquilinos() {
	
}



