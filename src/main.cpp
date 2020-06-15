#include <iostream>
#include "../inc/Dron.hh"
#include "../inc/Tafla.hh"
#include "../inc/Dno.hh"
/*
void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}
*/
int main() {

  std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-50,50,-50,50,-35,35,-1));

  Dron Witold /*, Andrzej*/ ;
  Tafla T;
  Dno D;

  Wektor3D S1(-5,5,-5),S2(-20,10,-20);

  T.rysuj(api,30);
  T.rysuj(api,30);
  D.rysuj(api,-30);
  Witold.ustaw_dron();
  //Andrzej.ustaw_dron();
  Witold.rysuj_drona(S1,api);
  //Andrzej.rysuj_drona(S2,api);

  char klawisz;
  double kat, droga;
  
  cout << "Panel sterowania dronem" << endl << endl;
  while(klawisz != 'q') {
    cout << "Wybierz opcję sterowania:" <<endl << endl;
    cout << "p - Płyń naprzód" <<endl;
    cout << "w - Płyń pod kątem" <<endl;
    cout << "o - Obróć" <<endl;
    cout << "f - Zrób fikołka!" << endl<<endl;
    cout << "q - Zakończ program"<<endl<<endl;
    cout << ">";
    cin >> klawisz; 
    cout<<endl;
    switch (klawisz)
    {
    case 'p':
      cout << "Jaką drogę ma przepłynąć?" << endl;
      cout << ">";
      cin >> droga;
      cout<<endl;
      Witold.animacja_ruch(droga,api);
      break;
    
    case 'w':
      cout << "Pod jakim kątem ma płynąć?" << endl;
      cout << ">";
      cin >> kat;
      cout << "Jaką drogę ma przepłynąć?" << endl;
      cout << ">";
      cin >> droga;
      cout<<endl;
      Witold.animacja_plyn(kat,droga,api);
      break;

    case 'o':
      cout << "Pod jakim kątem ma się obrócić?" << endl;
      cout << ">";
      cin >> kat;
      cout<<endl;
      Witold.animacja_obrot('Z',kat,api);
      break;

    case 'f':
      cout<<"I myk!" <<endl;
      Witold.animacja_obrot('X',360,api);
      break;

    case 'q':
      cout << "Miłego dnia!" <<endl;
      break;
    
    default:
      cerr<<"Złe wprowadzenie opcji"<<endl;
      break;
    }

  }

}
  
  
