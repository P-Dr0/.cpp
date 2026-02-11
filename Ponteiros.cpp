#include <iostream>
using namespace std;

int main()
{
	int a;
	int *b;  // b é um ponteiro
	int c;
	
	b = &a;
	cin >> *b; 
	
	b = &c;
	cin >> *b;
	
	b = &a;
	
	cout << "a = " << *b << endl;
	
	b = &c;
	
	cout << "c = " << *b << endl;
	
	return 0;
}