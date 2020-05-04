#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1.显示声明关键字 extern int num 1.先声明，后赋值；2.初始化
void test01() 
{
	printf("char大小=%d\n",sizeof(char));// 1 8
	printf("short大小=%d\n", sizeof(short)); // 2 16
	printf("int大小=%d\n", sizeof(int)); // 4 32
	printf("long大小=%d\n", sizeof(long)); // win 4 32  liunx 8
	printf("float大小=%d\n", sizeof(float)); // 4 32
	printf("double大小=%d\n", sizeof(double)); // 8 32
	
}

void test07()
{
	int num = 0; // num 代表空间内容
	printf("请输入一个int数据\n");
	scanf("%d",&num); // int char float (提取数据的格式,空间地址) & 取变量空间地址  %d只能提取数值
	printf("num=%d\n", num);
}
int main(int argc, char* argv[])
{
	test07();
	return 0;
}