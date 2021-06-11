#ifndef LOGINDAILOG_H
#define LOGINDAILOG_H
#include "Baza_danych_klienci.h"
#include "Baza_asortymentu.h"
#include "rental_database.h"
#include "CreateAcount.h"
//(*Headers(LoginDailog)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class LoginDailog: public wxFrame
{
	public:
        Database_relent *Relent;
        Database_Klient *Klient;
        DatabaseAssortment *Videos;
		LoginDailog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoginDailog();
        void load_from_fill();
         void save_to_fill();
		//(*Declarations(LoginDailog)
		wxButton* Button1;
		wxButton* Button2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStatusBar* StatusBar1;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		//*)

	protected:

		//(*Identifiers(LoginDailog)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(LoginDailog)
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
