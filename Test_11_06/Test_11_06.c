#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*continueʵ��*/
/*continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while
�����жϲ��֡�������һ��ѭ��������жϡ�*/
/*ʵ��һ*/
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
/*�����1 2 3 4
  ������i=1,2,3,4ʱ�����������i=5ʱ��continue��ֹ����ѭ����i�����Լӣ�����ת���жϲ���ʱi��ȻΪ5����˺��涼���������*/

/*ʵ����*/
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
/*�����2 3 4 6 7 8 9 10 11
  ������i=1;����ѭ�����Լ��״����Ϊ2��2,3,4�������������ѭ����i=5ʱcontinue��ֹ����ѭ������ת���жϲ��ּ���ִ�У��ԼӺ�Ϊ6���˺��������*/

/*һЩforѭ���ı���*/
/*
int main()
{
	//����1
	//����ѭ��
	for (;;)
	{
		printf("����ÿ�\n");
	}
	//����2
	//ѭ��5��
	int x, y;
	for (x = 0, y = 0; x<2, y<5; ++x, y++)
	{
		printf("%d", x);
		printf("����ÿ�\n");
	}
	system("pause");
	return 0;
}*/
/*��ʾ����ַ��������ƶ������м���*/
/*
int main()
{
	char arr1[] = "Be your best self!";
	char arr2[] = "                  ";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	//whileѭ��ʵ��
	while (left <= right)
	{
		Sleep(500);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	//forѭ��ʵ��
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

/*do while���С��ϰ*/
/*���� n�Ľ׳�*/
/*
int main()
{   
	int n;
	int i = 1;
	int j = 1;
	printf("������һ������");
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
/*���� 1!+2!+3!+...n!*/

int main()
{
	int n;
	int i = 1;
	int j = 1;
	int k = 0;//������¼1!+2!+...+n��
	printf("������һ������");
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
