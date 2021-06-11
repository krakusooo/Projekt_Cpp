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
    string city;
    string login;
    string Adress_Ul;
    string Adress_Hous_N;
    string Adress_local_N;


    contener(int=0,string=" ",string=" ",string=" ",string=" ",string=" ",string=" ",string=" ",string=" ",string="");
    friend class Database_Klient;
    friend class coperator;
    public:



   int get_id()const{return id;}
   string get_name()const {return name;}
   string get_surname()const{return surname;}
   string get_password()const{return password;}
   string get_tel_number()const{return tel_number;}
   string get_login()const{return login;}
   string get_Adress_Ul()const{return Adress_Ul;}
   string get_Adress_Hous_N()const{return Adress_Hous_N;}
   string get_Adress_local_N()const{return Adress_local_N;}
   string get_City()const{return city;}


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

   int last_id;
    set<contener,comperator>::iterator node;
   Database_Klient(int id=0){this->last_id=id;}

   bool Is_empty(){
   if(!Database.empty())
    return false;//ieœli nie jest pusta
   else
    return true;//ieœli jest pusta
   }
   bool find_id(int data);
   bool find_name(string data1);
   bool find_surname(string data);
   bool find_password(string data);
   bool find_tel_number(string data);
   bool find_login(string data);
   bool find_Adress_Ul(string data);
   bool find_Adress_house_N(string data);
   bool find_Adress_local_N(string data);
   void insert_node(int id,string name,string surname,string password,string tel_number,string login,string Adress_Ul,string Adress_Hous_N,string Adress_local_N,string city);
   void erese_node();
   void save_in_file();
   bool load_from_file();

   void set_name(string  data);
   void set_surname(string data);
   void set_password(string data);
   void set_tel_number(string data);
   void set_login(string data);
   void set_Adress_UL(string data);
   void set_Adress_house_N(string data);
   void set_Adress_local_N(string data);



};

#endif // BAZA_DANYCH_KLIENCI_H_INCLUDED
