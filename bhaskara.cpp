#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double A;
	double B;
	double C;
	double R1;
	double R2;
	double delta;

	cin >> A >> B >> C;

	delta = (pow(B , 2)) - (4 * A * C);
	R1 = ( (-B) + (sqrt(delta)) ) / (2 * A);
	R2 = ( (-B) - (sqrt(delta)) ) / (2 * A);

	if(delta <= 0 || A == 0 || B == 0 || C == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		cout << fixed << setprecision(5);
		cout << "R1 " << R1 << endl;
		cout << "R2 " << R2 << endl;
	}

	return 0;
}
