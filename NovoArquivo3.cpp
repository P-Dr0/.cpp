#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	double d;
	double m;
	double a;
	float n;
	float ds;
	float g;
	float f;
	float delta;

	cin >> d >> m >> a;

	if(m <= 2)
		g = a - 1;
	else if(m > 2)
		g = a;
	else if(m <= 2)
		f = m + 13;
	else if(m > 2)
		f = m + 1; 
	
	n=int(365.25*g)+int(30.6*f)-621049+d;
	
	if(n < 36523)
		delta = 2;
	else if(n > 36523 && n < 73048)
		delta = 1;
	else if(n >= 73048)
		delta = 0;
	 
	ds=round((n/7)*7)+delta+1;
	
	if(ds == 1)
		cout << "domingo" << endl;
	else if(ds == 2)
		cout << "segunda" << endl; 
	else if(ds == 3)
		cout << "terca-feira" << endl;
	else if(ds == 4)
		cout << "quarta-feira" << endl;
	else if(ds == 5)
		cout << "quinta-feira" << endl;
	else if(ds == 6)
		cout << "sexta-feira" << endl;
	else if(ds == 7)
		cout << "sabado" << endl;					 
    
    




	return 0;
}
