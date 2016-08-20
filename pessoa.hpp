#include <iostream>
#include <string>

using namespace std;

class Pessoa{

//void inserir (Pessoa *novo);

protected:
    string nome;
    int idade;
    Pessoa *esquerda;
    Pessoa *direita;

public:
  Pessoa(){
    nome = "";
    idade = 0;
    esquerda = NULL;
    direita = NULL;
  };

  Pessoa(string n, int i){
    nome = n;
    idade = i;
  };

  ~Pessoa(){ //DESTRUTOR
    cout << "destruindo instancia de Pessoa" << endl;
  };
//GETERS E SETERS
  string getNome(){
    return nome;
  };

  void setNome(string n){
    nome = n;
  };

  int getIdade(){
    return idade;
  };

  void setIdade(int i){
    idade = i;
  };

  Pessoa *getDireita (){
    return direita;
  };

  void setDireita(Pessoa *direita){
    this->direita=direita;
  };

  Pessoa *getEsquerda (){
    return esquerda;
  };

  void setEsquerda(Pessoa *esquerda){
    this->esquerda=esquerda;
  };
//FIM DE GETERS E SETERS

void inserir (Pessoa *novo){
  if (novo->getIdade() < this->idade){
    if(this->esquerda == NULL)
      this->esquerda = novo;
    else
      this->esquerda->inserir(novo);
  }else
    if(this->direita == NULL)
      this->direita = novo;
    else
      this->direita->inserir(novo);

}

};//fim classe Pessoa!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1














//       if(novo->id >= this->id){
//               if(this->direita == NULL){
//                 novo->pai = this;
//                 this->direita = novo;
//                 return 1;
//
//               }
//           else
//           this->direita->inserir(novo);
//       }
//       else{
//           if(this->esquerda == NULL){
//             novo->pai = this;
//             this->esquerda = novo;
//             return 1;
//           }
//           else
//           this->esquerda->inserir(novo);
// }















// class Fisica:public Pessoa{
//
// protected:
//     int rg;
//     int cpf;
//
// public:
//
//   Fisica(){
//     nome = "";
//     idade = 0;
//
//     rg = 0;
//     cpf = 0;
//   };
//
//   Fisica(string n, int i, int gr, int fpc){
//     nome = n;
//     idade = i;
//     rg = gr;
//     cpf = fpc;
//   };
//
//   ~Fisica(){
//     cout << "destruindo instancia de Fisica" << endl;
//   };
//
//   int getRg(){
//     return rg;
//   };
//
//   void setRg(int gr){
//     rg = gr;
//   };
//
//   int getCpf(){
//     return cpf;
//   };
//
//   void setCpf(int fpc){
//     cpf = fpc;
//   };
//
// };//fim classe Fisica
//
// class Juridica:public Fisica{
// protected:
//   int cnpj;
//
// public:
//   Juridica(){
//     nome = "";
//     idade = 0;
//
//     rg = 0;
//     cpf = 0;
//
//     cnpj = 0;
//   };
//
//   Juridica(string n, int i, int gr, int fpc, int jpnc){
//     nome = n;
//     idade = i;
//
//     rg = gr;
//     cpf = fpc;
//
//     cnpj = jpnc;
//   };
//
//   int getCnpj(){
//     return cnpj;
//   };
//
//   void setCnpj(int jpnc){
//     cnpj = jpnc;
//   };
//
// };//fim de Juridica
