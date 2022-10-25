#include <iostream>
#include "compte.h"

Compte::Compte(std::string ncompte,client::Client client,date::Date datecreation,float solde,enum devise operation::Operation historique[]):_ncompte(ncompte),_client(client),_datecreation(datecreation),_solde(solde),_devise(devise){
}

std::string Compte::ncompte() const{
     return _ncompte;
}
client::Client Compte::client() const{
     return _client;
}
date::Date Compte::datecreation() const{
     return _datecreation;
}
float Compte::solde() const{
     return _solde;
}
devise::Devise Compte::devise() const{
     return _devise;
}
