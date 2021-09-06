#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == tolower(s[i]))
			x++;
		else
			y++;
	if (x >= y)
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
	else
		for (int i = 0; i < s.length(); i++)
			s[i] = toupper(s[i]);
	cout << s << endl;
	return 0;
}
