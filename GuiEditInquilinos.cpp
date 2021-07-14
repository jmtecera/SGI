#include "GuiEditInquilinos.h"
#include "Inquilino.h"
#include "string_conv.h"
#include <string>
#include <wx/msgdlg.h>
#include "ioInquilino.h"
using namespace std;

GuiEditInquilinos::GuiEditInquilinos(wxWindow *parent) : EditInquilinos(parent) {
	
}

void GuiEditInquilinos::Inicializar(Inquilino *inq) {
	camInqEditNom->SetValue(std_to_wx(inq->getNombre()));
	camInqEditApe->SetValue(std_to_wx(inq->getApellido()));
	camInqEditDni->SetValue(std_to_wx(to_string(inq->getDni())));
	camInqEditApe->SetValue(std_to_wx(inq->getApellido()));
	camInqEditDom->SetValue(std_to_wx(inq->getDomicilio()));
	camInqEditTel->SetValue(std_to_wx(to_string(inq->getTel())));
	camInqEditApe->SetValue(std_to_wx(inq->getApellido()));
	choEditInqSitIva->SetSelection((int)inq->getSFrenteIVA());
	camInqEditCuix->SetValue(std_to_wx(inq->getCUIx()));
	camInqEditEmail->SetValue(std_to_wx(inq->getEmail()));
	
	this->inq = inq;
	
	
}

void GuiEditInquilinos::OnClickInqEditSave( wxCommandEvent& event )  {
	
	Inquilino inqAux(inq->getId(), inq->getSFrenteIVA(), inq->getDni(), inq->getTel(), inq->getNombre(),
						inq->getApellido(), inq->getCUIx(), inq->getDomicilio(), inq->getEmail());
	
	inqAux.setSFrenteIVA((unsigned short)(choEditInqSitIva->GetSelection()));
	inqAux.setDni(atoi(camInqEditDni->GetValue()));
	inqAux.setTel(atoi(camInqEditTel->GetValue()));
	inqAux.setNombre(wx_to_std(camInqEditNom->GetValue()));
	inqAux.setApellido(wx_to_std(camInqEditApe->GetValue()));
	inqAux.setCUIx(wx_to_std(camInqEditCuix->GetValue()));
	inqAux.setDomicilio(wx_to_std(camInqEditDom->GetValue()));
	inqAux.setEmail(wx_to_std(camInqEditEmail->GetValue()));
	
	string error = inqAux.validarDatos();
	
	if (error == "") {
		wxMessageBox("El inquilino se ha editado correctamente.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
		IoInquilino::guardarDatosInq(inqAux);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiEditInquilinos::OnClickInqEditCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
	EndModal(0);
}

GuiEditInquilinos::~GuiEditInquilinos() {
	
}

