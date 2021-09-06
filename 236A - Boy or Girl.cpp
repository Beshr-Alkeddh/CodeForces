#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	cin >> name;
	int n = 0;
	for (int i = 0; i < name.length(); i++)
	{
		int sum = 0;
		for (int j = 0; j < i; j++)
			if (name[i] == name[j])
				sum = 1;
		if (sum == 0)
			n++;
	}
	if (n % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
	return 0;
}
