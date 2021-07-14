#ifndef GUIEDITINQUILINOS_H
#define GUIEDITINQUILINOS_H
#include "wxfb_project.h"
#include "GuiEditInquilinos.h"
#include "Inquilino.h"

class GuiEditInquilinos : public EditInquilinos {
	
private:
	Inquilino *inq;
	
protected:
	void OnClickInqEditSave( wxCommandEvent& event )  override;
	void OnClickInqEditCancel( wxCommandEvent& event )  override;
	
public:
	GuiEditInquilinos(wxWindow *parent=NULL);
	
	void Inicializar(Inquilino *i);
	
	~GuiEditInquilinos();
};

#endif

