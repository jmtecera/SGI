#ifndef GUIAGREGARPROPIETARIOS_H
#define GUIAGREGARPROPIETARIOS_H
#include "wxfb_project.h"
#include "GuiMenuPropietarios.h"

class GuiAgregarPropietarios : public AgregarPropietarios {
	
private:

protected:
	void OnClickPropNuevoSave( wxCommandEvent& event )  override;
	void OnClickPropNuevoCancel( wxCommandEvent& event )  override;
	
public:
	GuiAgregarPropietarios(wxWindow *parent=NULL);
	~GuiAgregarPropietarios();
};

#endif

