#include <stdio.h>
#include "VectorT.h"
#include <iostream>
using namespace std;

void test1()
{
	vector<int>aa;
	aa.push_back(1);
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%d ", aa[i]);
	printf("\n");

	aa.push_back(2);
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%d ", aa[i]);
	printf("\n");

	aa.push_back(3);
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%d ", aa[i]);
	printf("\n");

	aa.push_back(4);
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%d ", aa[i]);
	printf("\n");

	aa.push_back(5);
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%d ", aa[i]);
	printf("\n");

	aa.push_back(6);
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%d ", aa[i]);
	printf("\n");
}
void test2()
{
	vector<char>aa;
	aa.push_back('a');
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%c ", aa[i]);
	printf("\n");

	aa.push_back('b');
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%c ", aa[i]);
	printf("\n");

	aa.push_back('c');
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%c ", aa[i]);
	printf("\n");

	aa.push_back('d');
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%c ", aa[i]);
	printf("\n");

	aa.push_back('e');
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%c ", aa[i]);
	printf("\n");

	aa.push_back('f');
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
		printf("%c ", aa[i]);
	printf("\n");
}
void test3()
{
	vector<std::string>aa;
	char pp[50];
	aa.push_back("str1");
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
	{
		memset(pp, 0, sizeof(pp));
		for (int j = 0; j < aa[i].size(); j++)
		{
			pp[j] = aa[i][j];
		}
		printf("%s ", pp);
	}
	printf("\n");

	aa.push_back("1234567891234567");
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
	{
		memset(pp, 0, sizeof(pp));
		for (int j = 0; j < aa[i].size(); j++)
		{
			pp[j] = aa[i][j];
		}
		printf("%s ", pp);
	}
	printf("\n");

	aa.push_back("str3");
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
	{
		memset(pp, 0, sizeof(pp));
		for (int j = 0; j < aa[i].size(); j++)
		{
			pp[j] = aa[i][j];
		}
		printf("%s ", pp);
	}
	printf("\n");

	aa.push_back("str4");
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
	{
		memset(pp, 0, sizeof(pp));
		for (int j = 0; j < aa[i].size(); j++)
		{
			pp[j] = aa[i][j];
		}
		printf("%s ", pp);
	}
	printf("\n");

	aa.push_back("str5");
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
	{
		memset(pp, 0, sizeof(pp));
		for (int j = 0; j < aa[i].size(); j++)
		{
			pp[j] = aa[i][j];
		}
		printf("%s ", pp);
	}
	printf("\n");

	aa.push_back("str6");
	printf("%d %d\n", aa.size(), aa.capacity());
	for (int i = 0; i < aa.size(); i++)
	{
		memset(pp, 0, sizeof(pp));
		for (int j = 0; j < aa[i].size(); j++)
		{
			pp[j] = aa[i][j];
		}
		printf("%s ", pp);
	}
	printf("\n");
}

int main()
{
	
	test1();
	test2();
	test3();
	int a;
	scanf("%d", &a);
}