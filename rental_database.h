#ifndef RENTAL_DATABASE_H_INCLUDED
#define RENTAL_DATABASE_H_INCLUDED
#include <iostream>
#include <set>
#include <functional>
#include <fstream>

using namespace std;


class Relant_database_node
{
    int id_zamowienia;
    int id_klienta;
    int id_filmu;
    string  data_wypoz;
    string data_zwrotu;

public:
    Relant_database_node(int=0,int=0,int=0,string="",string="");
    friend class comperor;
    friend class Database_relent;

    int get_id_zamowienia()const{return id_zamowienia;}
    int get_id_klienta()const{return id_klienta;}
    int get_id_filmu()const{return id_filmu;}
    string get_data_wypoz()const{return data_wypoz;}
    string get_data_zwrotu()const{return data_zwrotu;}

};
struct comperor{
  bool operator()(const Relant_database_node& rhs,const Relant_database_node& lhs)
  {
      return rhs.id_zamowienia < lhs.id_zamowienia;
  }

};
class Database_relent{
    set<Relant_database_node,comperor>relent_database;
    set<Relant_database_node,comperor>::iterator it;
    fstream Database;
public:

    set<Relant_database_node,comperor>::iterator node;
    int last_id;
    bool find_id_zamowienia(int data);
    bool find_id_klienta(int data);
    bool find_id_filmu(int data);
    bool find_data_wypoz(string data);
    bool find_data_zwrotu(string data);
    void insert_node(int id_z,int id_k,int id_f,string data_wyp,string data_zw);
    void erse_node();
    bool load_from_file();
    void seve_to_file();


    void set_id_klienta(int data);
    void set_id_filmu(int data);
    void set_data_wypoz(string data);
    void set_data_zwrotu(string data);


};


#endif // RENTAL_DATABASE_H_INCLUDED
