#ifndef Rand_hpp
#define Rand_hpp
//Classe para autocorreção
class Compt_corr{
    public:

    vector < string > auto_correct;//<- vetor formado por palavras para auto correção

    /*
   método que calcula distancia de levenshtein de acordo com a entrada do usuário
*/
    int m_dis_l(string entrada);
/*
  método que forma container de palavras com base  no resultado de m_dis_l
*/
   void m_container(); 

};

#endif