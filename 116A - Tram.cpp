#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,m=0;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		sum = sum-a[i]+b[i];
		if (sum > m)
		    m = sum;
	}
	cout << m << endl;
		return 0;
}
