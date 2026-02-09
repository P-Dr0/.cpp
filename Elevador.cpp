#include<iostream>
using namespace std;

int main()
{
	int l;
	int c,;
	int r1;
	int r2;
	int w;
	int ww;
	int L;

	cin >> l;
	cin >> c ;
	cin >> r1;
	cin >> r2;

	L = (r1 + r2) * 2;
	w = r1 * 2;
	ww = r2 * 2;

	if(l > c)
	{
		if(l >= L && c >= (w || ww))
		{
			cout << "S" << endl;
		}
		else
			cout << "N" << endl;
	}
	else if(c > l)
	{
		if(c >= L && l >= (w || ww))
		{
			cout << "S" << endl;
		}
		else
			cout << "N" << endl;
	}
	else if(c == l)
	{
		if(l >= L && c >= (w || ww))
		{
			cout << "S" << endl;
		}
		else if(c >= L && l >= (w || ww))
		{
			cout << "S" << endl;
		}
		else
			cout << "N" << endl;
	}

	return 0;
}
