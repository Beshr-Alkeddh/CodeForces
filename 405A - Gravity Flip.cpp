#include <iostream>
using namespace std;
int main()
{
	int n, x;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (a[i] >= a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	delete[] a;
	return 0;
}
