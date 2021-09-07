/*
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he
makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai.
Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).

The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

Examples
input
6
2 2 1 3 4 1
output
3
input
3
2 2 9
output
3

Note
In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.

*/

#include <iostream>
using namespace std;
int main()
{
	int n, x, sum = 0, y = 0;
	cin >> n;
	int *a = new int[n];
	int *p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		p[i] = 0;
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= a[i + 1])
		{
			sum++;
			p[y] = sum;
		}
		else
		{
			p[y] = sum;
			y++;
			sum = 0;
		}
	}
	sum = 0;
	for (int i = 0; i < n ; i++)
		if (p[i] > sum)
			sum = p[i];
	sum++;
	cout << sum << endl;
	delete[] a;
	return 0;
}
