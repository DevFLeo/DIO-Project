#include <iostream>
#include <string>

// A segunda linha contém uma string que representa o tipo de produto 
// ("E" para eletrônico ou "V" para vestuário), seguida por um espaço e as informações adicionais 
// específicas de cada tipo (um inteiro G (1 ≤ G ≤ 60) para garantia em meses de produtos 
// eletrônicos ou uma string T (P, M ou G) para o tamanho de produtos de vestuário).



class Produto {
  protected: std::string nome;

  public: Produto(std::string n): nome(n) {}

  virtual std::string informacoes() = 0;
};

class Eletronico: public Produto {
  int garantia;

  public: Eletronico(std::string n, int g): Produto(n), garantia(g) {}

  std::string informacoes() override {
    return nome + ", garantia: " + std::to_string(garantia) + " meses";
  }
};

//TODO: Criar a classe Vestuario de acordo com as especificações deste desafio.
class Vestuario: public Produto {
  std::string tamanho;

  public: Vestuario(std::string n, std::string t): Produto(n), tamanho(t) {}

  std::string informacoes() override {
    return nome + ", tamanho: " + tamanho;
  }
};

int main() {
  std::string nome;
  std::getline(std::cin, nome);
  char tipo;
  std::cin >> tipo;
  
  Produto * produto;
  if (tipo == 'E') {
    int garantia;
    std::cin >> garantia;
    produto = new Eletronico(nome, garantia);
    
  } else if (tipo == 'V') {
    std::string tamanho;
    std::cin >> tamanho;
    produto = new Vestuario(nome, tamanho);
   }
  
  std::cout << produto -> informacoes() << std::endl;
  
  delete produto;
  return 0;
}
// Não sei como funcionou com um espaço a mais no final do nome do produto, mas funcionou.
// O que eu fiz foi colocar o getline para ler a linha inteira e depois o cin para ler o tipo do produto.
// O getline lê a linha inteira, incluindo o espaço a mais no final do nome do produto.
// então não faz o menor sentido, mas funcionou.