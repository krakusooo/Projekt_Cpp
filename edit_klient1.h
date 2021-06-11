#ifndef EDIT_KLIENT1_H
#define EDIT_KLIENT1_H
#include "Baza_danych_klienci.h"
//(*Headers(edit_klient1)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
class Database_Klient;
class edit_klient1: public wxDialog
{
	public:
        Database_Klient *Klient;
		edit_klient1(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~edit_klient1();
		int id;
		std::string name;
		std::string surname;
		std::string emil;
		std::string password;
		std::string telefon_nr;
		std::string city;
		std::string nr_house;
		std::string local_nr;
		std::string Miasto;
        void onUpdata();
		//(*Declarations(edit_klient1)
		wxButton* Button10;
		wxButton* Button11;
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxButton* Button8;
		wxButton* Button9;
		wxSpinCtrl* SpinCtrl1;
		wxSpinCtrl* SpinCtrl2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		wxTextCtrl* TextCtrl6;
		wxTextCtrl* TextCtrl7;
		//*)

	protected:

		//(*Identifiers(edit_klient1)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL7;
		static const long ID_BUTTON11;
		static const long ID_STATICTEXT7;
		static const long ID_SPINCTRL1;
		static const long ID_BUTTON8;
		static const long ID_STATICTEXT8;
		static const long ID_SPINCTRL2;
		static const long ID_BUTTON7;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL6;
		static const long ID_BUTTON6;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		//*)

	private:

		//(*Handlers(edit_klient1)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton10Click(wxCommandEvent& event);
		void OnButton8Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnButton9Click(wxCommandEvent& event);
		void OnButton11Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
