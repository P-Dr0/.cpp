#include <iostream>
#include <cstdlib>
using namespace std;

float raiz(int x,int c,float n,float e){
	abs(c);
	
	if(c <= e){
		return n;
	}
	else{
		return ((n*n)+ x)/(2*n);
	}	
}
int main()
{
	int x,c;
	float n,e;
	
	cin >> x >> n >> e;
	
	c = ((n * n) - x);
	
	cout << raiz(x,c,n,e) << endl;
	
	return 0;
}