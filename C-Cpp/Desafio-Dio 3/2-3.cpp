#include <iostream>
#include <string>

// A saida de min 1 max 12 AAAADDAADD está sendo 1. 
// tenho que mudar o comando de A para D e o de D para A.

// 1 <= vmin < vmax <= 100 
// 1 <= comandos <= 100
// Acelerando o robo em 1 e desacelerando o robo em 1
// O robo deve iniciar com a velocidade minima e não pode passar da velocidade maxima.



class Robo {
public:
    int velocidadeAtual = 0;
    int velocidadeMaxima;
    int velocidadeMinima;
    
    Robo(int vmin, int vmax) : velocidadeMinima(vmin), velocidadeMaxima(vmax) {
        velocidadeAtual = vmin;
    }
    
    void acelerar() {

        //TODO: Implementar a lógica especificada para o método "acelerar".
        if (velocidadeAtual < velocidadeMaxima) {
            velocidadeAtual = velocidadeAtual + 1; // Aumentar a velocidade em 1
        } else {
            velocidadeAtual >= velocidadeMaxima ; // A velocidade não pode passar da velocidade máxima; 
        }
    };
    void desacelerar() {

        //TODO: Implementar a lógica especificada para o método "desacelerar"
        if (velocidadeAtual > velocidadeMinima) {
            velocidadeAtual -= 1; // Aumentar a velocidade em 1
        } else {
            velocidadeAtual <= velocidadeMinima; 
        }
    };
};
int main() {
    int vmin, vmax;
    std::string comandos;
    
    std::cin >> vmin >> vmax;
    std::cin >> comandos;
    
    Robo robo(vmin, vmax);
    for (char comando : comandos) {

           if (comando == 'A') {
                robo.acelerar();
            } else if (comando == 'D') {
                robo.desacelerar();
            }


        //TODO: Considerar os comandos para invocar seu respectivo método.
    }
    std::cout << robo.velocidadeAtual << std::endl;
    return 0;
}
