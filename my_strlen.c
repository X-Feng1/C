//本程序进行strlen函数的模拟实现
//strlen函数主要实现字符串中元素个数，不包含\0

#include<stdio.h>
#include<assert.h>


////利用临时变量的strlen
//int my_strlen(const char* arr1)
//{
//	assert(arr1);
//	int count = 0;
//	while (*arr1++)//利用arr1中的内容进行判断
//	{
//		count++;
//	}
//	return count;
//}


//采用递归函数进行strlen函数的模拟实现
int my_strlen(const char* arr1)
{
	assert(arr1);
	if (*arr1 == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(++arr1);
	}
}

int main()
{
	char arr1[] = "absdefg";
 	int len = my_strlen(arr1);
	printf("%d\n", len);
	return 0;
} 