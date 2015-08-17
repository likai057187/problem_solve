#include"problems.h"

/* Description: Print all valid phone numbers of length n subject to following constraints:   
 * 1.If a number contains a 4, it should start with 4   
 * 2.No two consecutive digits can be same   
 * 3.Three digits (e.g. 7,2,9) will be entirely disallowed, take as input */

//Phone numbers
vector<string> phoneNumber_res;
string digits("0134568");
void phoneNumber_dfs(string num, string digits, int n) {
	if(num.length()==n) {
		phoneNumber_res.push_back(num);
	} else {
		for(int i=0;i<digits.size();i++) {
			if(num.length()>0) {
				if(digits[i]==num[num.length()-1]) continue;
				if(digits[i]=='4' && num[0]!='4') continue;
			}
			phoneNumber_dfs(num+digits[i],digits,n);
		}
	}
}