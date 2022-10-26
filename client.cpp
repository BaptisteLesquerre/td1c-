#include <iostream>
#include "client.h"
#ifndef DATE_H
#define DATE_H
#ifndef ADRESSE_H
#define ADRESSE_H

client::Client::Client(std::string nom,std::string prenom,date::Date datenaissance,int sexe,string tel,adresse::Adresse adresse,std::string adressemail,date::Date dateanciennete,std::string metier):_nom(nom), _prenom(prenom), _datenaissance(datenaissance), _sexe(sexe), _tel(tel), _adresse(adresse), _adressemail(adressemail), _dateanciennete(dateanciennete), _metier(metier){
}

std::string client::Client::nom() const{
        return _nom;
}
std::string client::Client::prenom() const{
        return _prenom;
}
date::Date client::Client::datedenaissance() const{
        return _datedenaissance;
}
int client::Client::sexe() const{
        return _sexe;
}
std::string client::Client::tel() const{
        return _tel;
}
adresse::Adresse client::Client::adresse() const{
        return _adresse;
}
std::string client::Client::adressemail() const{
        return _adressemail;
}
date::Date client::Client::dateancienete() const{
        return _dateancienete;
}
std::string client::Client::metier() const{
        return _metier;
}
#endif
#endif
