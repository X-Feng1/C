//������ģ��ʵ��strcopy�ַ�����������
//strcopy������Ҫʵ�ֽ�һ���ַ���������Ŀ���ַ����У�����\0��
//��ˣ���Ҫ�������������Ŀ���ַ�����Ԫ�ص�ַ��Դ�ַ�����Ԫ�ص�ַ
//��������������Ŀ���ַ�������Ԫ�ص�ַ


#include<stdio.h>
#include<assert.h>


////���ζ��庯��
//char* my_strcopy(char* arr1,const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	char* ret = arr1;
//	while (*arr2)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//	return ret;
//}

////�Ż�����
//char* my_strcopy(char* arr1,const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	char* ret = arr1;
//	while (*arr2)
//	{
//		*arr1++ = *arr2++;//�����ڽ�arr2�����ݸ�ֵ��arr1��arr1��arr2��Ҫ����1����˿���ʹ�ú���++
//	}
//	*arr1 = *arr2;
//	return ret;
//}


//�����Ż�����
char* my_strcopy(char* arr1,const char* arr2)
{
	assert(arr1);
	assert(arr2);
	char* ret = arr1;
	while (*arr1++ = *arr2++)//��������*arr2�����ݽ����ж�ʱ������Ѱ��\0ʱ��������ASK��Ϊ0�����whileѭ���������ʲ��ܽ���\0�ĸ�ֵ�����Ƚ����ж�Ȼ����и�ֵ����˿����ȸ�ֵȻ�����ø�ֵ���Ľ�������ж�
	{
		;//�����ڽ�arr2�����ݸ�ֵ��arr1��arr1��arr2��Ҫ����1����˿���ʹ�ú���++
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcedddjjdf";
	char arr2[] = "ajjsjjjjjjj";
	my_strcopy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}