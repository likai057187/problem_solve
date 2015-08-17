#include"problems.h"

/* Print all palindromes of size greater than equal to 3 of a given string. (DP) */  

//Palindromes
bool isPalindrome(string s) {
	if(s.length()<3) return false;
	int i=0;
	while(i<s.length()/2) {
		if(s[i]!=s[s.length()-1-i]) {
			return false;
		}
		i++;
	}
	return true;
}
set<string> Palindromes(string str) {
	set<string> ret;
	for(int i=0;i<str.length()-2;i++) {
		for(int j=i+1;j<str.length();j++) {
			string tmp = str.substr(i,j+1);
			if(isPalindrome(tmp) && ret.find(tmp)==ret.end()) {
				ret.insert(tmp);
			}
		}
	}
	return ret;
}