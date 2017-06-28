// јцикл≥чн≥сть орграфа матриц€.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 3;

int main()
{
	bool flag = false;
	int a[n][n],count=0;
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
			cin >> a[i][j];
	system("cls");
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (a[j][i] == 0)
				count++;
		}
		if (count == n)
			flag = true;
	}
	if (flag)
		cout << "Yes\n";
	else
		cout << "No\n";
	system("pause");
    return 0;
}

