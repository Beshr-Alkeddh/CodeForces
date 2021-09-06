#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = 0;
	for (int i = 6; i < s.length(); i++)
	{
		int sum = 0;
		for (int j = 0; j < 7; j++)
			if (s[i] == s[i - j])
				sum++;
		if (sum >= 7)
		{
			n = 1;
			break;
		}
	}
	if (n == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
