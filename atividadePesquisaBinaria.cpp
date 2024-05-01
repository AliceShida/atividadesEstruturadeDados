#include <iostream>
using namespace std;

int buscaBinaria(int vetor[], int fim, int valorProcurado){

	int inicio = 0, meio;

	while(inicio <= fim){

		meio=(inicio + fim) / 2; 

		if(vetor[meio] == valorProcurado) return meio;
		if(vetor[meio] < valorProcurado) inicio = meio + 1; 
		if(vetor[meio] > valorProcurado) fim = meio - 1; 
	}

	return -1; //se o while terminar sem a função retornar, o número não está no vetor
}

int buscaLinear(int vetor[], int tamanho, int valorProcurado){
    int contador = 0;
    while (contador < tamanho){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valorProcurado){
            return i;
            contador++;
            cout<<"quantidade de repetições (busca Linear): "<< contador;
        }
    }
    }

    return -1;
}

int main(){
  
    int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = 10;

    int indiceBuscaBinaria = buscaBinaria(vetor, tamanho, 12);
    int indiceBuscaLinear = buscaLinear(vetor, tamanho, 21);
    
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