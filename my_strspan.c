//���������strspn������ģ��ʵ��
//strspn������Ҫ���м�¼str1����������str2���ַ��ĳ�ʼ���ֳ���
//ֻ����������str2�е��ַ���str1��ʼ���ֵĳ���
//��ˣ����str1�е������ַ�����str2�У�������������str1�ַ����ĳ���
//���str1�еĵ�һ���ַ�����str2�У��򷵻�0


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
		//��arr1�е�Ԫ����arr2������Ԫ�ؽ��бȽ�
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