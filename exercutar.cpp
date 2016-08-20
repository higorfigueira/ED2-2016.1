#include "pessoa.hpp"

int main(int argc, char const *argv[]) {


  string texto = "";
  int valor, qtd = 0;

  // Pessoa *a = new Pessoa();
  Pessoa *raiz = NULL;
  Pessoa *novo = NULL;

  cout << "Quantas pessoas deseja inserir:" << endl;
  cin >> qtd;

  while(qtd>0){
    novo = new Pessoa();
    cout << "diga o nome:" << endl;
    cin >> texto;
    novo->setNome(texto);

    cout << "informe a idade:" << endl;
    cin >> valor;
    novo->setIdade(valor);

    if(raiz == NULL)
      raiz = novo;
    else
      raiz->inserir(novo);

    qtd--;
  }

  cout << "DADOS DA PESSOA:" << endl;
  cout << raiz->getNome() << " - " << raiz->getIdade() << endl;




















  // Fisica *fisica = new Fisica();
  // Juridica *juridica = new Juridica();

  /*cout << "informe o nome da pessoa Fisica" << endl;
  cin >> texto;
  fisica->setNome(texto);

  cout << "informe a idade da pessoa fisica" << endl;
  cin >> valor;
  fisica->setIdade(valor);

  cout << "informe o cpf da pessoa fisica" << endl;
  cin >> valor;
  fisica->setCpf(valor);

  cout << "informe o rg da pessoa fisica" << endl;
  cin >> valor;
  fisica->setRg(valor);

  cout << "informe o nome da pessoa juridica" << endl;
  cin >> texto;
  juridica->setNome(texto);

  cout << "informe a idade da pessoa juridica" << endl;
  cin >> valor;
  juridica->setIdade(valor);

  cout << "informe o cpf da pessoa juridica" << endl;
  cin >> valor;
  juridica->setCpf(valor);

  cout << "informe o rg da pessoa juridica" << endl;
  cin >> valor;
  juridica->setRg(valor);

  cout << "informe o cnpj da pessoa juridica" << endl;
  cin >> valor;
  juridica->setCnpj(valor);

  cout << "Dadaos da pessoa Fisica:" << endl;
  cout << fisica->getNome() << endl;
  cout << fisica->getIdade() << endl;
  cout << fisica->getCpf() << endl;
  cout << fisica->getRg() << endl << endl;

  cout << "Dados da pessao Juridica:" << endl;
  cout << juridica->getNome() << endl;
  cout << juridica->getIdade() << endl;
  cout << juridica->getCpf() << endl;
  cout << juridica->getRg() << endl;
  cout << juridica->getCnpj() << endl << endl;
  */
  return 0;
}
