/*
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody.
Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so
that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello,
and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello.
Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters,
its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

Examples
input
ahhellllloou
output
YES
input
hlelo
output
NO

*/

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
