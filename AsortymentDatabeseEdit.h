#ifndef ASORTYMENTDATABESEEDIT_H
#define ASORTYMENTDATABESEEDIT_H
#include "Baza_asortymentu.h"
#include "rental_database.h"
#include "sizersv2Main.h"
//(*Headers(AsortymentDatabeseEdit)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
class sizersv2Frame;
class AsortymentDatabeseEdit: public wxFrame
{
	public:
        DatabaseAssortment *Videos;
        Database_relent *Relent;
        sizersv2Frame*parent_frame;
		AsortymentDatabeseEdit(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AsortymentDatabeseEdit();
        void onUpdata();
		//(*Declarations(AsortymentDatabeseEdit)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxListCtrl* ListCtrl1;
		wxListCtrl* ListCtrl2;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(AsortymentDatabeseEdit)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON5;
		static const long ID_LISTCTRL2;
		//*)

	private:

		//(*Handlers(AsortymentDatabeseEdit)
		void OnButton5Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnListCtrl1BeginDrag(wxListEvent& event);
		void OnListCtrl2BeginDrag(wxListEvent& event);
		void OnListCtrl1BeginDrag1(wxListEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
