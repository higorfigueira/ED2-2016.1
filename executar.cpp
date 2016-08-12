#include "veiculo.hpp"

int main(int agrc, char **argv){
  string texto;
  float valor;
  int numero;

  Veiculo veiculo;
  cout << "Qual a marca?" << endl;
  cin >> texto;
  veiculo.setMarca(texto);

  cout << "Qual o modelo?" << endl;
  cin >> texto;
  veiculo.setModelo(texto);

  cout << "Qual o preco?" << endl;
  cin >> valor;
  veiculo.setPreco(valor);

  cout << endl << "DADOS:" << endl;
  cout << veiculo.getMarca() << endl;
  cout << veiculo.getModelo() << endl;
  cout << veiculo.getPreco() << endl << endl;

  Carro *carro = new Carro();

  cout << "Diga a marca:" << endl;
  cin >> texto;
  carro->setMarca(texto);

  cout << "Diga o modelo:" << endl;
  cin >> texto;
  carro->setModelo(texto);

  cout << "Diga o preco:" << endl;
  cin >> valor;
  carro->setPreco(valor);

  cout << "Diga o Tipo de Cambio:" << endl;
  cin >> numero;
  carro->setTipoCambio(numero);

  cout << "Diga o Numero de Assentos:" << endl;
  cin >> numero;
  carro->setNumeroAssento(numero);

  cout << endl << "DADOS DO CARRO:" << endl;
  cout << carro->getMarca() << endl;
  cout << carro->getModelo() << endl;
  cout << carro->getPreco() << endl;
  cout << carro->getTipoCambio() << endl;
  cout << carro->getNumeroAssento() << endl << endl;


}
