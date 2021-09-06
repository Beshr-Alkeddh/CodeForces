#include <iostream>
using namespace std;
int main()
{
	int k, n, w, s, sum = 0;
	cin >> k >> n >> w;
	for (int i = 0; i <= w; i++)
		sum += i * k;
	if (n < sum)
	{
		s = sum - n;
		cout << s << endl;
	}
	else
		cout << "0" << endl;
	return 0;
}
