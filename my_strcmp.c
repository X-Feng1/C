//本程序进行strcmp函数的模拟实现
//strcmp函数主要进行两个字符串的比较，若相同则返回0，若不同则返回1

#include<stdio.h>
#include<assert.h>
#include<string.h>


////常规方法进行strcmp函数的模拟
//int my_strcmp(char* arr1, char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	//对两个字符串长度进行判断
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < len1; i++)
//		{
//			if (*arr1++ == *arr2++)
//			{}
//			else
//			{
//				return 1;
//			}
//		}
//		return 0;
//	}
//}




////递归函数进行strcmp函数的模拟
int my_strcmp(const char* arr1,const char* arr2)
{
	assert(arr1);
	assert(arr2);
	//对两个字符串长度进行判断
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 1;
	}
	else
	{
		if (*arr1 == *arr2 && *arr1 == '\0')   //进行内容的判断，当都查询到\0时，循环结束
			return 0;
		else if (*arr1 == *arr2)              //当该位置的内容相同时，转入下一位置
			return my_strcmp(++arr1, ++arr2);
		else                                  //当内容不相同时直接输出1
		return 1;
	}
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "abcdefg";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}