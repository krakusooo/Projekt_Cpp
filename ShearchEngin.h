#ifndef SHEARCHENGIN_H
#define SHEARCHENGIN_H
#include "Baza_asortymentu.h"
//(*Headers(ShearchEngin)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class ShearchEngin: public wxDialog
{
	public:
        DatabaseAssortment*Videos;
		ShearchEngin(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ShearchEngin();
		void OnUpdata();

		//(*Declarations(ShearchEngin)
		wxButton* Button1;
		wxListCtrl* ListCtrl1;
		wxSpinCtrl* SpinCtrl1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		//*)

	protected:

		//(*Identifiers(ShearchEngin)
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_SPINCTRL1;
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(ShearchEngin)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
