#include <iostream>
using namespace std;
int main()
{
    int n, p, q, sum = 0, x = 0;
    cin >> n;
    cin >> p;
    int * a = new int[p];
    for (int i =0 ; i < p ; i++)
        cin >> a[i];
    cin >> q;
    int * b = new int[q];
    for (int i =0 ; i < q ; i++)
        cin >> b[i];
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 0; j < p ; j++)
        {
            if (a[j] == i)
            {
                sum++;
                x = 1;
                break;
            }
            else
                x = 0;
        }
        if (x == 0)
            for (int k =0 ; k < q ; k++)
                    if (b[k] == i)
                        sum++;
    }
    if (sum == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    delete[] a;
    delete[] b;
    return 0;
}
