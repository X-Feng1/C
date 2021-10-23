//���������strpbrk������ģ��ʵ��
//strpbrk������Ҫʵ�ֶ�λ�ַ����е��ַ�
//����һ��ָ��str1�е�һ�γ��ֵ�str2�е��κ��ַ���ָ�룬�����ƥ���򷵻�һ����ָ��

#include<stdio.h>
#include<string.h>


const char* my_strpbrk(const char* str1, const char* str2)
{
	int len1 = strlen(str2);
	int len2 = strlen(str1);
	while (len2--)
	{
		//��str1��ǰλ���е�������str2�����ݽ��бȽ�
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