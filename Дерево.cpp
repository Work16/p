// Дерево.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const int n = 3;
	int a[n][n],  count = 0;
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
		{
			cin >> a[i][j];
			if (a[i][j])
				count++;
		}
	system("cls");
	if (count != 2*n - 2)
		cout << "Yes\n";
	else
		cout << "No\n";
	system("pause");
	return 0;
}

