#include <iostream>
using namespace std;

int buscaBinaria(int vetorOrdenado[], int fim, int valorProcurado) {
    int inicio = 0;
    int qtdRepeticoesB = 0;
    bool encontrado = false;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetorOrdenado[meio] == valorProcurado) {
            cout << "valor encontrado no indice: " << meio << endl;
            encontrado = true; //atualizamos o valor bool 
            
    //for para verificar os valores dos indices da esquerda:
         for (int i = meio - 1; i >= 0 && vetorOrdenado[i] == valorProcurado; i--) {
                cout << "e no índice " << i << endl;
            }  
    //for para verificar os valores dos indices da direita:
        for (int i = meio + 1; i > fim && vetorOrdenado[i] == valorProcurado; i++) {
                cout << "e no índice " << i << endl;
            }
            break;
            
        } else if (vetorOrdenado[meio] < valorProcurado) {
            inicio = meio + 1; 
        } else {
            fim = meio;
        }
        qtdRepeticoesB++;
    }
        
     if (!encontrado) {
        cout << "Valor não encontrado" << endl;
    }

    cout << "Quantidade de repetições (busca Binária): " << qtdRepeticoesB << endl;
}

int buscaLinear(int vetorDesordenado[], int tamanho, int valorProcurado) {
    int qtdRepeticoesL = 0;
    bool encontrado = false;

    for (int i = 0; i < tamanho; i++) {
        if (vetorDesordenado[i] == valorProcurado) {
            if (!encontrado) {
                cout << "Valor encontrado no índice " << i << endl;
                encontrado = true;
            } else {
                cout << "e no índice " << i << endl;
            }
        }
        qtdRepeticoesL++;
    }

      if (!encontrado) {
        cout << "Valor não encontrado" << endl;
    }
    cout << "Quantidade de repetições (busca Linear): " << qtdRepeticoesL << endl;
}

int main() {

    int vetorOrdenado[] = {0, 1, 1, 3, 4, 5, 6, 7, 8, 9};
    int vetorDesordenado[] = {3, 7, 2, 1, 8, 5, 6, 1, 4, 9};
    int tamanho = 10;
    
    cout << "Busca Binária:" << endl;
    buscaBinaria(vetorOrdenado, tamanho, 1);
    cout << "Busca Linear:" << endl;
    buscaLinear(vetorDesordenado, tamanho, 1);

    return 0;
}