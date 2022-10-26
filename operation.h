#include <iostream>
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

namespace operation{
   class Operation{
      public:
        Operation(date::Date date,horaire::Horaire horaire,float montant,compte::Compte compte,devise::Devise devise,bool etat,type::Type type,float soldeinitiale,float soldefinale)
        date::Date date() const;
        horaire::Horaire horaire() const;
        float montant() const;
        compte::Compte compte() const;
        devise::Devise devise() const;
        bool etat() const;
        type::Type type() const;
        float soldeinitiale() const;
        float solefinale() const;
      private:
        date::Date _date;
        horaire::Horaire _horaire;
        float _montant;
        compte::Compte _compte;
        devise::Devise _devise;
        bool _etat;
        type::Type _type;
        float _soldeinitiale;
        float _soldefinale;
   };
}
#endif
#endif
#endif
#endif
#endif
