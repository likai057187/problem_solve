#include"problems.h"

/* Description: An additive sequence is 1,2,3,5,8,13 where T(n) = T(n -1) + T(n - 2).   
 * A number range is given to you. Find the additive sequence number in that range.  
 * Given the start and an ending integer as userinput, generate all integers with   
 * the following property. */  

//Additive Number
bool isAdditive(string &str){
	for(int i=1;i<str.length();i++) {
		for(int j=1;j<str.length()-i;j++) {
			string s1 = str.substr(0,i);
			string s2 = str.substr(i,j);
			int digit1 = atoi(s1.c_str());
			int digit2 = atoi(s2.c_str());
			int next = digit1 + digit2;
			string next_str = to_string(static_cast<long long>(next));
			string now = s1+s2+next_str;
			int len = now.length();
			while(len<str.length()) {
				digit1 = digit2;
				digit2 = next;
				next = digit1+digit2;
				next_str = to_string(static_cast<long long>(next));
				now+=next_str;
				len = now.length();
			}
			if(now==str) return true;
		}
	}
	return false;
}