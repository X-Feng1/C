//本程序模拟实现strcopy字符串拷贝函数
//strcopy函数主要实现将一组字符串拷贝到目标字符串中（包括\0）
//因此，需要两个输入参数：目标字符串首元素地址，源字符串首元素地址
//可以输出拷贝后的目标字符串的首元素地址


#include<stdio.h>
#include<assert.h>


////初次定义函数
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

////优化函数
//char* my_strcopy(char* arr1,const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	char* ret = arr1;
//	while (*arr2)
//	{
//		*arr1++ = *arr2++;//考虑在将arr2中内容赋值给arr1后，arr1与arr2都要自增1，因此考虑使用后置++
//	}
//	*arr1 = *arr2;
//	return ret;
//}


//二次优化函数
char* my_strcopy(char* arr1,const char* arr2)
{
	assert(arr1);
	assert(arr2);
	char* ret = arr1;
	while (*arr1++ = *arr2++)//考虑利用*arr2中内容进行判断时，当找寻到\0时，由于其ASK码为0，因此while循环结束，故不能进行\0的赋值。是先进行判断然后进行赋值，因此考虑先赋值然后利用赋值语句的结果进行判断
	{
		;//考虑在将arr2中内容赋值给arr1后，arr1与arr2都要自增1，因此考虑使用后置++
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