#include <iostream>

using namespace std;

int main()
{
    int n, m = 0, x = 0;
    cin >> n;
    int * a = new int[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i] == -1 && m <= 0)
            x++;
        else if (a[i] > 0)
            m += a[i];
        else if(a[i] == -1 && m > 0)
            m--;
    }
    cout << x << endl;
    delete[] a;
    return 0;
}
