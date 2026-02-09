#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numeros;
	int positivos = 0;
	int i;
	float media;
	float soma;
	
	soma = 0;
	
	for(i = 0; i < 6; i++)
	{
		cin >> numeros;
		
		if(numeros > 0)
		{
			soma = soma + numeros;
			positivos++;
		}
	}
	
	if(positivos != 0)
	{
		media = soma / positivos;
	}
	
	cout << positivos << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << media << endl;
	
	return 0;
}