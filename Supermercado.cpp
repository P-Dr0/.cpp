#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int>estoque;
	list<int>venda;
	list<int>::iterator p;
	int x;  
	int i;
	int c;
	int n;
	
	cin >> n;
	
	for(i = 0;i < n;i++){
		cin >> c;
		if(c == 1){
			cin >> x;
			estoque.push_back(x);
		}
		else if(c == 2){
			for(p = estoque.begin();p != estoque.end();p++){
				x = *p;
				venda.push_back(x);
		
            }
		}
	}
	
	for(p = estoque.begin();p != estoque.end();p++){
		cout << *p << " " ;
	}

	for(p = venda.begin();p != venda.end();p++){
		cout << *p << " " ;
	}
	
	return 0;
}