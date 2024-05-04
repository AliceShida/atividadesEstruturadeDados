#include <iostream>
using namespace std;

 int buscaBinaria(int vetor[], int fim, int valorProcurado){

	int inicio = 0, meio;
    int qtdRepeticoesB = 0;
    
    	while(inicio <= fim){

		meio=(inicio + fim) / 2; 

	   if (vetor[meio] == valorProcurado) {
            cout << "Quantidade de repetições (busca Binária): " << qtdRepeticoesB << endl;
            return meio; // Elemento encontrado
        } else if (vetor[meio] < valorProcurado) {
            inicio = meio + 1; // Busca na metade direita
        } else {
            fim = meio - 1; // Busca na metade esquerda
        } 
    	qtdRepeticoesB++;
    }

	return -1; //se o while terminar sem a função retornar, o número não está no vetor
}

int buscaLinear(int vetor[], int tamanho, int valorProcurado) {
    int qtdRepeticoesL=0;
    
    for (int contador = tamanho-1; contador>=0; contador--) { //tamanho=10 -1 para percorrer o vetor
        for (int i = 0; i < tamanho; i++) {
            if (vetor[i] == valorProcurado) {
                cout << "Quantidade de repetições (busca Linear): " << qtdRepeticoesL << endl;
                return i;
            }
            qtdRepeticoesL++;
        }
    }
    return -1;
}

int main(){
  
    int vetor[] = {4, 1, 6, 3, 0, 5, 2, 7, 8, 9};
    int tamanho = 10;

    int indiceBuscaBinaria = buscaBinaria(vetor, tamanho, 8);
    int indiceBuscaLinear = buscaLinear(vetor, tamanho, 7);
    
    if(indiceBuscaBinaria != -1){
        cout << "(busca binária) Valor encontrado no indice: " << indiceBuscaBinaria << endl;
    }else{
        cout << "(busca binária) Valor nao encontrado"<< endl;
    }
    
    if(indiceBuscaLinear != -1){
        cout << "(Busca Linear) Valor encontrado no indice: " << indiceBuscaLinear << endl;
    }else{
        cout << "(Busca Linear) Valor nao encontrado"<< endl;
    }

    
    
    
    
    
    
    return 0;
}