#include <iostream>
#include <set>
#include <fstream>
#include <string>
#include "rental_database.h"

using namespace std;
Relant_database_node::Relant_database_node(int id_zamowienia,int id_klienta,int id_filmu,int data_wypoz,int data_zwrotu){

  this->id_zamowienia=id_zamowienia;
  this->id_klienta=id_klienta;
  this->id_filmu=id_filmu;
  this->data_wypoz=data_wypoz;
  this->data_zwrotu=data_zwrotu;

}
void Database_relent::insert_node(int id_z,int id_k,int id_f,int data_wyp,int data_zw){
    Relant_database_node new_node(id_z,id_k,id_f,data_wyp,data_wyp);

    relent_database.insert(new_node);
    node=relent_database.begin();
}
void Database_relent::erse_node()
{
    relent_database.erase(node);
    node=relent_database.begin();
}
bool Database_relent::load_from_file()
{
    int id_zamowienia;
    int id_klienta;
    int id_filmu;
    int data_wypoz;
    int data_zwrotu;
    Database.open("relent_database.txt",ios::in);
    if(Database.good()!=false){
            while(!Database.eof())
            {
                Database>>id_zamowienia;
                Database>>id_klienta;
                Database>>id_filmu;
                Database>>data_wypoz;
                Database>>data_zwrotu;
                insert_node(id_zamowienia,id_klienta,id_filmu,data_wypoz,data_zwrotu);
            }
     Database.close();
     return true;
    }
    return false;

}
void Database_relent::seve_to_file()
{
    Database.open("relent_database.txt",ios::out);
    for(it=relent_database.begin();it!=relent_database.end();it++)
    {
        Database<<it->id_zamowienia<<"  "<<it->id_klienta<<"    "<<it->id_filmu<<
        "   "<<it->data_wypoz<<"    "<<it->data_zwrotu<<endl;
    }
    Database.close();
}
bool Database_relent::find_id_zamowienia(int data)
{
    bool check=false;
    for(it=relent_database.begin();it!=relent_database.end();it++)
    {
        if(it->id_zamowienia==data)
            node=it;
            check=true;
    }


  return check;
}
bool Database_relent::find_id_klienta(int data)
{
    bool check=false;
    for(it=relent_database.begin();it!=relent_database.end();it++)
    {
        if(it->id_klienta==data)
            node=it;
            check=true;
    }


  return check;
}
bool Database_relent::find_id_filmu(int data)
{
    bool check=false;
    for(it=relent_database.begin();it!=relent_database.end();it++)
    {
        if(it->id_filmu==data)
            node=it;
            check=true;
    }


  return check;
}
bool Database_relent::find_data_wypoz(int data)
{
    bool check=false;
    for(it=relent_database.begin();it!=relent_database.end();it++)
    {
        if(it->data_wypoz==data)
            node=it;
            check=true;
    }


  return check;
}
bool Database_relent::find_data_zwrotu(int data)
{
    bool check=false;
    for(it=relent_database.begin();it!=relent_database.end();it++)
    {
        if(it->data_zwrotu==data)
            node=it;
            check=true;
    }


  return check;
}
void Database_relent::set_id_klienta(int data)
{
    int id_zamowienia=node->get_id_zamowienia();
    int id_klienta=data;
    int id_filmu=node->get_id_filmu();
    int data_wypoz=node->get_data_wypoz();
    int data_zwrotu=node->get_data_zwrotu();

    erse_node();
    insert_node(id_zamowienia,id_klienta,id_filmu,data_wypoz,data_zwrotu);
    find_id_zamowienia(id_zamowienia);
}
void Database_relent::set_id_filmu(int data)
{
    int id_zamowienia=node->get_id_zamowienia();
    int id_klienta=node->get_id_klienta();
    int id_filmu=data;
    int data_wypoz=node->get_data_wypoz();
    int data_zwrotu=node->get_data_zwrotu();

    erse_node();
    insert_node(id_zamowienia,id_klienta,id_filmu,data_wypoz,data_zwrotu);
    find_id_zamowienia(id_zamowienia);
}
void Database_relent::set_data_wypoz(int data)
{
    int id_zamowienia=node->get_id_zamowienia();
    int id_klienta=node->get_id_klienta();
    int id_filmu=node->get_id_filmu();
    int data_wypoz=data;
    int data_zwrotu=node->get_data_zwrotu();

    erse_node();
    insert_node(id_zamowienia,id_klienta,id_filmu,data_wypoz,data_zwrotu);
    find_id_zamowienia(id_zamowienia);
}
void Database_relent::set_data_zwrotu(int data)
{
    int id_zamowienia=node->get_id_zamowienia();
    int id_klienta=node->get_id_klienta();
    int id_filmu=node->get_id_filmu();
    int data_wypoz=node->get_data_wypoz();
    int data_zwrotu=data;

    erse_node();
    insert_node(id_zamowienia,id_klienta,id_filmu,data_wypoz,data_zwrotu);
    find_id_zamowienia(id_zamowienia);
}
int main()
{

    Database_relent new_database;
int id;
   // new_database.insert_node(1,4,46,20200512,56774234);
    //new_database.insert_node(2,3,46,20200512,56774234);
    ///new_database.insert_node(3,6,46,20200512,56774234);
    //new_database.insert_node(4,7,46,20200512,56774234);
    //new_database.seve_to_file();
    new_database.load_from_file();

    if(new_database.find_id_filmu(46)==true)
       new_database.set_id_filmu(87);
    id=new_database.node->get_id_filmu();
    cout << id << endl;
    return 0;
}
