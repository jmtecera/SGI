#ifndef GUIMENUINMUEBLES_H
#define GUIMENUINMUEBLES_H
#include "wxfb_project.h"

class GuiMenuInmuebles : public MenuInmuebles {
	
private:
	
protected:
	void OnClickInmBuscar( wxCommandEvent& event )  override;
	void OnClickInmMenu( wxCommandEvent& event )  override;
	void OnClickInmNuevo( wxCommandEvent& event )  override;
	void OnClickInmEdit( wxCommandEvent& event )  override;
	void OnClickInmElim( wxCommandEvent& event )  override;
	
public:
	void RefreshGrid();
	GuiMenuInmuebles(wxWindow *parent=NULL);
	~GuiMenuInmuebles();
};

#endif

