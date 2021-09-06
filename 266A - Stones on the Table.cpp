#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	char A[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 1; i < n; i++)
		if (A[i] == A[i - 1])
			sum++;
	cout << sum << endl;
	return 0;
}
