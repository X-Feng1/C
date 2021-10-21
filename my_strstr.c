//本程序进行strstr函数的模拟实现
//strstr函数主要实现在目标字符串中，查找是否有与源字符串一致的子字符串，若有则返回1，若无则返回0

#include<stdio.h>
#include<assert.h>
#include<string.h>


int my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	int len = strlen(arr2);
	int state = 1;//状态显示，判断是否结束
	while (state)
	{
		//判断此时arr1之后字符串的长度是否大于或等于源字符串的长度
		if ((int)strlen(arr1) < len)
			state = 0;
		if (*arr1 != *arr2)//判断此时arr1中的内容与arr2中内容是否一致
		{
			arr1++;
		}
		else
		{
			const char* ret = arr2;
			int i = 0;
			for (i = 0; i < len; i++)//若一致则对arr1后的len个元素与arr2进行比较
			{
				if (*arr1 == *ret && *arr1 == '\0')
				{
					break;
				}
				else if (*arr1 == *ret)
				{
					arr1++;
					ret++;
				}
				else
				{
					break;
				}
			}
			if (i == len)
				return state;
		}
	}
	return state;
}







int main()
{
	char arr1[] = "abcdcdefghij";
	char arr2[] = "cdefg";

	int ret = my_strstr(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}