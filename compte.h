#include <iostream>

namespace compte{
     class Compte{
        public:
         Client(std::string ncompte,client::Client client,date::Date datecreation,float solde,devise::Devise devise operation::Operation historique[]);
         std::string ncompte() const;
         client::Client client() const;
         date::Date datecreation() const;
         float solde() const;
         devise::Devise devise() const;
         operation::Operation getoperation(int=0) const;
        private:
         std::string _ncompte;
         client::Client _client;
         date::Date _datecreation;
         float _solde;
         devise::Devise _devise;  
         operation::Operation historique[];
     };
}
