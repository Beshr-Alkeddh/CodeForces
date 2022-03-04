#include <iostream>

using namespace std;

void swap (int& a, int& b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort (int a[], long n) {
    int i,j;
    for (i=1; i <n; i++)
    {
        j = i ;
        while (j > 0 && a[j] < a[j-1])
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
}

int main()
{
    long n, l;
    cin >> n >> l;
    int * a = new int[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,n);
    double d, max = 0;
    for(int i = 1 ; i < n ; i++)
        if(a[i] - a[i-1] > max)
            max = a[i] - a[i-1];
    d = max/2;

    if (d < a[0])
        d = a[0];
    if (d < l - a[n-1])
        d = l - a[n-1];
 /*   else if (a[0] != 0 && a[n-1] != l)
    {
        if (a[0] > l - a[n-1] && d < a[0])
            d = a[0];
        else if (a[0] < l - a[n-1] && d < l - a[n-1])
            d = l - a[n-1];
    }*/
    cout << fixed << d << endl;
    delete[] a;
    return 0;
}
