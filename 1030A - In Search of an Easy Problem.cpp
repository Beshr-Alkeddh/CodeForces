#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
			sum++;
	}
	if (sum == 0)
		cout << "EASY" << endl;
	else
		cout << "HARD" << endl;
	delete[] a;
	return 0;
}
