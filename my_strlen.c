//���������strlen������ģ��ʵ��
//strlen������Ҫʵ���ַ�����Ԫ�ظ�����������\0

#include<stdio.h>
#include<assert.h>


////������ʱ������strlen
//int my_strlen(const char* arr1)
//{
//	assert(arr1);
//	int count = 0;
//	while (*arr1++)//����arr1�е����ݽ����ж�
//	{
//		count++;
//	}
//	return count;
//}


//���õݹ麯������strlen������ģ��ʵ��
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