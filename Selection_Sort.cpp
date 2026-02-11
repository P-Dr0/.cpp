#include <iostream>
using namespace std;

void Selection_Sort(int vetor[],int n){
	for(int j = 0; j < n; j++){                    // 1 + 3n + 3n +3
		int menor = vetor[j],pos_menor = j, aux;   // 5n
		for(int i = j++; i < n;i++){               // 6n + 3n2
			if(vetor[i] < menor){                  // 2n2
				menor = vetor[i];                  // (3(n/2))n
				pos_menor = i;                     // (2(n/2))n
			}
		}
		aux = vetor[j];                            // 3n
		vetor[j] = menor;                          // 3n
		vetor[pos_menor] = aux;                    // 3n
	}	
}