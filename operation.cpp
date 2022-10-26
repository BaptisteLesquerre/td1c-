#include <iostream>
#include "operation.h"
#ifndef DATE_H
#define DATE_H
#ifndef HORAIRE_H
#define HORAIRE_H
#ifndef COMPTE_H
#define COMPTE_H
#ifndef DEVISE_H
#define DEVISE_H
#ifndef TYPE_H
#define TYPE_H

operation::Operation::Operation(date::Date date,horaire::Horaire horaire,float montant,compte::Compte compte,devise::Devise devise,bool etat,type::Type type,float soldeinitiale,float soldefinale):_date(date),_horaire(horaire),_montant(montant),_compte(compte),_devise(devise),_etat(etat),_type(type),_soldeinitiale(soldeinitiale),_soldefinale(soldefinale){
}

date::Date operation::Operation::date() const{
     return _date;
}
horaire::Horaire operation::Operation::horaire() const{
     return _horaire;
}
float operation::Operation::montant() const{
     return _montant;
}
compte::Compte operation::Operation::compte() const{
     return _compte;
}
devise::Devise operation::Operation::devise() const{
     return _devise;
}
bool operation::Operation::etat() const{
     return _etat;
}
type::Type operation::Operation::type() const{
     return _type;
}
float operation::Operation::soldeinitiale() const{
     return _soldeinitiale;
}
float operation::Operation::soldefinale() const{
     return _date;
}
#endif
#endif
#endif
#endif
#endif
