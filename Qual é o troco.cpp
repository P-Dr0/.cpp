#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double TOTAL_DE_DINHEIRO;
	double PRECO_DA_COMPRA;
	double TROCO;
	
	cin >> TOTAL_DE_DINHEIRO >> PRECO_DA_COMPRA;
	TROCO = TOTAL_DE_DINHEIRO - PRECO_DA_COMPRA;
	
	cout << fixed << setprecision(2);
	cout << "TROCO = " << TROCO << endl;
	
	return 0;
}