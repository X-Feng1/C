//���������strcmp������ģ��ʵ��
//strcmp������Ҫ���������ַ����ıȽϣ�����ͬ�򷵻�0������ͬ�򷵻�1

#include<stdio.h>
#include<assert.h>
#include<string.h>


////���淽������strcmp������ģ��
//int my_strcmp(char* arr1, char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	//�������ַ������Ƚ����ж�
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




////�ݹ麯������strcmp������ģ��
int my_strcmp(const char* arr1,const char* arr2)
{
	assert(arr1);
	assert(arr2);
	//�������ַ������Ƚ����ж�
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 1;
	}
	else
	{
		if (*arr1 == *arr2 && *arr1 == '\0')   //�������ݵ��жϣ�������ѯ��\0ʱ��ѭ������
			return 0;
		else if (*arr1 == *arr2)              //����λ�õ�������ͬʱ��ת����һλ��
			return my_strcmp(++arr1, ++arr2);
		else                                  //�����ݲ���ͬʱֱ�����1
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