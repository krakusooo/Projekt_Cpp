#ifndef KLIENTDATABESEEDIT_H
#define KLIENTDATABESEEDIT_H
#include "sizersv2Main.h"
#include "Baza_asortymentu.h"
#include "Baza_danych_klienci.h"
#include "rental_database.h"
//(*Headers(KlientDatabeseEdit)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
class sizersv2Frame;
class KlientDatabeseEdit: public wxFrame
{
	public:

        sizersv2Frame *Parent_frame;
        Database_relent *Relent;
        Database_Klient *Klient;
        DatabaseAssortment *Videos;
		KlientDatabeseEdit(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~KlientDatabeseEdit();
		void onUpdata();

		//(*Declarations(KlientDatabeseEdit)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxListCtrl* ListCtrl1;
		wxListCtrl* ListCtrl2;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(KlientDatabeseEdit)
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON7;
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON6;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_LISTCTRL2;
		//*)

	private:

		//(*Handlers(KlientDatabeseEdit)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnListCtrl1BeginDrag(wxListEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnListCtrl2BeginDrag(wxListEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
