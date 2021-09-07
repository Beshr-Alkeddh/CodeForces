/*
Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions.
On the last class the teacher wrote three positive integers a, b, c on the blackboard.
The task was to insert signs of operations '+' and '*', and probably brackets between the numbers so that the value
of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote
numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
Note that you can insert operation signs only between a and b, and between b and c, that is, you cannot swap integers.
For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9.

Your task is: given a, b and c print the maximum value that you can get.

Input
The input contains three integers a, b and c, each on a single line (1 ≤ a, b, c ≤ 10).

Output
Print the maximum value of the expression that you can obtain.

Examples
input
1
2
3
output
9
input
2
10
3
output
60

*/

#include <iostream>
using namespace std;
int main()
{
	int x, y, z, a, b, c, d, e;
	cin >> x >> y >> z;
	a = x + y * z;
	b = x * (y + z);
	c = x * y * z;
	d = (x + y) * z;
	e = x + y + z;
	if (a >= b && a >= c && a >= d && a >= e)
		cout << a << endl;
	else if (b >= a && b >= c && b >= d && b >= e)
		cout << b << endl;
	else if (c >= a && c >= b && c >= d && c >= e)
		cout << c << endl;
	else if (d >= a && d >= b && d >= c && d >= e)
		cout << d << endl;
		else if (e >= a && e >= b && e >= c && e >= d)
		cout << e << endl;

	return 0;
}
