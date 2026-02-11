#include <iostream>
using namespace std;

int main()
{
	float x;
	float y;
	float z;
	
	cin >> x;
	cin >> y;
	cin >> z;
	
	if(x < y && y < z)
	{
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
	else if(x < z && z < y)
    {
		cout << x << endl;
		cout << z << endl;
		cout << y << endl;
	}
	else if(y < x && x < z)
	{
		cout << y << endl;
		cout << x << endl;
		cout << z << endl;
	}	
	else if(y < z && z < y)
	{
        cout << y << endl;
		cout << z << endl;
		cout << x << endl;
	}
	else if(z < x && x < y)
	{
	    cout << z << endl;
		cout << x << endl;
		cout << y << endl;
	}	
	else if(z < y && y < x)
	{
        cout << z << endl;
		cout << y << endl;
		cout << x << endl;
	}
    cout << endl;    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;	
	
	return 0;
}