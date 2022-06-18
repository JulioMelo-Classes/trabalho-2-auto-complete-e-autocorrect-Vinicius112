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




Compt_comp:: Compt_comp(string leitura, Dados object){
 int contador = 0;
 vector <string> palavras_c;

  for(int i = 0; i < object.m_palavras_c.size(); i++){
        palavras_c.push_back(object.m_palavras_c[i].second);
  }

  
 for(int i = 0; i < object.m_palavras_c.size(); i++){
   for(int j = 0; j < leitura.size(); j++){
     if(leitura[j] == palavras_c[i][j]){
        contador ++;

     }
     else{
       break;
     }
     }
   if(contador == leitura.size()){
        m_vetor_complete.push_back(palavras_c[i]);
        
          
       }
     contador  = 0;
 
 }

  for(int i = 0; i < m_vetor_complete.size(); i++){
    cout << m_vetor_complete[i] << endl;
  }



}