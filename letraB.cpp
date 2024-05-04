#include <iostream>
using namespace std;

int buscaBinaria(int vetorOrdenado[], int fim, int valorProcurado) {
    int inicio = 0, meio;
    int qtdRepeticoesB = 0;

    while (inicio <= fim) {
         meio = (inicio + fim) / 2;

        if (vetorOrdenado[meio] == valorProcurado) {
            cout << "Quantidade de repetições (busca Binária): " << qtdRepeticoesB << endl;
            return meio;
        } else if (vetorOrdenado[meio] < valorProcurado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1; 
        }
        qtdRepeticoesB++;
    }

    cout << "Quantidade de repetições (busca Binária): " << qtdRepeticoesB << endl;
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
    int vetorOrdenado[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vetorDesordenado[] = {3, 7, 2, 0, 8, 5, 6, 1, 4, 9};
    int tamanho = 10;
    
    //só uma pesquisa será feita
    cout<< "Busca Binária: " << endl;
    int indiceBuscaBinaria = buscaBinaria(vetorOrdenado, tamanho, 8);
    
//    int indiceBuscaLinear = buscaLinear(vetorDesordenado, tamanho, 8);
    if (indiceBuscaBinaria != -1) {
        cout << "Valor encontrado no índice: " << indiceBuscaBinaria << endl;
    } else {
        cout << "Valor não encontrado" << endl;
    }

    //if (indiceBuscaLinear != -1) {
    //    cout << "(Busca Linear) Valor encontrado no índice: " << indiceBuscaLinear << endl;
   // } else {
   //     cout << "(Busca Linear) Valor não encontrado" << endl;
   // }

    return 0;
}