/***************************************************************
 * Name:      sizersv2Main.h
 * Purpose:   Defines Application Frame
 * Author:    cezary_kretkowski ()
 * Created:   2020-12-18
 * Copyright: cezary_kretkowski ()
 * License:
 **************************************************************/

#ifndef SIZERSV2MAIN_H
#define SIZERSV2MAIN_H

//(*Headers(sizersv2Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#include "Baza_danych_klienci.h"
#include "Baza_asortymentu.h"
#include "rental_database.h"
#include "CreateAcount.h"
#include "LoginDailog.h"
class LoginDailog;
class sizersv2Frame: public wxFrame
{
    public:
        Database_relent *Relent;
        Database_Klient *Klient;
        DatabaseAssortment *Videos;
        LoginDailog*parent_frame;
        sizersv2Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~sizersv2Frame();
        void Onupdata();
    private:

        //(*Handlers(sizersv2Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnListCtrl1BeginDrag(wxListEvent& event);
        //*)

        //(*Identifiers(sizersv2Frame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON6;
        static const long ID_LISTCTRL1;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON3;
        static const long ID_LISTCTRL2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        //*)

        //(*Declarations(sizersv2Frame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxButton* Button6;
        wxListCtrl* ListCtrl1;
        wxListCtrl* ListCtrl2;
        wxStaticText* StaticText1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SIZERSV2MAIN_H
