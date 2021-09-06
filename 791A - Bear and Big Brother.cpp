#include <iostream>
using namespace std;
int main()
{
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; sum++)
	{
		i *= 3;
		b *= 2;
	}
	cout << sum << endl;
	return 0;
}
