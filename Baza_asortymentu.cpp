#include <iostream>
#include <windows.h>
#include "Baza_asortymentu.h"
#include <fstream>
#include <string>

using namespace std;

Assortment::Assortment(int id, string film_title, string film_type, int production_year, string director, float price_per_day, float price_per_week) {
    this->id = id;
    this->film_title = film_title;
    this->film_type = film_type;
    this->production_year = production_year;
    this->director = director;
    this->price_per_day = price_per_day;
    this->price_per_week = price_per_week;
}

void DatabaseAssortment::insertNode(int id, string film_title, string film_type, int production_year, string director, float price_per_day, float price_per_week) {
    Assortment new_node(id, film_title, film_type, production_year, director, price_per_day, price_per_week);
    
    Database.insert(new_node);
    node = Database.begin();
}

void DatabaseAssortment::findId(int data) {
    for (it = Database.begin(); it != Database.end(); ++it) {
        if (data == it -> id) {
            node = it;
        }
    }
}

void DatabaseAssortment::findFilmTitle(string data) {
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> film_title) {
            node = it;
        }
    }
}

void DatabaseAssortment::findFilmtype(string data) {
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> film_type) {
            node = it;
        }
    }
}

void DatabaseAssortment::findProductionYear(int data) {
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> production_year) {
            node = it;
        }
    }
}

void DatabaseAssortment::findDirector(string data) {
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> director) {
            node = it;
        }
    }
}

void DatabaseAssortment::findPricePerDay(float data) {
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> price_per_day) {
            node = it;
        }
    }
}

void DatabaseAssortment::findPricePerWeek(float data) {
    for (it = Database.begin(); it != Database.end(); it++) {
        if (data == it -> price_per_week) {
            node = it;
        }
    }
}

void DatabaseAssortment::saveInFile() {
    databaseassortment.open("database_assortment.txt", ios::out);
    for (it = Database.begin(); it != Database.end(); it++) {
        databaseassortment << it->id << "   " << it->film_title <<
        "   " << it->film_type << "   " << it->production_year << 
        "   " << it->director << "   " << it->price_per_day << 
        "   " << it->price_per_week << endl;
    }
    databaseassortment.close();
}

void DatabaseAssortment::loadFromFile() {
    int id;
    string film_title;
    string film_type;
    int production_year;
    string director;
    float price_per_day;
    float price_per_week;
    databaseassortment.open("databaseassortment.txt", ios::in);
    while (!databaseassortment.eof()) {
        databaseassortment >> id;
        databaseassortment >> film_title;
        databaseassortment >> film_type;
        databaseassortment >> production_year;
        databaseassortment >> director;
        databaseassortment >> price_per_day;
        databaseassortment >> price_per_week;
        insertNode(id, film_title, film_type, production_year, director, price_per_day, price_per_week);
    }
    databaseassortment.close();
}

void DatabaseAssortment::eraseNode() {
    Database.erase(node);
    node = Database.begin();
}

int main() {
    DatabaseAssortment new_database;
    new_database.loadFromFile();
    new_database.findFilmTitle("Matrix");

    std::string film_title = new_database.node -> getFilmTitle();
    cout << "Tytul filmu: " << film_title;
    new_database.saveInFile();
    return 0;
}