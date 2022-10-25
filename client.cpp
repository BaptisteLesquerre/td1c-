#include <iostream>
#include "client.h"
#include "date.h"
#include "adresse.h"

Client::Client(std::string nom,std::string prenom,Date datenaissance,int sexe,string tel,Adresse adresse,std::string adressemail,Date dateanciennete,std::string metier):_nom(nom), _prenom(prenom), _datenaissance(datenaissance), _sexe(sexe), _tel(tel), _adresse(adresse), _adressemail(adressemail), _dateanciennete(dateanciennete), _metier(metier){
}

std::string Client::nom() const{
        return _nom;
}
std::string Client::prenom() const{
        return _prenom;
}
date::Date Client::datedenaissance() const{
        return _datedenaissance;
}
int Client::sexe() const{
        return _sexe;
}
std::string Client::tel() const{
        return _tel;
}
adresse::Adresse Client::adresse() const{
        return _adresse;
}
std::string Client::adressemail() const{
        return _adressemail;
}
date::Date Client::dateancienete() const{
        return _dateancienete;
}
std::string Client::metier() const{
        return _metier;
}
