#include <iostream>
#include <string>

//O código deverá retornar uma mensagem (string) informando o nome,
//modelo e ano do robô criado, de acordo com o que foi recebido como entrada.
// Veja como exemplo a entrada recebida abaixo:
// DioBot DIO 2020
// De acordo com esses valores de entrada, a saída ficará desta maneira:
// O robô DioBOT, modelo DIO, foi fabricado em 2020.
// Levando em consideração que o codigo é em C++ 20

using namespace std;

class Robo {
  private: string nome;
  string modelo;
  int anoFabricacao;
  public: Robo(string nome, string modelo, int anoFabricacao) {
    this -> nome = nome;
    this -> modelo = modelo;
    this -> anoFabricacao = anoFabricacao;
  }
  void exibirInformacoes(){ 
    //TODO: Imprimir as informações de acordo com o enunciado deste desafio.
    // Usar o metodo get para obter as informações do robô.
    cout << "O robô " << nome << ", modelo " << modelo << ", foi fabricado em " << anoFabricacao << "." << endl;
  // Exemplo de saída: O robô DioBot, modelo DIO, foi fabricado em 2020.
    // O robô DioBot, modelo DIO, foi fabricado em 2020.

}
};
int main() {
  string nome, modelo;
  int ano;
  
  getline(cin, nome);
  getline(cin, modelo);
  cin >> ano;
  // TODO: Criar um rbo passando os valores lidos em seu construtor(metodo construtor).
  Robo robo(nome, modelo, ano);

  // invocar o método exibirInformacoes() para imprimir as informações do robô.
    robo.exibirInformacoes();


  return 0;
};