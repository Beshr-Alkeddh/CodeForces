#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, t;
	cin >> s >> t;
	if (s.length() == t.length())
	{
		int x = s.length();
		int sum = 0;
		for (int i = 0, j = x-1; i<x, j>=0; i++, j--)
			if (s[i] != t[j])
			{
				sum = 1;
				break;
			}
		if (sum == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}
