#ifndef ADD_VIDEO_H
#define ADD_VIDEO_H
#include "AsortymentDatabeseEdit.h"
//(*Headers(ADD_Video)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class ADD_Video: public wxDialog
{
	public:
        AsortymentDatabeseEdit*parent_frame;
		ADD_Video(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ADD_Video();

		//(*Declarations(ADD_Video)
		wxButton* Button1;
		wxButton* Button2;
		wxSpinCtrlDouble* SpinCtrlDouble1;
		wxSpinCtrlDouble* SpinCtrlDouble2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		//*)

	protected:

		//(*Identifiers(ADD_Video)
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRLDOUBLE2;
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRLDOUBLE1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(ADD_Video)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
