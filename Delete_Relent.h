#ifndef DELETE_RELENT_H
#define DELETE_RELENT_H
#include "sizersv2Main.h"
//(*Headers(Delete_Relent)
#include <wx/button.h>
#include <wx/cshelp.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
//*)

class Delete_Relent: public wxDialog
{
	public:
        sizersv2Frame *Parent_frame;
		Delete_Relent(int lastId,wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Delete_Relent();
        void OnUpdata();
		//(*Declarations(Delete_Relent)
		wxButton* Button1;
		wxButton* Button2;
		wxContextHelpButton* ContextHelpButton1;

		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		//*)

	protected:

		//(*Identifiers(Delete_Relent)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_SPINCTRL1;
		static const long ID_STATICTEXT5;
		static const long ID_CONTEXTHELPBUTTON1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(Delete_Relent)

		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
