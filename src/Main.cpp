#include "Dados.hpp"
#include "Compt_comp.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include<algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[]){
    string read;
    /*codigo?*/
    Dados dados(argv[1], argv[2], argv[3]);
    dados.carregar_arquivos_c();
    dados.carregar_arquivos_p();
    dados.carregar_arquivos_w();
    cout << "leitura:";
    cin >> read;
    Compt_comp compt_comp(read, dados);
  
   

  
    return 0;
}