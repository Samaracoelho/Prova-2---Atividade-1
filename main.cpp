#include <iostream>
using namespace std;

int TrocaPalavra(string* Palavra, string* PalavraModificada, char CaracterSubs1, char CaracterSubs2){
  int y=0;
  for (int i=0; i<=size(*Palavra); i++){
    if((*Palavra)[i]==CaracterSubs1){
      (*PalavraModificada)[i]=CaracterSubs2;
      y++;
    }
  }
return y;

}

int main() {
  string Palavra;
  string PalavraModificada;
  char CaracterSubs1;
  char CaracterSubs2;

  cout << "Digite uma palavra:";
  cin >> Palavra;
  cout << "Qual caracter será substituido?";
  cin >> CaracterSubs1;
  cout << "Por qual caracter?";
  cin >> CaracterSubs2;

  PalavraModificada=Palavra;

  int trocas = TrocaPalavra(&Palavra, &PalavraModificada, CaracterSubs1, CaracterSubs2);
  
  cout<< PalavraModificada << "\n";
  cout<< Palavra << "\n";
  cout << trocas;

}