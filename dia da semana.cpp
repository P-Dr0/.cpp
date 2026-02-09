#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{

    int d;
    int m;
    int a;
    int ds;
    int g;
    int f;
    int delta;
    int n;
    float frac;
    float intpart;

    cin >> d >> m >> a;

    if(m > 2)
    {	
        g = a;
        f = m + 1;
    }
	else if(m <= 2)
	{
        g = a - 1;
        f = m + 13;
    }

    n = int(365.25 * g) + int(30.6 * f) - 621049 + d;
    
    if(n < 36523)
        delta = 2;
    else if( 36523 <= n && n < 73048)
        delta = 1;
    else if(n >= 73048)
        delta = 0;
    
    frac = modf(n/7, &intpart);

    ds = round(frac * 7) + delta + 1;

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