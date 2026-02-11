#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	int i;
	float H;
	
	cin >> n;
	
	H = 0;
	for(i = 1; i <= n; i++)
	{
		H = H + (1.0 / i);
	}
	
	cout << fixed << setprecision(4) << H << endl;
	
	return 0;
}