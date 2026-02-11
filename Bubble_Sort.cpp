#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho){
    int i,j;
    int trab;
    bool troca;
    int limite;
    
    troca = true;
    limite = tamanho - 1;
    while(troca){
        troca = false;
        for(i = 0; i< limite; i++){
            if(vetor[i] > vetor[i + 1]){
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;
                j = i;
                troca = true;
            }
        }
        limite = j;
    }
}