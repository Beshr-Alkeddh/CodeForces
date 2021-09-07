#include <iostream>
using namespace std;
int main()
{
	int n, x, sum = 0, num = 0, z = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sum /= 2;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] < a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	for (int i = 0; i < n; i++)
	{
		if (sum < num)
			break;
		num += a[i];
		z++;
	}
	cout << z << endl;
	delete[] a;
	return 0;
}
