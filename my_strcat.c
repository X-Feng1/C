//本程序进行strcat函数的模拟实现
//strcat函数主要是进行两个字符串的连接，将源字符串连接到目标字符串之后，因此要求目标字符串的空间要足够大
//因此需要输入参数两个：目标字符串的首元素地址，源字符串的首元素地址
//输出连接后的目标字符串的首元素地址


#include<stdio.h>
#include<assert.h>

char* my_strcat(char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	char* ret = arr1;
	//寻找目标字符串最后的地址
	while (*++arr1);
	//将arr2中元素连接到arr1中
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "ghijk";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}