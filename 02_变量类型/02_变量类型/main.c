#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1.��ʾ�����ؼ��� extern int num 1.����������ֵ��2.��ʼ��
void test01() 
{
	printf("char��С=%d\n",sizeof(char));// 1 8
	printf("short��С=%d\n", sizeof(short)); // 2 16
	printf("int��С=%d\n", sizeof(int)); // 4 32
	printf("long��С=%d\n", sizeof(long)); // win 4 32  liunx 8
	printf("float��С=%d\n", sizeof(float)); // 4 32
	printf("double��С=%d\n", sizeof(double)); // 8 32
	
}

void test07()
{
	int num = 0; // num ����ռ�����
	printf("������һ��int����\n");
	scanf("%d",&num); // int char float (��ȡ���ݵĸ�ʽ,�ռ��ַ) & ȡ�����ռ��ַ  %dֻ����ȡ��ֵ
	printf("num=%d\n", num);
}
int main(int argc, char* argv[])
{
	test07();
	return 0;
}