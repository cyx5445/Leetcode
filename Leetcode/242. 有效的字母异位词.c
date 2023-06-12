#include "default.h"

/*若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。*/

bool isAnagram(char* s, char* t) {
	int Hash[26] = { 0 };			/*创建哈希表，因为是字母比较，表内存放26个字母出现次数*/
	int i;
	for (i = 0; i < strlen(s); i++)
		Hash[s[i] - 'a']++;			/*字母是连续ASCII码，-a可得到0-26的下标，如果出现则该下标值+1*/

	for (i = 0; i < strlen(t); i++)
	{
		Hash[t[i] - 'a']--;			/*第二字符串比较，如出现则该下标数据-1*/
		if (Hash[t[i] - 'a'] < 0)
			return FALSE;
	}
		
	//for (i = 0; i < 26; i++)		/*验证是否出现次数相同*/
	//{
	//	if (Hash[i] != 0)			/*若Hash表中不全为0，则不为字母异位词*/
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