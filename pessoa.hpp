#include <iostream>
#include <string>

using namespace std;

class Pessoa{

protected:
    string nome;
    int idade;

public:
  Pessoa(){
    nome = "";
    idade = 0;
  };

  Pessoa(string n, int i){
    nome = n;
    idade = i;
  };

  ~Pessoa(){
    cout << "destruindo instancia de Pessoa" << endl;
  };

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

};//fim classe Pessoa

class Fisica:public Pessoa{

protected:
    int rg;
    int cpf;

public:

  Fisica(){
    nome = "";
    idade = 0;

    rg = 0;
    cpf = 0;
  };

  Fisica(string n, int i, int gr, int fpc){
    nome = n;
    idade = i;
    rg = gr;
    cpf = fpc;
  };

  ~Fisica(){
    cout << "destruindo instancia de Fisica" << endl;
  };

  int getRg(){
    return rg;
  };

  void setRg(int gr){
    rg = gr;
  };

  int getCpf(){
    return cpf;
  };

  void setCpf(int fpc){
    cpf = fpc;
  };

};//fim classe Fisica

class Juridica:public Fisica{
protected:
  int cnpj;

public:
  Juridica(){
    nome = "";
    idade = 0;

    rg = 0;
    cpf = 0;

    cnpj = 0;
  };

  Juridica(string n, int i, int gr, int fpc, int jpnc){
    nome = n;
    idade = i;

    rg = gr;
    cpf = fpc;

    cnpj = jpnc;
  };

  int getCnpj(){
    return cnpj;
  };

  void setCnpj(int jpnc){
    cnpj = jpnc;
  };

};//fim de Juridica
