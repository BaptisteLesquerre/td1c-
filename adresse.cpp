#include <iostream>
#include "adresse.h"

Adresse::Adresse(std::string nbrue,std::string rue,std::string codePost,std::string ville,std::string pays):_nbrue(nbrue),_rue(rue),_codePost(codePost),_ville(ville),_pays(pays){
}

std::string Adresse::nbrue() const{
    return _nbrue;
}

std::string Adresse::rue() const{
    return _rue;
}

std::string Adresse::codePost() const{
    return _codePost;
}

std::string Adresse::ville() const{
    return _ville;
}

std::string Adresse::pays() const{
    return _pays;
}
