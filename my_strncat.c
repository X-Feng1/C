//本程序进行strncat函数的模拟实现
//strncat函数主要实现在目标字符串后面追加源字符串中有限个的字符,要求目标字符串的空间要足够大
//因此需要三个输入参数：目标字符串的首元素地址，源字符串的首元素地址，追加字符串的个数

#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strncat(char* arr1, char* arr2, int n)
{
	assert(arr1);
	assert(arr2);
	char* ret = arr1;
	int len = strlen(arr2);
	assert(n <= len);
	int i = 0;
	//首先找到目标字符串的最后地址
	while (*++arr1);
	//将arr2的前n个字符连接到arr1后面
	for (i = 0; i < n; i++)
	{
		*arr1++ = *arr2++;
	}
	return ret;
}



int main()
{
	char arr1[30] = "abdfffffsas";
	char arr2[] = "dvbviaibvia";
	my_strncat(arr1, arr2, 11);
	printf("%s\n", arr1);
	return 0;
}