#ifndef GUIMENUUSERS_H
#define GUIMENUUSERS_H
#include "wxfb_project.h"

class GuiMenuUsers : public MenuUsers {
	
private:
	
protected:
	void OnClickUserBuscar( wxCommandEvent& event )  override;
	void OnClickUserNuevo( wxCommandEvent& event )  override;
	void OnClickUserEditar( wxCommandEvent& event )  override;
	void OnClickUserElim( wxCommandEvent& event )  override;
	void OnClickAdminSalir( wxCommandEvent& event )  override;
	
public:
	void RefreshGrid();
	GuiMenuUsers(wxWindow *parent=NULL);
	~GuiMenuUsers();
};

#endif

