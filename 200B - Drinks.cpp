#include <iostream>
using namespace std;
int main()
{
	float n, sum = 0,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sum += x;
	}
	cout << sum/n << endl;
	return 0;
}
