//���������strstr������ģ��ʵ��
//strstr������Ҫʵ����Ŀ���ַ����У������Ƿ�����Դ�ַ���һ�µ����ַ����������򷵻�1�������򷵻�0

#include<stdio.h>
#include<assert.h>
#include<string.h>


char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	int len = strlen(arr2);
	int state = 1;//״̬��ʾ���ж��Ƿ����
	while (state)
	{
		//�жϴ�ʱarr1֮���ַ����ĳ����Ƿ���ڻ����Դ�ַ����ĳ���
		if ((int)strlen(arr1) < len)
			state = 0;
		if (*arr1 != *arr2)//�жϴ�ʱarr1�е�������arr2�������Ƿ�һ��
		{
			arr1++;
		}
		else
		{
			const char* ret1 = arr1;
			const char* ret2 = arr2;
			int i = 0;
			for (i = 0; i < len; i++)//��һ�����arr1���len��Ԫ����arr2���бȽ�
			{
				if (*ret1 == *ret2 && *ret1 == '\0')
				{
					break;
				}
				else if (*ret1 == *ret2)
				{
					ret1++;
					ret2++;
				}
				else
				{
					arr1++;
					break;
				}
			}
			if (i == len)
				return (char*)arr1;
		}
	}
	return NULL;
}







int main()
{
	char arr1[] = "abbbcefr";
	char arr2[] = "bbc";

	char* ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}