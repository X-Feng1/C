//���������strncat������ģ��ʵ��
//strncat������Ҫʵ����Ŀ���ַ�������׷��Դ�ַ��������޸����ַ�,Ҫ��Ŀ���ַ����Ŀռ�Ҫ�㹻��
//�����Ҫ�������������Ŀ���ַ�������Ԫ�ص�ַ��Դ�ַ�������Ԫ�ص�ַ��׷���ַ����ĸ���

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
	//�����ҵ�Ŀ���ַ���������ַ
	while (*++arr1);
	//��arr2��ǰn���ַ����ӵ�arr1����
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