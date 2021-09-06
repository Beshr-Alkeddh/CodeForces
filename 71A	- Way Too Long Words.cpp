#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
	string x[n];
	for (int i = 0; i < n;i++)
	    cin >> x[i];
	for (int i = 0; i < n; i++)
	    if (x[i].length() <= 10)
		     cout << x[i] << endl;
	    else
		     cout << x[i][0] << x[i].length() - 2 << x[i][x[i].length() - 1] << endl;
	return 0;
}
