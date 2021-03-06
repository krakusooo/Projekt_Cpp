#include<iostream>
#include <windows.h>
#include"Baza_danych_klienci.h"
#include <fstream>
#include <string>
using namespace std;
contener::contener(int id,string name,string surname,string password,string tel_number,string login,string Adress_Ul,string Adress_Hous_N,string Adress_local_N,string city)
{
  this->id=id;
  this->name=name;
  this->surname=surname;
  this->password=password;
  this->tel_number=tel_number;
  this->login=login;
  this->Adress_Ul=Adress_Ul;
  this->Adress_Hous_N=Adress_Hous_N;
  this->Adress_local_N=Adress_local_N;
  this->city=city;
}
void Database_Klient::insert_node(int id,string name,string surname,string password,string tel_number,string login,string Adress_Ul,string Adress_Hous_N,string Adress_local_N,string city){
  last_id=id;
  contener new_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_Hous_N,Adress_local_N,city);

  Database.insert(new_node);
  node=  Database.begin();
}
bool Database_Klient::find_id(int data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->id){
            node=it;
            check=true;
            }

    return check;
}
bool Database_Klient::find_name(string data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->name){
            node=it;
            check=true;
            }

    return check;
}
bool Database_Klient::find_surname(string data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->surname){
            node=it;
            check=true;
            }

    return check;
}
bool Database_Klient::find_password(string data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->password){
            node=it;
            check=true;
            }

    return check;
}
bool Database_Klient::find_tel_number(string data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->tel_number){
            node=it;
            check=true;
            }
    return check;
}
bool Database_Klient::find_login(string data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->login){
            node=it;
            check=true;
            }

    return check;
}
bool Database_Klient::find_Adress_Ul(string data)
{bool check=false;
    for(it=Database.begin();it!=Database.end();it++)
    if(data==it->Adress_Ul){
        node=it;
        check=true;
    }
    return check;
}
bool Database_Klient::find_Adress_house_N(string data)
{bool check=false;
    for(it=Database.begin();it!=Database.end();it++)
    if(data==it->Adress_Hous_N){
        node=it;
        check=true;
    }
    return check;
}
bool Database_Klient::find_Adress_local_N(string data)
{bool check=false;
    for(it=Database.begin();it!=Database.end();it++)
    if(data==it->Adress_local_N){
        node=it;
        check=true;
    }
    return check;
}
void Database_Klient::save_in_file()
{
    database_klient.open("database_klient.txt",ios::out);
    for(it=Database.begin();it!=Database.end();it++){
        database_klient<<it->id<<"   "<<it->name<<"   "<<it->surname
        <<"   "<<it->password<<"    "<<it->login<<"   "<<it->Adress_Ul<<"   "<<it->Adress_Hous_N<<"   "<<it->Adress_local_N
        <<"   "<<it->tel_number<<"   "<<it->city <<endl;}
    database_klient.close();

}
bool Database_Klient::load_from_file()
{  bool check=false;

    int id;
    string name;
    string surname;
    string password;
    string tel_number;
    string login;
    string Adress_Ul;
    string Adress_Hous_N;
    string Adress_local_N;
    string city;
    database_klient.open("database_klient.txt", ios::in );
    if(database_klient.good()!=false){
    while(!database_klient.eof())
    {    if(database_klient.eof())
            check=true;
        database_klient>>id;
         if(database_klient.eof())
            check=true;
        database_klient>>name;
        if(database_klient.eof())
            check=true;
        database_klient>>surname;
        if(database_klient.eof())
            check=true;
        database_klient>>password;
        if(database_klient.eof())
            check=true;
        database_klient>>login;
        if(database_klient.eof())
            check=true;
        database_klient>>Adress_Ul;
        if(database_klient.eof())
            check=true;
        database_klient>>Adress_Hous_N;
        if(database_klient.eof())
            check=true;
        database_klient>>Adress_local_N;
        if(database_klient.eof())
            check=true;
        database_klient>>tel_number;
        if(database_klient.eof())
            check=true;
            database_klient>>city;
        if(check!=true)
        insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_Hous_N,Adress_local_N,city);

    }

    database_klient.close();

    return true;

    }
    else return false;
}
void Database_Klient::erese_node()
{
    Database.erase(node);
    node=Database.begin();
}
void Database_Klient::set_name(string data)
{
    int tmp=last_id;
    int id=node->get_id();
    string name=data;
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();
    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_surname(string data)
{   int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=data;
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();
    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_password(string data)
{   int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=data;
    string tel_number=node->get_tel_number();
    string login=node->get_login();
     string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();
    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_tel_number(string data)
{   int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=data;
    string login=node->get_login();
      string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();
    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_login(string data)
{    int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=data;
     string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();
    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_Adress_UL(string data)
{   int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress_Ul=data;
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_Adress_house_N(string data)
{   int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=data;
    string Adress_local_N=node->get_Adress_local_N();
    string city= node->get_City();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
void Database_Klient::set_Adress_local_N(string data)
{   int tmp=last_id;
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress_Ul=node->get_Adress_Ul();
    string Adress_hous_N=node->get_Adress_Hous_N();
    string Adress_local_N=data;
    string city= node->get_City();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress_Ul,Adress_hous_N,Adress_local_N,city);
    find_id(id);
    last_id=tmp;
}
