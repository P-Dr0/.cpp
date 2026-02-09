#include<iostream>
using namespace std;
\
int main()
{
	int l, c, r1, r2, w, ww, L;
	cin >> l >> c >> r1 >> r2;
	L = (r1 + r2) * 2;

	w = r1 * 2;
	ww = r2 * 2;
	if(l > c)
	{
		if(l >= L && c >= (w || ww))
		{
			cout << "S" << endl;
		}
		else cout << "N" << endl;
	}
	else if(c > l)
	{
		if(c >= L && l >= (w || ww))
		{
			cout << "S" << endl;
		}
		else cout << "N" << endl;
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
		else cout << "N" << endl;
	}

	return 0;

}
