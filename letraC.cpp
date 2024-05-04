#include <iostream>
using namespace std;

int buscaBinaria(int vetorOrdenado[], int fim, int valorProcurado) {
    int inicio = 0, meio;
    int qtdRepeticoesB = 0;

    while (inicio <= fim) {
         meio = (inicio + fim) / 2;

        if (vetorOrdenado[meio] == valorProcurado) {
            cout << "Quantidade de repetições (busca Binária): " << qtdRepeticoesB << endl;//retorna as repeticoes se o valor estiver no vetor
            return meio;
        } else if (vetorOrdenado[meio] < valorProcurado) {
            inicio = meio + 1; // Busca na metade direita
        } else {
            fim = meio - 1; // Busca na metade esquerda
        }
        qtdRepeticoesB++;
    }

    cout << "Quantidade de repetições (busca Binária): " << qtdRepeticoesB << endl;//retorna as repeticoes se o valor não estiver no vetor
    return -1; 
}

int buscaLinear(int vetorDesordenado[], int tamanho, int valorProcurado) {
    int qtdRepeticoesL = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetorDesordenado[i] == valorProcurado) {
            cout << "Quantidade de repetições (busca Linear): " << qtdRepeticoesL << endl;
            return i;
        }
        qtdRepeticoesL++;
    }

    cout << "Quantidade de repetições (busca Linear): " << qtdRepeticoesL << endl;
    return -1;
}

int main() {
//mais de um valor 1 no vetor, mas só mostra o primeiro indice com o valor encontrado:
//no vetor ordenado a busca ocorre do meio para a esquerda, com isso o 1° indice será o 2
    int vetorOrdenado[] = {0, 1, 1, 3, 4, 5, 6, 7, 8, 9};
//no vetor desordenado a busca ocorre de forma linear, com isso o 1° inice encontrado será o 3
    int vetorDesordenado[] = {3, 7, 2, 1, 8, 5, 6, 1, 4, 9};
    int tamanho = 10;
    
    int indiceBuscaBinaria = buscaBinaria(vetorOrdenado, tamanho, 1);
    int indiceBuscaLinear = buscaLinear(vetorDesordenado, tamanho, 1);

    if (indiceBuscaBinaria != -1) {
        cout << "(busca binária) Valor encontrado no índice: " << indiceBuscaBinaria << endl;
    } else {
        cout << "(busca binária) Valor não encontrado" << endl;
    }

    if (indiceBuscaLinear != -1) {
        cout << "(Busca Linear) Valor encontrado no índice: " << indiceBuscaLinear << endl;
    } else {
        cout << "(Busca Linear) Valor não encontrado" << endl;
    }

    return 0;
}