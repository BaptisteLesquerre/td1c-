#include <iostream>
#include "horaire.h"
#include <ctime>

Horraire::Horaire(int heure,int minute,int seconde):_heure(heure),_minute(minute),_seconde(seconde){
    bool status = isHoraire(heure,minute,seconde);
    assert(status && "Horaire is not valid");
}

bool Horaire::isHoraire(int heure,int minute,int seconde) {
    if ((heure < 0 ) || (heure> 23)) return false;
    if ((minute<0) || (minute>59)) return false;
    if ((seconde<0) || (seconde>59)) return false;
}

int Horaire::heure() const{
     return _heure;
}

int Horaire::minute() const{
     return _minute;
}

int Date::seconde() const{
     return _seconde;
}


