#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, sum = 0;
		cin >> n;
		int *a = new int[n];
		for (int j = 0; j < n; j++)
			cin >> a[j];
		int x = a[0];
		for (int j = 0; j < n; j++)
			if (a[j] < x)
				x = a[j];
		for (int j = 0; j < n; j++)
			if (a[j] > x)
				sum++;
		cout << sum << endl;
		delete[] a;
	}
	return 0;
}
