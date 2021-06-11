#ifndef ADD_RELENTDIALOG_H
#define ADD_RELENTDIALOG_H
#include "sizersv2Main.h"
//(*Headers(add_relentdialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class add_relentdialog: public wxDialog
{
	public:
        wxDateTime use_time;
        sizersv2Frame *Parent_frame;
		add_relentdialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~add_relentdialog();
	 int day_relent;
     int month_relent;
     int year_relent;
     int ofset;
     std::string data;

		//(*Declarations(add_relentdialog)
		wxButton* Button1;
		wxButton* Button2;
		wxSpinCtrlDouble* SpinCtrlDouble1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		//*)

	protected:

		//(*Identifiers(add_relentdialog)
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_SPINCTRLDOUBLE1;
		static const long ID_STATICTEXT6;
		//*)

	private:

		//(*Handlers(add_relentdialog)
		void OnSpinCtrlDouble1Change(wxSpinDoubleEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
