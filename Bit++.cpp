#include <iostream>
using namespace std;
int main()
{
	int a,x=0;
	string s;
	cin >> a;
	for (int i=0; i<a;i++)
	{
	      cin >> s;
	      if (s=="++X" || s=="X++")
	          ++x;
	       else if (s=="--X" || s=="X--")
	            --x;
	}
	cout << x << endl;
    return 0;
}
