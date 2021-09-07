#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sum = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
			sum++;
	if (sum != 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
