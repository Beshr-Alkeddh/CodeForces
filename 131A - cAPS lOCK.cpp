#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x, sum = 0;
	string s;
	cin >> s;
	x = s.length();
	for (int i = 1; i < x; i++)
		if (s[i] == tolower(s[i]))
			sum++;
	if (s[0] == tolower(s[0]) && sum == 0)
	{
		s[0] = toupper(s[0]);
		for (int i = 1; i < x; i++)
			s[i] = tolower(s[i]);
	}
	else if (s[0] == toupper(s[0]) && sum == 0)
		for (int i = 0; i < x; i++)
			s[i] = tolower(s[i]);
	cout << s << endl;
	return 0;
}
