//���������strcat������ģ��ʵ��
//strcat������Ҫ�ǽ��������ַ��������ӣ���Դ�ַ������ӵ�Ŀ���ַ���֮�����Ҫ��Ŀ���ַ����Ŀռ�Ҫ�㹻��
//�����Ҫ�������������Ŀ���ַ�������Ԫ�ص�ַ��Դ�ַ�������Ԫ�ص�ַ
//������Ӻ��Ŀ���ַ�������Ԫ�ص�ַ


#include<stdio.h>
#include<assert.h>

char* my_strcat(char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	char* ret = arr1;
	//Ѱ��Ŀ���ַ������ĵ�ַ
	while (*++arr1);
	//��arr2��Ԫ�����ӵ�arr1��
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