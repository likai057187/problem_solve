#include"problems.h"

/* Description: Implement LookAndSay function. For example, first, let user input a number,   
 * say 1. Then, the function will generate the next 10 numbers which satisfy this condition:   
 * 1, 11,21,1211,111221,312211...   
 * explanation: first number 1, second number is one 1, so 11.   
 * Third number is two 1(previous number), so 21. next number one 2 one 1, so 1211 and so on... */  

//Count and say
string countdAndsayHelper(string s) {
	int count = 1;
	string ret;
	for(int i=1;i<s.length();i++) {
		if(s[i-1]==s[i]) {
			count++;
			continue;
		} else {
			ret+=to_string(static_cast<long long>(count))+s[i-1];
			count = 1;
		}
	}
	ret+=to_string(static_cast<long long>(count))+s[s.length()-1];
	return ret;
}