#ifndef CZHANGE_PRICE_H
#define CZHANGE_PRICE_H
#include "AsortymentDatabeseEdit.h"
//(*Headers(Czhange_price)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
//*)

class Czhange_price: public wxDialog
{
	public:
        void onUpdata();
        AsortymentDatabeseEdit * parent_frame;
		Czhange_price(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Czhange_price();

		//(*Declarations(Czhange_price)
		wxButton* Button1;
		wxButton* Button2;
		wxSpinCtrlDouble* SpinCtrlDouble1;
		wxSpinCtrlDouble* SpinCtrlDouble2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		//*)

	protected:

		//(*Identifiers(Czhange_price)
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRLDOUBLE1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRLDOUBLE2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(Czhange_price)
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
