#ifndef Rand_hpp
#define Rand_hpp
//classe para processamento de dados
class Dados{
  private:
      std::vector< std::pair<std::int, string> >m_palavras_c; //<! palavras e sua ocorrência no respectivo arquivo cities

      std::vector< std::pair<std::int, string> >m_palavras_p; //<! palavras e sua ocorrência no respectivo arquivo ptbrcorpus

      std::vector< std::pair<std::int, string> >m_palavras_w; //<! palavras e sua ocorrência no respectivo arquivo wikitionary


      string m_arquivo_palavras_c;//<! arquivo que contém as palavras de cities
      string m_arquivo_palavras_p; //<! arquivo que contém as palavras de ptrcorpus
      string m_arquivo_palavras_w; //<! arquivo que contém as palavras de wikitionary

  public:
/*
 Construtor que recebe o nome do arquivo que será usado na execução
*/
  
  Dados(std::string arquivo_c,std::string arquivo_p, std::string arquivo_w );
/*
Guarda frequência e palavras em vetores
*/

  void carregar_arquivos_c(); //carrega vetores referentes ao arquivo cities
 void carregar_arquivos_p()//carrega vetor referente ao arquivo ptbrcorpus
  void carregar_arquivos_w()//carrega vetor referente a arquivo wikitionary


};

#endif