#include <iostream>
#include "operation.h"

Operation::Operation(date::Date date,horaire::Horaire horaire,float montant,compte::Compte compte,devise::Devise devise,bool etat,type::Type type,float soldeinitiale,float soldefinale):_date(date),_horaire(horaire),_montant(montant),_compte(compte),_devise(devise),_etat(etat),_type(type),_soldeinitiale(soldeinitiale),_soldefinale(soldefinale){
}

date::Date operation::date() const{
     return _date;
}
horaire::Horaire operation::horaire() const{
     return _horaire;
}
float operation::montant() const{
     return _montant;
}
compte::Compte operation::compte() const{
     return _compte;
}
devise::Devise operation::devise() const{
     return _devise;
}
bool operation::etat() const{
     return _etat;
}
type::Type operation::type() const{
     return _type;
}
float operation::soldeinitiale() const{
     return _soldeinitiale;
}
float operation::soldefinale() const{
     return _date;
}
