#ifndef GUIMENUPROPIETARIOS_H
#define GUIMENUPROPIETARIOS_H
#include "wxfb_project.h"
#include "GuiMenuPropietarios.h"
using namespace std;

class GuiMenuPropietarios : public MenuPropietarios {
	
private:
	
protected:
	void OnClickPropBuscar( wxCommandEvent& event )  override;
	void OnClickPropEdit( wxCommandEvent& event )  override;
	void OnClickPropLiq( wxCommandEvent& event )  override;
	void OnClickPropElim( wxCommandEvent& event )  override;
	void OnClickPropMenu( wxCommandEvent& event )  override;
	void OnClickPropNuevo( wxCommandEvent& event )  override;
	
public:
	void RefreshGrid();
	GuiMenuPropietarios(wxWindow *parent=NULL);
	~GuiMenuPropietarios();
};

#endif

