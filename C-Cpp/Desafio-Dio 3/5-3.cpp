#include <iostream>
#include <string>

using namespace std;

enum Naipe {
  Paus = 0, Ouros = 1, Copas = 2, Espadas = 3
};

enum Valor {
  As = 1, Valete = 2, Dama = 3, Rei = 4
};

// Função para converter o valor de "Valor" para string
string valorParaString(Valor v) {
  switch (v) {
    case As: return "Ás";
    case Valete: return "Valete";
    case Dama: return "Dama";
    case Rei: return "Rei";
  }
}

// Função para converter o valor de "Naipe" para string
string naipeParaString(Naipe n) {
  switch (n) {
    case Paus: return "Paus";
    case Ouros: return "Ouros";
    case Copas: return "Copas";
    case Espadas: return "Espadas";
  }
}

class Carta {
private:
  Naipe naipe;
  Valor valor;
  
public:
  Carta(Naipe n, Valor v) : naipe(n), valor(v) {}

  Naipe getNaipe() {
    return naipe;
  }

  Valor getValor() {
    return valor;
  }
};

int main() {
  int valorEscolhido, naipeEscolhido;

  cin >> valorEscolhido;
  cin >> naipeEscolhido;

  // Criação da carta escolhida pelo usuário
  Carta cartaEscolhida(static_cast<Naipe>(naipeEscolhido), static_cast<Valor>(valorEscolhido));

  // Impressão usando as funções auxiliares para converter valores em strings
  cout << "Carta escolhida: " << valorParaString(cartaEscolhida.getValor()) << " de " << naipeParaString(cartaEscolhida.getNaipe()) << endl;

  return 0;
}
