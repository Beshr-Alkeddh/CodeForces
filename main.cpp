/*
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday.
We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren.
The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4).
The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
input
5
1 2 4 3 3
output
4
input
8
2 3 4 4 2 1 3 1
output
5

Note
In the first test we can sort the children into four cars like this:

the third group (consisting of four children),
the fourth group (consisting of three children),
the fifth group (consisting of three children),
the first and the second group (consisting of one and two children, correspondingly).
There are other ways to sort the groups into four cars.

*/

#include <iostream>
using namespace std;
int main()
{
	int n, a = 0, b = 0, c = 0, d = 0;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = 0; i < n; i++)
		if (p[i] == 1)
			a++;
		else if (p[i] == 2)
			b++;
		else if (p[i] == 3)
			c++;
		else
			d++;
	while (a != 0 && c != 0)
	{
		c--;
		a--;
		d++;
	}
	while (b > 0 && a > 1)
	{
		a -= 2;
		b--;
		d++;
	}
	while (b > 0 && a == 1)
	{
		a--;
		b--;
		d++;
	}
	if (a == 0 && c != 0)
		d += c;
	if (b >= 2)
	{
		d += b / 2;
		b = b % 2;
	}
	else if (b < 2 && b != 0)
		d++;
	if (a >= 4)
	{
		d += a / 4;
		a = a % 4;
	}
	else if (a < 4 && a != 0)
		d++;
	cout << d << endl;
	delete[] p;
	return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
	long long n, a = 0, b = 0, c = 0, d = 0;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = 0; i < n; i++)
		if (p[i] == 1)
			a++;
		else if (p[i] == 2)
			b++;
		else if (p[i] == 3)
			c++;
		else
			d++;
	while (a != 0 && c != 0)
	{
		c--;
		a--;
		d++;
	}
	if (b >= 2)
	{
		d += b / 2;
		b = b % 2;
	}
	if (a >= 4)
	{
		d += a / 4;
		a = a % 4;
	}
	while (b > 0 && a > 1)
	{
		a -= 2;
		b--;
		d++;
	}
	while (b > 0 && a == 1)
	{
		a--;
		b--;
		d++;
	}
	if (a == 0 && c != 0)
		d += c;
	if (b < 2 && b != 0)
		d++;
	if (a < 4 && a != 0)
		d++;
	cout << d << endl;
	delete[] p;
	return 0;
}
*/
