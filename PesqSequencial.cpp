#include <iostream>
using namespace std;

int main()
{
	int x[100];
	int i;
	int X;
	int encontrado;
	int pos;
	int n = 40;
	
	for(i = 0;i < n;i++){
		cin >> x[i];
		if(x[i] == -1){
			break;
		}
	}
	cin >> X;
	
	i = 0;
	encontrado = 0;
	
	while(i < x[i] && !encontrado)
	{
		if(x[i] == X){
			encontrado = 1;
			pos = i;
		}
		else{
			i++;
		}
	}
	
	if(encontrado == 1){
		cout << X << " encontrado na posicao " << pos << endl;
	}
	else{
		cout << X << " nao encontrado" << endl;
	}
	
	return 0;
}