#include <iostream>
using namespace std;
int main()
{
    long t,a,b;
    cin >> t;
    for (int i = 1 ; i <= t ; i++)
    {
      long sum = 0;
      cin >> a >> b;
      if (a % b != 0)
         sum = b - (a % b);
      cout << sum << endl;
    }
    return 0;
}
