#include <iostream>
#include <windows.h>
#include <cstring>
 
using namespace std;

typedef struct Banco
{
    int num;
    char titular[35];
    float saldo;
};

 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  Banco contas[5];
  int cont = 0;

  contas[0].saldo = 2.000;
  contas[1].saldo = 1.000;
  contas[2].saldo = 2.500;
  contas[3].saldo = 3.500;
  contas[4].saldo = 7.000;

  for(int i = 0; i < 5; i++){
    contas[i].num = cont;
    cont++;
    cout<<"Informe seu nome: ";
    cin.ignore();
    cin.getline(contas[i].titular,35);
  }

  float maior = 0.0, menor = 999999999999999.0;
  int contNumMax=0, contNumMin=0;

  for(int i = 0; i < 5; i++){
    if(contas[i].saldo > maior){
        contNumMax = contas[i].num;
        maior = contas[i].saldo;
    }
    if(contas[i].saldo < menor){
        contNumMin = contas[i].num;
        menor = contas[i].saldo;
    }
  }

  cout<<"Maior"<<endl;
  cout<< contas[0].num <<endl;
  cout<< contas[0].titular << endl;
  cout<< contas[0].saldo << endl;

  cout<<"Menor"<<endl;
  cout<< contas[contNumMin].num << endl;
  cout<< contas[contNumMin].titular << endl;
  cout<< contas[contNumMin].saldo << endl;
  

  cout << endl;
  return 0;
}