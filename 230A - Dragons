#include <iostream>

using namespace std;

void swap (int& a, int& b)
{
int tmp;
tmp = a;
a = b;
b = tmp;
}

void sort (int x[], int y[], int n) {
    int i,j;
    for (i=1; i <n; i++)
    {
        j = i ;
        while (j > 0 && x[j] < x[j-1])
        {
            swap(x[j],x[j-1]);
            swap(y[j],y[j-1]);
            j--;
        }
    }
}


int main()
{
    int s, n, sum = 1;
    cin >> s >> n;
    int * x = new int[n];
    int * y = new int[n];
    for (int i = 0 ; i < n ; i++)
        cin >> x[i] >> y[i];
    sort(x,y,n);
    for (int i = 0 ; i < n ; i++)
    {
        if (s > x[i])
            s += y[i];
        else
        {
            sum = 0;
            break;
        }
    }
    if (sum == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    delete[] x;
    delete[] y;
    return 0;
}
