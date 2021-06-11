#ifndef CHANGE_RETURN_TIME_H
#define CHANGE_RETURN_TIME_H
#include "sizersv2Main.h"
//(*Headers(Change_return_time)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
//*)

class Change_return_time: public wxDialog
{
	public:
	    sizersv2Frame *parent_frame;
        wxDateTime use_time;
        int day_relent;
        int month_relent;
        int year_relent;
        int ofset;
        std::string data;
		Change_return_time(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Change_return_time();
        void onUpdata();
		//(*Declarations(Change_return_time)
		wxButton* Button1;
		wxButton* Button2;
		wxSpinCtrl* SpinCtrl1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		//*)

	protected:

		//(*Identifiers(Change_return_time)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_SPINCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(Change_return_time)
		void OnSpinCtrl1Change(wxSpinEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
