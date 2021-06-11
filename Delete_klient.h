#ifndef DELETE_KLIENT_H
#define DELETE_KLIENT_H
#include "KlientDatabeseEdit.h"
//(*Headers(Delete_klient)
#include <wx/button.h>
#include <wx/cshelp.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
//*)

class Delete_klient: public wxDialog
{
	public:
        KlientDatabeseEdit*Parent_frame;
		Delete_klient(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Delete_klient();
        void OnUpdata();
		//(*Declarations(Delete_klient)
		wxButton* Button1;
		wxButton* Button2;


		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		//*)

	protected:

		//(*Identifiers(Delete_klient)
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_CONTEXTHELPBUTTON1;
		//*)

	private:

		//(*Handlers(Delete_klient)
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
