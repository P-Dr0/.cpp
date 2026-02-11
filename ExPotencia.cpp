#include <iostream>
using namespace std;

int pot(int a,int n){
	if(n==0){
		return 1;
	}
	else if(n > 0){
		return n = n - 1;
	}
}

int main()
{
	int n, a;
	int c = 0;
	
	cin >> n >> a;
	
	pot(n);
	
	cout << pot(a, n) << endl;
	
	return 0;
}