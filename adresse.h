#include <iostream>
#include "std"

namespace adresse{
	class Adresse{
	   public:
	     Adresse(std::string nbrue,std::string rue, std::string codePost,std::string ville,std::string pays);
	     std::string nbrue() const;
	     std::string rue() const;
	     std::string codePost() const;
	     std::string ville() const;
	     std::string pays() const;
	   private:
	     std::string _nbrue;
	     std::string _rue;
	     std::string _codePost;
	     std::string _ville;
	     std::string _pays;
	};
}
