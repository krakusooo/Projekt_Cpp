#ifndef BAZA_DANYCH_KLIENCI_H_INCLUDED
#define BAZA_DANYCH_KLIENCI_H_INCLUDED
#include<iostream>
#include<set>
#include <conio.h>
#include <functional>
#include <fstream>
using namespace std;
class contener{
    public:
    int id;
    string name;
    string surname;
    string password;
    string tel_number;
    string login;
    string Adress;

    contener(int=0,string=" ",string=" ",string=" ",string=" ",string=" ",string=" ");
    friend class Database_Klient;
    friend class coperator;
    public:
   void set_name(string name){this->name=name;}
   void set_surname(string surname){this->surname=surname;}
   void set_password(string password){this->password=password;}
   void set_tel_number(string tel_number){this->tel_number=tel_number;}
   void set_login(string login){this->login=login;}
   void set_Adress(string Adress){this->Adress=Adress;}

   string get_name()const {return name;}
   string get_surname()const{return surname;}
   string get_password()const{return password;}
   string get_tel_number()const{return tel_number;}
   string get_login()const{return login;}
   string get_Adress()const{return Adress;}


  // bool operator< (const contener& rhs)const {return id>rhs.id;}
};
struct comperator
{
    bool operator() (const contener& rhs,const contener& lhs){
        return rhs.id<lhs.id;
        }
};
class Database_Klient
{   fstream database_klient;

    set<contener,comperator>Database;
set<contener,comperator>::iterator it;
public:

   set<contener,comperator>::iterator node;
   void find_id(int data);
   void find_name(string data1);
   void find_surname(string data);
   void find_password(string data);
   void find_tel_number(string data);
   void find_login(string data);
   void find_Adress(string data);
   void insert_node(int id,string name,string surname,string password,string tel_number,string login,string Adress);
   void erese_node();
   void save_in_file();
   void load_from_file();
};

#endif // BAZA_DANYCH_KLIENCI_H_INCLUDED
