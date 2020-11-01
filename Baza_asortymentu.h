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
        
    public:
        void setFilmTitle (string film_title) {
            this -> film_title = film_title;
        }
        void setFilmType(string film_type) {
            this -> film_type = film_type;
        }
        void setProductionYear (int production_year) {
            this -> production_year = production_year;
        }
        void setDirector (string director) {
            this -> director = director;
        }
        void setPricePerDay (float price_per_day) {
            this -> price_per_day = price_per_day;
        }
        void setPricePerWeek (float price_per_week) {
            this -> price_per_week = price_per_week;
        }

        string getFilmTitle ()const {
            return film_title;
        }
        string getFilmType ()const {
            return film_type;
        }
        int getProductionYear ()const {
            return production_year;
        }
        string getDirector ()const {
            return director;
        }
        float getPricePerDay ()const {
            return price_per_day;
        }
        float getPricePerWeek ()const {
            return price_per_week;
        }
};

struct comperator {
    bool operator() (const Assortment& rhs, const Assortment& lhs) {
        return rhs.id < lhs.id;
    }
};

class DatabaseAssortment {
    fstream databaseassortment;
    set<Assortment, comperator>Database;
    set<Assortment, comperator>::iterator it;

    public:
        set<Assortment, comperator>::iterator node;
        void findId (int data);
        void findFilmTitle (string data);
        void findFilmtype (string data);
        void findProductionYear (int data);
        void findDirector (string data);
        void findPricePerDay (float data);
        void findPricePerWeek (float data);
        void insertNode (int id, string film_title, string film_type, int production_year, string director, float price_per_day, float price_per_week);
        void eraseNode();
        void saveInFile();
        void loadFromFile();
};

#endif