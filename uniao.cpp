#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int>::iterator p1;
    list<int>::iterator p2;
    list<int>::iterator p;
	list<int>lista1;
	list<int>lista2;
	list<int>uniao;
	int x;
	
	cin >> x;
    while (x != 0)
    {
        lista1.push_back(x);
        cin >> x;
    }
    
    cin >> x;
    while (x != 0)
    {
        lista2.push_back(x);
        cin >> x;
    }

    p1 = lista1.begin();
    p2 = lista2.begin();
    while (p1 != lista1.end() && p2 != lista2.end()) {
        if (*p1 < *p2) {
            uniao.push_back(*p1);
            ++p1;
        } else {
            uniao.push_back(*p2);
            ++p2;
        }
    }
    
    for(p = uniao.begin();p != uniao.end();p++){
		cout << *p << " " ;
	}
	
	return 0;
}