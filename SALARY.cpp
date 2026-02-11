#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	double NUMBER;
	int HORAS;
	double SALARIO_POR_HORA;
	double SALARY;
	
	cin >> NUMBER >> HORAS >> SALARIO_POR_HORA;
	SALARY = SALARIO_POR_HORA * HORAS;
	cout << "NUMBER = " << NUMBER <<endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << SALARY << endl;
	
	return 0;
}