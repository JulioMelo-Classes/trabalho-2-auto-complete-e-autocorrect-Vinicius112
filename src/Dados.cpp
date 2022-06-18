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

using namespace std;

Dados:: Dados(std::string arquivo_c,std::string arquivo_p, std::string arquivo_w){
  this->m_arquivo_palavras_c = arquivo_c;
  this->m_arquivo_palavras_p = arquivo_p;
  this->m_arquivo_palavras_w = arquivo_w;
  
}

void  Dados::carregar_arquivos_c(){
	
	
	int p = 0; // parar leitura
	int c = 0; //contar linhas
	int i = 0; //contador várias funções
	int n = 2;
	string linha;
	
	
	vector <string> palavras(n);
	vector <string> frequencia(n);
	vector <int> frequencia_i(n); 

	fstream arquivo;
	
	
	
	
	arquivo.open(m_arquivo_palavras_c);//abre arquivo para contar linhas
	while(getline(arquivo, linha)){
		c++;//contando numero de linhas a partir do 1
	}
	arquivo.close();//fecha arquivo, isso e repetido para percorrer o arquivo de diferentes formas
	
	
	
	arquivo.open(m_arquivo_palavras_c, ios::in);//abre arquivo para ler palavras
	while(p < c){
		
		getline(arquivo, frequencia[i], '\t'); 
		
		
		
		getline(arquivo, palavras[i], '\n'); 
		
		
		n++;
		palavras.resize(n);
		frequencia.resize(n);
		frequencia_i.resize(i);
		i++;
		p++;
		
	}
	arquivo.close();
	
	

	for(int i =0; i < n-2; i++){
		
		frequencia_i[i] = stoi(frequencia[i]);
	}
	
	for(int i = 0; i < n-2; i++ ){
    m_palavras_c.push_back(make_pair(frequencia_i[i], palavras[i] ));
    }
	





	//FIM DE LEITURA DE PALAVRAS.TXT






  

      
	}


void  Dados::carregar_arquivos_p(){
	
	
	int p = 0; // parar leitura
	int c = 0; //contar linhas
	int i = 0; //contador várias funções
	int n = 2;
	string linha;
	
	
	vector <string> palavras(n);
	vector <string> frequencia(n);
	vector <int> frequencia_i(n); 

	fstream arquivo;
	
	
	
	
	arquivo.open(m_arquivo_palavras_p);//abre arquivo para contar linhas
	while(getline(arquivo, linha)){
		c++;//contando numero de linhas a partir do 1
	}
	arquivo.close();//fecha arquivo, isso e repetido para percorrer o arquivo de diferentes formas
	
	
	
	arquivo.open(m_arquivo_palavras_p, ios::in);//abre arquivo para ler palavras
	while(p < c){
		
		getline(arquivo, frequencia[i], '\t'); 
		
		
		
		getline(arquivo, palavras[i], '\n'); 
		
		
		n++;
		palavras.resize(n);
		frequencia.resize(n);
		frequencia_i.resize(i);
		i++;
		p++;
		
	}
	arquivo.close();
	
	

	for(int i =0; i < n-2; i++){
		
		frequencia_i[i] = stoi(frequencia[i]);
	}
	
	for(int i = 0; i < n-2; i++ ){
    m_palavras_p.push_back(make_pair(frequencia_i[i], palavras[i] ));
    }
	





	//FIM DE LEITURA DE PALAVRAS.TXT






  

      
	}


void  Dados::carregar_arquivos_w(){
	
	
	int p = 0; // parar leitura
	int c = 0; //contar linhas
	int i = 0; //contador várias funções
	int n = 2;
	string linha;
	
	
	vector <string> palavras(n);
	vector <string> frequencia(n);
	vector <long int> frequencia_i(n); 

	fstream arquivo;
	
	
	
	
	arquivo.open(m_arquivo_palavras_w);//abre arquivo para contar linhas
	while(getline(arquivo, linha)){
		c++;//contando numero de linhas a partir do 1
	}
	arquivo.close();//fecha arquivo, isso e repetido para percorrer o arquivo de diferentes formas
	
	
	
	arquivo.open(m_arquivo_palavras_w, ios::in);//abre arquivo para ler palavras
	while(p < c){
		
		getline(arquivo, frequencia[i], '\t'); 
		
		
		
		getline(arquivo, palavras[i], '\n'); 
		
		
		n++;
		palavras.resize(n);
		frequencia.resize(n);
		frequencia_i.resize(i);
		i++;
		p++;
		
	}
	arquivo.close();
	
	

	for(int i =0; i < n-2; i++){
		
		frequencia_i[i] = stol(frequencia[i], nullptr, 10);
	}
	
	for(int i = 0; i < n-2; i++ ){
    m_palavras_w.push_back(make_pair(frequencia_i[i], palavras[i] ));
    }
	





	//FIM DE LEITURA DE PALAVRAS.TXT






  

      
	}
	
	
	
	
	
	
	
	

  


