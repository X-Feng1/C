//���������strstr������ģ��ʵ��
//strstr������Ҫʵ����Ŀ���ַ����У������Ƿ�����Դ�ַ���һ�µ����ַ����������򷵻�1�������򷵻�0

#include<stdio.h>
#include<assert.h>
#include<string.h>


int my_strstr(const char* arr1, const char* arr2)
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
			const char* ret = arr2;
			int i = 0;
			for (i = 0; i < len; i++)//��һ�����arr1���len��Ԫ����arr2���бȽ�
			{
				if (*arr1 == *ret && *arr1 == '\0')
				{
					break;
				}
				else if (*arr1 == *ret)
				{
					arr1++;
					ret++;
				}
				else
				{
					break;
				}
			}
			if (i == len)
				return state;
		}
	}
	return state;
}







int main()
{
	char arr1[] = "abcdcdefghij";
	char arr2[] = "cdefg";

	int ret = my_strstr(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}