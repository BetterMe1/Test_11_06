#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*continue实例*/
/*continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while
语句的判断部分。进行下一次循环的入口判断。*/
/*实例一*/
/*
int main()
{
	int i = 1;
	while (i <= 10){
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	}
	system("pause");
	return 0;
}
*/
/*结果：1 2 3 4
  分析：i=1,2,3,4时正常输出，当i=5时，continue终止本次循环，i不再自加，且跳转到判断部分时i依然为5，因此后面都不会输出。*/

/*实例二*/
/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	system("pause");
	return 0;
}
*/
/*结果：2 3 4 6 7 8 9 10 11
  分析：i=1;进入循环因自加首次输出为2；2,3,4正常输出，进入循环的i=5时continue终止本次循环，跳转到判断部分继续执行，自加后为6，此后正常输出*/

/*一些for循环的变种*/
/*
int main()
{
	//变种1
	//无限循环
	for (;;)
	{
		printf("你真好看\n");
	}
	//变种2
	//循环5次
	int x, y;
	for (x = 0, y = 0; x<2, y<5; ++x, y++)
	{
		printf("%d", x);
		printf("你真好看\n");
	}
	system("pause");
	return 0;
}*/
/*演示多个字符从两端移动，向中间汇聚*/
/*
int main()
{
	char arr1[] = "Be your best self!";
	char arr2[] = "                  ";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	//while循环实现
	while (left <= right)
	{
		Sleep(500);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	//for循环实现
	for (left = 0, right = strlen(arr1) - 1;left <= right;left++, right--)
	{
		Sleep(500);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
	}
	system("pause");
	return 0;
}
*/

/*do while语句小练习*/
/*计算 n的阶乘*/
/*
int main()
{   
	int n;
	int i = 1;
	int j = 1;
	printf("请输入一个数：");
	scanf("%d", &n);
	do
	{
		j = i*j;
		i++;
	} while (i <= n);
	printf("%d!=%d", n, j);
	system("pause");
	return 0;
}
*/
/*计算 1!+2!+3!+...n!*/

int main()
{
	int n;
	int i = 1;
	int j = 1;
	int k = 0;//用来记录1!+2!+...+n！
	printf("请输入一个数：");
	scanf("%d", &n);
	do
	{
		j = i*j;
		i++;
	} while (i <= n);//j=n!;
	printf("%d!=%d\n", n, j);
	int m = n;
	do
	{
		k = k+j;
		j = j / m;
		m--;
	} while (m >= 1);
	printf("1!+2!+...+%d!=%d", n, k);
	system("pause");
	return 0;
}
