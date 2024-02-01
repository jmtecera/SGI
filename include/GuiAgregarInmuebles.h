#ifndef GUIAGREGARINMUEBLES_H
#define GUIAGREGARINMUEBLES_H
#include "wxfb_project.h"

class GuiAgregarInmuebles : public AgregarInmuebles {
	
private:
	
protected:
	void OnClickInmNuevoSave( wxCommandEvent& event )  override;
	void OnClickInmNuevoCancel( wxCommandEvent& event )  override;
	
public:
	GuiAgregarInmuebles(wxWindow *parent=NULL);
	~GuiAgregarInmuebles();
};

#endif

