#ifndef DELLETEVIDEO_H
#define DELLETEVIDEO_H
#include "AsortymentDatabeseEdit.h"

//(*Headers(delleteVideo)
#include <wx/button.h>
#include <wx/cshelp.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
//*)

class delleteVideo: public wxDialog
{
	public:
        AsortymentDatabeseEdit*parent_frame;
		delleteVideo(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~delleteVideo();
        void OnUpdata();
		//(*Declarations(delleteVideo)
		wxButton* Button1;
		wxButton* Button2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(delleteVideo)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRL1;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_CONTEXTHELPBUTTON1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(delleteVideo)

		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
