#include <iostream>
using namespace std;
int main()
{
    int n, even = 0, odd = 0, x, y;
    cin >> n;
    int * a = new int[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
            x = i+1;
        }
        else
        {
            odd++;
            y = i+1;
        }
    }
    if(even > odd)
        cout << y << endl;
    else
        cout << x << endl;

    delete[] a;
    return 0;
}
