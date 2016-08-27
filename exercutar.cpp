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

    cout << endl;
    qtd--;
  }

  // cout << "DADOS DA PESSOA:" << endl;
  // cout << raiz->getNome() << " - " << raiz->getIdade() << endl;
  cout << endl << "Pre ordem: " << endl;
  raiz->mostraPre();
  cout << endl << "Em ordem: "<< endl;
  raiz->mostraEm();
  cout << endl << "Pos ordem: "<< endl;
  raiz->mostraPos();
  cout << endl << endl;

  cout << "Agora vamos acabar com a palaçada.. huehue o/ " << endl;
  raiz->deletarApohaToda();
  raiz = NULL;
  if(raiz == NULL){
    cout << "Ta ceeeeeeeeeeeeeeeeeeeeeeeeerto" << endl;
  }else{
    cout << "TA ERRAAAAAADOOOOOOOOOOOOOOOOOO" << endl;
  }
  return 0;
}
