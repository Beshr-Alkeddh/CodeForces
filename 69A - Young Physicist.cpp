#include <iostream>
using namespace std;
int main()
{
	long long n;
	 int a=0,b=0,c=0;
	cin >> n;
	int * A = new int [n];
	int * B = new int [n];
	int * C = new int [n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		cin >> B[i];
		cin >> C[i];
	}
	for (int i = 0; i < n; i++)
	{
	      a += A[i];
	      b += B[i];
	      c += C[i];
	}
	if (a == 0 && b == 0 && c == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
		delete[ ] A;
		delete[ ] B;
		delete[ ] C;
	return 0;
}
