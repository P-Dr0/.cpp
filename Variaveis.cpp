#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a = 3;
    int b = 5;
    int soma = a + b;
    int dif = a - b;
    int prod = a * b;
    int div = a / b;
    int media = (double)(a + b) / 2;
    
    cout << "soma = " << soma << endl;
	cout << "dif = " << dif << endl;
	cout << "prod = " << prod << endl;
	cout << "div = " << div << endl;
	cout << "media = " << media << endl;
	
    return 0;
}


