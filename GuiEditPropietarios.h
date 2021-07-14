#ifndef GUIEDITPROPIETARIOS_H
#define GUIEDITPROPIETARIOS_H
#include "wxfb_project.h"
#include "GuiEditPropietarios.h"
#include "Propietario.h"

class GuiEditPropietarios : public EditPropietarios {
	
private:
	Propietario *prop;
	
protected:
	
	void OnClickPropEditSave( wxCommandEvent& event )  override;
	void OnClickPropEditCancel( wxCommandEvent& event )  override;
	
public:
	GuiEditPropietarios(wxWindow *parent=NULL);

	void Inicializar(Propietario *p);
	
	~GuiEditPropietarios();
};

#endif

