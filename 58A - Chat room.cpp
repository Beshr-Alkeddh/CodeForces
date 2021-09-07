#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int x=0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'h' && x == 0)
			x++;
		else if (s[i] == 'e' && x == 1)
			x++;
		else if (s[i] == 'l' && x == 2)
			x++;
		else if (s[i] == 'l' && x == 3)
			x++;
		else if (s[i] == 'o' && x == 4)
			x++;
	}
	if (x == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
