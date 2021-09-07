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
