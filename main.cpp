/*
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains o
nly the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is
almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
input
47
output
YES
input
16
output
YES
input
78
output
NO

Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.

*/

#include <iostream>
using namespace std;
int F(int a)
{
	int sum = 0;
	if (a % 4 == 0 || a % 7 == 0)
		sum = 1;
	else
		while (a > 0)
		{
			if (a % 10 == 4 || a % 10 == 7)
			{
				sum = 1;
				a /= 10;
			}
			else
			{
				sum = 0;
				break;
			}
		}
	return sum;
}
int main()
{
	int x, sum = 0;
	cin >> x;
	if (F(x) == 1)
		sum = 1;
	else
		for (int i = 1; i < x; i++)
			if (x % i == 0)
				if (F(i) == 1)
				{
					sum = 1;
					break;
				}
	if (sum == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
