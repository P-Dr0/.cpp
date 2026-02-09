#include <iostream>
using namespace std;

int sequencial(int vetor[], int tamanho, int x)
{
	bool achou = false; // var aux p/ busca
	int i = 0; // contador
	while (achou == false && i < tamanho)
		achou = vetor[i++] == x;
	if (achou)
		return (i - 1);
	else
		return -1;
}

int main()
{
	int x;
	int i;
	int n = 100;
	int nu[100];
	
	for(i = 0; i < n; i++){
		cin >> nu[i];
		if(nu[i] == -1){
			break;
		}
	}
	cin >> x;
	
	if(sequencial(nu,i,x) == -1){
		cout << x << " nao encontrado" << endl;
	}
	else{
		cout << x << " encontrado na posicao " << sequencial(nu,i,x) << endl;
	}
	
	return 0;
}
