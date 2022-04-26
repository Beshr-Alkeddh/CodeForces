#include <iostream>

using namespace std;

int main()
{
    int x[3];
    for(int i = 0 ; i < 3 ; i++)
        cin >> x[i];
    int max = x[0], min = x[0];
    for(int i = 0 ; i < 3 ; i++)
        if(x[i] > max)
            max = x[i];
        else if(x[i] < min)
            min = x[i];
    double dist = max - min;
    
    cout << dist << endl;
    return 0;
}
