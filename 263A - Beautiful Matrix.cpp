#include <iostream>
using namespace std;
int main()
{
	int A[5][5], sum = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> A[i][j];
	for (int k = 0; k < 2; k++)
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
			{
				if (A[i][j] == 1)
				{
					if (i < 2)
					{
						A[i + 1][j] = A[i][j];
						A[i][j] = 0;
						sum++;
					}
					else if (i > 2)
					{
						A[i - 1][j] = A[i][j];
						A[i][j] = 0;
						sum++;
					}
				}
			}
	for (int k = 0; k < 2; k++)
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
			{
				if (A[i][j] == 1)
				{
					if (j < 2)
					{
						A[i][j + 1] = A[i][j];
						A[i][j] = 0;
						sum++;
					}
					else if (j > 2)
					{
						A[i][j - 1] = A[i][j];
						A[i][j] = 0;
						sum++;
					}
				}
			}
	cout << sum << endl;

	return 0;
}
