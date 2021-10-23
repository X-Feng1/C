//本程序进行strpbrk函数的模拟实现
//strpbrk函数主要实现定位字符串中的字符
//返回一个指向str1中第一次出现的str2中的任何字符的指针，如果不匹配则返回一个空指针

#include<stdio.h>
#include<string.h>


const char* my_strpbrk(const char* str1, const char* str2)
{
	int len1 = strlen(str2);
	int len2 = strlen(str1);
	while (len2--)
	{
		//将str1当前位置中的内容与str2中内容进行比较
		int i = 0;
		for (i = 0; i < len1; i++)
		{
			if (*str1 == *(str2 + i))
			{
				return str1;
			}
		}
		if (i == len1)
		{
			str1++;
			len2--;
		}
	}
	return NULL;
}



int main()
{
	char arr1[] = "This is a sample string";
	char arr2[] = "aeiou";
	const char* pret = my_strpbrk(arr1, arr2);
	printf("Vowels in '%s':", arr1);
	while (pret != NULL)
	{
		printf("%c ", *pret);
		pret = my_strpbrk(pret + 1, arr2);
	}
	printf("\n");
	return 0;
}