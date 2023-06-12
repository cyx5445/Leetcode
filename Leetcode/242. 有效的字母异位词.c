#include "default.h"

/*�� s �� t ��ÿ���ַ����ֵĴ�������ͬ����� s �� t ��Ϊ��ĸ��λ�ʡ�*/

bool isAnagram(char* s, char* t) {
	int Hash[26] = { 0 };			/*������ϣ����Ϊ����ĸ�Ƚϣ����ڴ��26����ĸ���ִ���*/
	int i;
	for (i = 0; i < strlen(s); i++)
		Hash[s[i] - 'a']++;			/*��ĸ������ASCII�룬-a�ɵõ�0-26���±꣬�����������±�ֵ+1*/

	for (i = 0; i < strlen(t); i++)
	{
		Hash[t[i] - 'a']--;			/*�ڶ��ַ����Ƚϣ����������±�����-1*/
		if (Hash[t[i] - 'a'] < 0)
			return FALSE;
	}
		
	//for (i = 0; i < 26; i++)		/*��֤�Ƿ���ִ�����ͬ*/
	//{
	//	if (Hash[i] != 0)			/*��Hash���в�ȫΪ0����Ϊ��ĸ��λ��*/
	//		return FALSE
	//}
	return TRUE;
}

int main()
{
	char* s = "anagram";
	char* t = "nagaram";
	isAnagram(s, t);
	return 0;
}