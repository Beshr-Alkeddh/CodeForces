#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int m;
        bool b = true;
        cin >> m;
        int* a = new int[m];
        for(int j = 0 ; j < m ; j++)
            cin >> a[j];
        sort(a,a+m);
        for(int j = 1 ; j < m ; j++)
            if(a[j]-a[j-1] > 1)
            {
                b = false;
                break;
            }
        if(b)
            cout << "YES\n";
        else
            cout << "NO\n";
        delete[] a;
    }
    return 0;
}
