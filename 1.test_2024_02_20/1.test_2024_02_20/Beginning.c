#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%d\n", strlen("abcdef"));
	// \62��������һ��ת���ַ�
	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}
//int main()
//{
//	//����1������Ļ�ϴ�ӡһ��������'����ô����
//	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}