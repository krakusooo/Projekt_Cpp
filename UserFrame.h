#ifndef USERFRAME_H
#define USERFRAME_H
#include "LoginDailog.h"
#include "Baza_danych_klienci.h"
#include "Baza_asortymentu.h"
#include "rental_database.h"
//(*Headers(UserFrame)
#include <wx/button.h>
#include <wx/calctrl.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class UserFrame: public wxFrame
{
	public:
        Database_Klient*Klient;
        DatabaseAssortment*Videos;
        Database_relent*Relent;
        LoginDailog*parent_frame;
		UserFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UserFrame();
        void onUpdata();
		//(*Declarations(UserFrame)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxCalendarCtrl* CalendarCtrl1;
		wxListCtrl* ListCtrl1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		//*)

	protected:

		//(*Identifiers(UserFrame)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		static const long ID_CALENDARCTRL1;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT3;
		static const long ID_LISTCTRL1;
		//*)

	private:

		//(*Handlers(UserFrame)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
