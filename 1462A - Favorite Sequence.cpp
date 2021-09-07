#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		if (n % 2 == 0)
		{
			m = n / 2;
			for (int i = 0; i < m; i++)
				cout << a[i] << "  " << a[n - i - 1] << "  ";
		}
		else
		{
			m = n / 2 + 1;
			for (int i = 0; i < m; i++)
			{
				cout << a[i] << "  ";
				if (i != m - 1)
					cout << a[n - i - 1] << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
