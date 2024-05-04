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
    int vetorOrdenado[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//vetor ordenado para a busca binaria funcionar corretamente
    int vetorDesordenado[] = {3, 7, 2, 0, 8, 5, 6, 1, 4, 9};//vetor desordenado para a busca linear funcionar
    int tamanho = 10;
    
    int indiceBuscaBinaria = buscaBinaria(vetorOrdenado, tamanho, 16);
    int indiceBuscaLinear = buscaLinear(vetorDesordenado, tamanho, 16);

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
