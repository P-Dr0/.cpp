#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int valores;
	int i,sum = 0;
	
	for(i = 0; i < 6; i++)
	{
		cin >> valores;
		if(valores > 0)
			sum++;
	}
    
    cout << sum << " valores positivos" << endl;
    
	return 0;
}