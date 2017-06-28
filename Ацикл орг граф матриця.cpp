// јцикл орг граф матриц€.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct list
{
	int val;
	list *next;
};

void builder(list *&beg, int a)
{
	if (!beg)
	{
		list *temp;
		temp = new list;
		temp->val = a;
		temp->next = NULL;
		beg = temp;
	}
	else
	{
		list *temp;
		temp = new list;
		temp->val = a;
		temp->next = beg;
		beg = temp;
	}
}

void print(list *beg)
{
	while (beg)
	{
		cout << beg->val + 1 << " ";
		beg = beg->next;
	}
	cout << endl;
}

int main()
{
	bool flag = false;
	setlocale(LC_ALL, "Russian");
	const int n = 4;
	int a;
	list *l[n];
	for (int i = 0;i < n;i++)
		l[i] = NULL;
	for (int i = 0;i < n;i++)
	{
		a = 1;
		while (a > 0)
		{
			cout << "¬ведите вход€щую в " << i + 1 << " вершину:\n";
			cin >> a;
			if(a>0)
			builder(l[i], a - 1);
		}
	}
	system("cls");
	for (int i = 0;i < n;i++)
		if (!l[i])
			flag = true;
	if (flag)
		cout << "Yes\n";
	else
		cout << "No\n";
	system("pause");
    return 0;
}

