#include <iostream>
using namespace std;
int main()
{
    int n,x = 0,y = 0,s,max,min;
    cin >> n;
    int * a = new int[n];
    for (int i = 0 ; i < n ; i++)
      cin >> a[i];
    max = a[0];
    min = a[0];
    for (int i = 0 ; i < n ; i++)
      if (a[i] > max)
      {
        max = a[i];
        x = i;
      }
      else if (a[i] <= min)
      {
        min = a[i];
        y = i;
      }
    if (x < y)
       s = x + n - y - 1;
    else
       s = x + n - y -2;

    cout << s << endl;

    delete[] a;

    return 0;
}


