//本程序进行strspn函数的模拟实现
//strspn函数主要进行记录str1中连续包含str2中字符的初始部分长度
//只包含出现在str2中的字符的str1初始部分的长度
//因此，如果str1中的所有字符都在str2中，则函数返回整个str1字符串的长度
//如果str1中的第一个字符不在str2中，则返回0


#include<stdio.h>
#include<string.h>
#include<assert.h>


int my_strspan(const char* str1, const char* str2)
{
	assert(str1 && str2);
	int len = strlen(str2);
	int count = 0;
	while (count<len)
	{
		//将arr1中的元素与arr2中所有元素进行比较
		int i = 0;
		for (i = 0; i < len; i++)
		{
			if (*str1 == *(str2 + i))
			{
				count++;
				str1++;
				break;
			}
		}
		if (i == len)
			return count;
	}
}





int main()
{
	char arr1[] = "129th";
	char arr2[] = "1234567890";
	int ret = my_strspan(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}