#include <iostream>
#include "adresse.h"

adresse::Adresse::Adresse(std::string nbrue,std::string rue,std::string codePost,std::string ville,std::string pays):_nbrue(nbrue),_rue(rue),_codePost(codePost),_ville(ville),_pays(pays){
}

std::string adresse::Adresse::nbrue() const{
    return _nbrue;
}

std::string adresse::Adresse::rue() const{
    return _rue;
}

std::string adresse::Adresse::codePost() const{
    return _codePost;
}

std::string adresse::Adresse::ville() const{
    return _ville;
}

std::string adresse::Adresse::pays() const{
    return _pays;
}
