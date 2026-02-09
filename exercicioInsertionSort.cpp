#include <iostream>
using namespace std;

void InsertionSort(int vetor[],int tamanho){
	int i,j;
	int chave;
	
	for(j = 1; j < tamanho; j++){
		chave = vetor[j];
		i = j - 1;
		while((i >= 0) && (vetor[i] > chave)){
			vetor[i + 1] = vetor [i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}

int main(){
	
	int vetor[30];
	int i = 0;
	
	cin >> vetor[i];
	while(vetor[i] != 0){
		cin >> vetor[i];
		i++;
	}	
	
	InsertionSort(vetor,i);
	
	i = 0;
	while(vetor[i] != 0)
	{
		cout << vetor[i] << endl;
	}
	
	
	
	return 0;
}