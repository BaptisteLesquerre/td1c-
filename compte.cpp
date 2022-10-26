#include <iostream>
#include "compte.h"
#ifndef CLIENT_H
#define CLIENT_H
#ifndef DATE_H
#define DATE_H
#ifndef DEVISE_H
#define DEVISE_H

compte::Compte::Compte(std::string ncompte,client::Client client,date::Date datecreation,float solde,devise::Devise devise, operation::Operation historique):_ncompte(ncompte),_client(client),_datecreation(datecreation),_solde(solde),_devise(devise){
    
}

std::string compte::Compte::ncompte() const{
     return _ncompte;
}
client::Client compte::Compte::client() const{
     return _client;
}
date::Date compte::Compte::datecreation() const{
     return _datecreation;
}
float compte::Compte::solde() const{
     return _solde;
}
devise::Devise compte::Compte::devise() const{
     return _devise;
}
#endif
#endif
#endif
