#ifndef BAZA_DANYCH_ASORTYMENT_H_INCLUDED
#define BAZA_DANYCH_ASORTYMENT_H_INCLUDED
#include <iostream>
#include <set>
#include <conio.h>
#include <functional>
#include <fstream>

using namespace std;

class Assortment {
    public:
        int id;
        string film_title;
        string film_type;
        int production_year;
        string director;
        float price_per_day;
        float price_per_week;

        Assortment (int = 0, string = " ", string = " ", int = 0, string = " ", float = 0.0, float = 0.0);
        friend class DatabaseAssortment;
        friend class coperator;
        
        int getId()const{return id;}
        string getFilmTitle()const{return film_title;}
        string getFilmType()const{return film_type;}
        int getProductionName()const{return production_year;}
        string getDirector()const{return director;}
        float getPricePerDay()const{return price_per_day;}
        float getPricePerWeek()const{return price_per_week;}

};

struct comperator {
    bool operator() (const Assortment& rhs, const Assortment& lhs) {
        return rhs.id < lhs.id;
    }
};

class DatabasAssorment {
    fstream database_assortment;

    set<Assortment, comperator> Database;
    swt<Assortment, comperator> ::iterator it;

public:
    int last_id;
    set<Assortment, comperator> ::iterator node;
    DatabaseAssortment(int id = 0){this -> last_id = id;}

    bool findId(int data);
    bool findFilmTitle(string data);
    bool findFilmType(string data);
    bool findProductionYear(int data);
    bool findDirector(string data);
    bool findPricePerDay(float data);
    bool findPricePerWeek(float data);

    void insertNode(int id, string film_title, string film_type, int production_year, string director, float price_per_day, float price_per_week);
    void eraseNode();
    void saveInFile();
    bool loadFromFile();

    void setFilmTitle(string data);
    void setFilmtype(string data);
    void setProductionYear(int data);
    void setDirector(string data);
    void setPricePerDay(float data);
    void setPricePerWeek(float data);
};
