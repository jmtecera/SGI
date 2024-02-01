#ifndef GUIEDITINMUEBLES_H
#define GUIEDITINMUEBLES_H
#include "wxfb_project.h"
#include "Inmueble.h"

class GuiEditInmuebles : public EditInmuebles {
	
private:
	Inmueble *inm;
	
protected:
	void OnClickInmEditSave( wxCommandEvent& event )  override;
	void OnClickInmEditCancel( wxCommandEvent& event )  override;
	
public:
	GuiEditInmuebles(wxWindow *parent=NULL);
	
	void Inicializar(Inmueble *i);
	
	~GuiEditInmuebles();
};

#endif

