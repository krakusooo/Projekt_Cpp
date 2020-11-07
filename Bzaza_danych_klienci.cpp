#include<iostream>
#include <windows.h>
#include"Baza_danych_klienci.h"
#include <fstream>
#include <string>
using namespace std;
contener::contener(int id,string name,string surname,string password,string tel_number,string login,string Adress)
{
  this->id=id;
  this->name=name;
  this->surname=surname;
  this->password=password;
  this->tel_number=tel_number;
  this->login=login;
  this->Adress=Adress;
}
void Database_Klient::insert_node(int id,string name,string surname,string password,string tel_number,string login,string Adress){
  contener new_node(id,name,surname,password,tel_number,login,Adress);
 last_id++;
  Database.insert(new_node);
  node=Database.begin();
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
bool Database_Klient::find_Adress(string data)
{
bool check=false;

    for(it=Database.begin();it!=Database.end();it++)
        if(data==it->Adress)
            {
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
        <<"   "<<it->password<<"    "<<it->login<<"   "<<it->Adress
        <<"   "<<it->tel_number<<endl;}
    database_klient.close();

}
bool Database_Klient::load_from_file()
{
    int id;
    string name;
    string surname;
    string password;
    string tel_number;
    string login;
    string Adress;
    database_klient.open("database_klient.txt", ios::in );
    if(database_klient.good()!=false){
    while(!database_klient.eof())
    {
        database_klient>>id;
        database_klient>>name;
        database_klient>>surname;
        database_klient>>password;
        database_klient>>login;
        database_klient>>Adress;
        database_klient>>tel_number;
        insert_node(id,name,surname,password,tel_number,login,Adress);

    }

    database_klient.close();
    return true;
    }
    else
        return false;
}
void Database_Klient::erese_node()
{
    Database.erase(node);
    node=Database.begin();
}
void Database_Klient::set_name(string data)
{
    int id=node->get_id();
    string name=data;
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress=node->get_Adress();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress);
    find_id(id);

}
void Database_Klient::set_surname(string data)
{
    int id=node->get_id();
    string name=node->get_name();
    string surname=data;
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress=node->get_Adress();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress);
    find_id(id);

}
void Database_Klient::set_password(string data)
{
    int id=node->get_id();
    string name=data;
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress=node->get_Adress();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress);
    find_id(id);

}
void Database_Klient::set_tel_number(string data)
{
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=data;
    string login=node->get_login();
    string Adress=node->get_Adress();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress);
    find_id(id);

}
void Database_Klient::set_login(string data)
{
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=data;
    string Adress=node->get_Adress();

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress);
    find_id(id);

}
void Database_Klient::set_Adress(string data)
{
    int id=node->get_id();
    string name=node->get_name();
    string surname=node->get_surname();
    string password=node->get_password();
    string tel_number=node->get_tel_number();
    string login=node->get_login();
    string Adress=data;

    erese_node();
    insert_node(id,name,surname,password,tel_number,login,Adress);
    find_id(id);

}

