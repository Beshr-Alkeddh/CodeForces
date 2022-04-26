#include <iostream>

using namespace std;

int main()
{
    int x[4];
    for(int i = 0 ; i < 4 ; i++)
        cin >> x[i];
    int sum = x[0], a[3], j = 0;
    for(int i = 0 ; i < 4 ; i++)
        if(x[i] > sum)
        {
            sum = x[i];
            j = i;
        }
    for(int i = 0 , k = 0; i < 4 ; i++)
        if(i == j)
            continue;
        else
        {
            a[k] = sum - x[i];
            k++;
        }
    for(int i = 0 ; i < 3 ; i++)
        cout << a[i] << "\t";
    return 0;
}
