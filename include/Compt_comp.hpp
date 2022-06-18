#include "Dados.hpp"
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

#ifndef compt_comp
#define compt_comp

/*Classe para auto complete
  */

using namespace std;

class Compt_comp{
friend class Dados;
public:
 
  Compt_comp(string leitura, Dados object);
 vector <string>  m_vetor_complete;




};

 
 
#endif