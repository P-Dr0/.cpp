#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double CAPITAL_INICIAL;
	double TAXA_DE_JUROS;
	double MONTANTE;
	double i;
	double LUCRO;
	int TEMPO_DE_APLICACAO;
	
	cin >> CAPITAL_INICIAL >> TAXA_DE_JUROS >> TEMPO_DE_APLICACAO;
	i = TAXA_DE_JUROS / 100;
	MONTANTE = CAPITAL_INICIAL * (pow((1 + i), TEMPO_DE_APLICACAO)) ;
	LUCRO = MONTANTE - CAPITAL_INICIAL;
	
	cout << fixed << setprecision(2);
	cout << "LUCRO = " << LUCRO << endl; 
	
	return 0;
}