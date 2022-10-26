#include <iostream>
#ifndef DATE_H
#define DATE_H
#ifndef ADRESSE_H
#define ADRESSE_H

namespace client{
	class Client{
	   public:
	     Client(std::string nom,std::string prenom,Date datenaissance,int sexe,string tel,Adresse adresse,std::string adressemail,Date dateanciennete,std::string metier);
	     std::string nom() const;
	     std::string prenom() const;
	     date::Date datenaissance() const;
	     int sexe() const;
	     std::string tel() const;
	     adresse::Adresse adresse() const;
	     std::string adressemail() const;
	     date::Date dateancienete() const;
	     std::string metier() const;
	     std::string getfullname();
	   private:
	     std::string _nom;
	     std::string _prenom;
	     date::Date _datenaissance;
	     int _sexe;
	     std::string _tel;
	     adresse::Adresse _adresse;
	     std::string _adressemail;
	     date::Date _dateanciennete;
	     std::string _metier;
	};
}
#endif
#endif
