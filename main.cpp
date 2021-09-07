/*
The translation from the Berland language into the Birland language is not an easy task.
Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little:
it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc.
However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t.
Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters.
The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples
input
code
edoc
output
YES
input
abb
aba
output
NO
input
code
code
output
NO

*/

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
