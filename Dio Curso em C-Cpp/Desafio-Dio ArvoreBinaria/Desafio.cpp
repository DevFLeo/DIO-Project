#include <cstdlib>
#include <algorithm>
#include <iostream> 

struct Node {
    int valor;
    Node* esquerda;
    Node* direita;
    int altura;
};

int altura(Node* no) {
    return no == nullptr ? 0 : no->altura;
}

Node* novoNo(int valor) {
    Node* no = (Node*)malloc(sizeof(Node));
    no->valor = valor;
    no->esquerda = no->direita = nullptr;
    no->altura = 1;
    return no;
}

int fatorBalanceamento(Node* no) {
    if (no == nullptr)
        return 0;
    return altura(no->esquerda) - altura(no->direita);
}

Node* inserir(Node* raiz, int valor) {
    raiz->altura = 1 + std::max(altura(raiz->esquerda), altura(raiz->direita));
    raiz->altura = 1 + std::max(altura(raiz->esquerda), altura(raiz->direita));

    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    raiz->altura = 1 + std::max(altura(raiz->esquerda), altura(raiz->direita));

    int fb = fatorBalanceamento(raiz);

    // Casos de rotação
    if (fb > 1 && valor < raiz->esquerda->valor)
        return rotacaoDireita(raiz); // Esquerda-Esquerda

    if (fb < -1 && valor > raiz->direita->valor)
        return rotacaoEsquerda(raiz); // Direita-Direita

    if (fb > 1 && valor > raiz->esquerda->valor) {
        raiz->esquerda = rotacaoEsquerda(raiz->esquerda);
        return rotacaoDireita(raiz); // Esquerda-Direita
    }

    if (fb < -1 && valor < raiz->direita->valor) {
        raiz->direita = rotacaoDireita(raiz->direita);
        return rotacaoEsquerda(raiz); // Direita-Esquerda
    }

    return raiz;
}

// Função para realizar a rotação à direita
Node* rotacaoDireita(Node* y) {
    Node* x = y->esquerda;
    Node* T2 = x->direita;

    // Realiza a rotação
    x->direita = y;
    y->esquerda = T2;

    // Atualiza as alturas
    y->altura = std::max(altura(y->esquerda), altura(y->direita)) + 1;
    x->altura = std::max(altura(x->esquerda), altura(x->direita)) + 1;

    // Retorna a nova raiz
    return x;
}
// Função para realizar a rotação à esquerda
Node* rotacaoEsquerda(Node* x) {
    Node* y = x->direita;
    Node* T2 = y->esquerda;

    // Realiza a rotação
    y->esquerda = x;
    x->direita = T2;

    // Atualiza as alturas
    x->altura = std::max(altura(x->esquerda), altura(x->direita)) + 1;
    y->altura = std::max(altura(y->esquerda), altura(y->direita)) + 1;

    // Retorna a nova raiz
    return y;
}

Node* buscar(Node* raiz, int valor) {
    if (raiz == NULL || raiz->valor == valor)
        return raiz;
    
    if (valor < raiz->valor)
        return buscar(raiz->esquerda, valor);
    else
        return buscar(raiz->direita, valor);
}
