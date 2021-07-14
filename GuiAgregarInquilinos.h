#ifndef GUIAGREGARINQUILINOS_H
#define GUIAGREGARINQUILINOS_H
#include "wxfb_project.h"

class GuiAgregarInquilinos : public AgregarInquilinos {
	
private:
	
protected:
	void OnClickInqNuevoSave( wxCommandEvent& event )  override;
	void OnClickInqNuevoCancel( wxCommandEvent& event )  override;
	
public:
	GuiAgregarInquilinos(wxWindow *parent=NULL);
	~GuiAgregarInquilinos();
};

#endif

