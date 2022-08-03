#include <iostream>
#include <windows.h>
 
using namespace std;

typedef struct Pessoa
{
    double salario;
    int idade;
    int filhos;
    char sexo;
};

 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  Pessoa pessoa[2];

  
 
  
 
 
  cout << endl;
  return 0;
}