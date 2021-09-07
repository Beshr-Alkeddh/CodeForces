#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin >> n;
	int *p = new int[n];
	int *q = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i] >> q[i];
	for (int i = 0; i < n; i++)
	{
		if(q[i]-p[i] >=2)
		   sum++;
	}
	cout << sum << endl;
	return 0;
}
