#include <iostream>

namespace horaire{
	class Horaire{
		public :
		 Horaire(int heure,int minute,int seconde);
		 int heure() const;
		 int minute() const;
		 void updateheure(int heure);
		 void updateminute(int minute);
		 void updateseconde(int seconde);
		private :
		 int _heure;
		 int _minute;
		 int _seconde;
	};
}       
