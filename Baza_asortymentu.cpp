#include <iostream>
#include <windows.h>
#include "Baza_asortymentu.h"
#include <fstream>
#include <string>

using namespace std;

Assortment::Assortment(int id, string film_title, string film_type, int production_year, string director, float price_per_day, float price_per_week,bool availability) {
    this->id = id;
    this->film_title = film_title;
    this->film_type = film_type;
    this->production_year = production_year;
    this->director = director;
    this->price_per_day = price_per_day;
    this->price_per_week = price_per_week;
    this->availability=availability;
}

void DatabaseAssortment::insertNode(int id, string film_title, string film_type, int production_year, string director, float price_per_day, float price_per_week,bool availability) {
    last_id=id;
    Assortment new_node(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);

    Database.insert(new_node);
    node = Database.begin();
}

bool DatabaseAssortment::findId(int data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> id) {
            node = it;
            check = true;
        }
    }
    return check;
}

bool DatabaseAssortment::findFilmTitle(string data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> film_title) {
            node = it;
            check = true;
        }
    }
    return check;
}

bool DatabaseAssortment::findFilmType(string data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> film_type) {
            node = it;
            check = true;
        }
    }
    return check;
}

bool DatabaseAssortment::findProductionYear(int data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> production_year) {
            node = it;
            check = true;
        }
    }
    return check;
}

bool DatabaseAssortment::findDirector(string data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> director) {
            node = it;
            check = true;
        }
    }
    return check;
}

bool DatabaseAssortment::findPricePerDay(float data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> price_per_day) {
            node = it;
            check = true;
        }
    }
    return check;
}

bool DatabaseAssortment::findPricePerWeek(float data) {
    bool check = false;
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> price_per_week) {
            node = it;
        }
    }
    return check;
}

void DatabaseAssortment::saveInFile() {
    databaseassortment.open("database_assortment.txt", ios::out);
    for (it = Database.begin(); it != Database.end(); it++) {
        databaseassortment << it->id << "   " << it->film_title <<
        "   " << it->film_type << "   " << it->production_year <<
        "   " << it->director << "   " << it->price_per_day <<
        "   " << it->price_per_week <<"   "<<it->availability<<endl;
    }
    databaseassortment.close();
}

bool DatabaseAssortment::loadFromFile() {
    int lines=0;
    bool check=false;
    int id;
    string film_title;
    string film_type;
    int production_year;
    string director;
    float price_per_day;
    float price_per_week;
    bool availability;
    databaseassortment.open("database_assortment.txt", ios::in);
    if(databaseassortment.good() != false) {
        while (!databaseassortment.eof()) {
                if(databaseassortment.eof())
                check=true;
            databaseassortment >> id;
              if(databaseassortment.eof())
                check=true;
            databaseassortment >> film_title;
                if(databaseassortment.eof())
                check=true;
            databaseassortment >> film_type;
                 if(databaseassortment.eof())
                check=true;
            databaseassortment >> production_year;
                if(databaseassortment.eof())
                check=true;
            databaseassortment >> director;
                 if(databaseassortment.eof())
                check=true;
            databaseassortment >> price_per_day;
                if(databaseassortment.eof())
                check=true;
            databaseassortment >> price_per_week;
                if(databaseassortment.eof())
                check=true;
            databaseassortment >> availability;
            lines++;
            if(check!=true)
            insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
        }
        databaseassortment.close();

        return true;
    } else {
        return false;
    }
}

void DatabaseAssortment::eraseNode() {
    Database.erase(node);
    node = Database.begin();
}

void DatabaseAssortment::setFilmTitle(string data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = data;
    string film_type = node -> getFilmType();
    int production_year = node -> getProductionYear();
    string director = node -> getDirector();
    float price_per_day = node -> getPricePerDay();
    float price_per_week = node -> getPricePerWeek();
    bool availability=node->get_availability();

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}

void DatabaseAssortment::setFilmtype(string data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = node -> getFilmTitle();
    string film_type = data;
    int production_year = node -> getProductionYear();
    string director = node -> getDirector();
    float price_per_day = node -> getPricePerDay();
    float price_per_week = node -> getPricePerWeek();
    bool availability=node->get_availability();

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}

void DatabaseAssortment::setProductionYear(int data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = node -> getFilmTitle();
    string film_type = node -> getFilmType();
    int production_year = data;
    string director = node -> getDirector();
    float price_per_day = node -> getPricePerDay();
    float price_per_week = node -> getPricePerWeek();
    bool availability=node->get_availability();

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}

void DatabaseAssortment::setDirector(string data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = node -> getFilmTitle();
    string film_type = node -> getFilmType();
    int production_year = node -> getProductionYear();
    string director = data;
    float price_per_day = node -> getPricePerDay();
    float price_per_week = node -> getPricePerWeek();
    bool availability=node->get_availability();

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}

void DatabaseAssortment::setPricePerDay(float data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = node -> getFilmTitle();
    string film_type = node -> getFilmType();
    int production_year = node -> getProductionYear();
    string director = node -> getDirector();
    float price_per_day = data;
    float price_per_week = node -> getPricePerWeek();
    bool availability=node->get_availability();

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}

void DatabaseAssortment::setPricePerWeek(float data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = node -> getFilmTitle();
    string film_type = node -> getFilmType();
    int production_year = node -> getProductionYear();
    string director = node -> getDirector();
    float price_per_day = node -> getPricePerDay();
    float price_per_week = data;
    bool availability=node->get_availability();

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}
void DatabaseAssortment::set_availability(bool  data) {
    int tmp=last_id;
    int id = node -> getId();
    string film_title = node -> getFilmTitle();
    string film_type = node -> getFilmType();
    int production_year = node -> getProductionYear();
    string director = node -> getDirector();
    float price_per_day = node -> getPricePerDay();
    float price_per_week = node ->getPricePerWeek();
    bool availability=data;

    eraseNode();
    insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week,availability);
    findId(id);
    last_id=tmp;
}

