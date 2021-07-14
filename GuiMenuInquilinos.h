#ifndef GUIMENUINQUILINOS_H
#define GUIMENUINQUILINOS_H
#include "wxfb_project.h"
#include <string>
#include "GuiMenuInquilinos.h"
using namespace std;

class GuiMenuInquilinos : public MenuInquilinos {
	
private:
	
protected:
	void OnClickInqBuscar( wxCommandEvent& event )  override;
	void OnClickInqEdit( wxCommandEvent& event )  override;
	void OnClickInqLiq( wxCommandEvent& event )  override;
	void OnClickInqMenu( wxCommandEvent& event )  override;
	void OnClickInqNuevo( wxCommandEvent& event )  override;
	void OnClickInqElim( wxCommandEvent& event )  override;
	
public:
	void RefreshGrid();
	GuiMenuInquilinos(wxWindow *parent=NULL);
	~GuiMenuInquilinos();
};

#endif

