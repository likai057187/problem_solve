#include"problems.h"

/* SMS Problem   
 * 1 - NULL, 2 - ABC, 3 - DEF, 4 - GHI, 5 - JKL, 6 - MON, 7 - PQRS, 8 - TUV, 9 - WXYZ, * - <Space>, # - <Break>   
 * We must convert the numbers to text.   
 * Eg   
 * I/P - O/P   
 * 22 - B   
 * 23 - AD   
 * 223 - BD   
 * 22#2 - BA (# breaks the cycle)   
 * 3#33 - DE   
 * 2222 - 2   
 * 2222#2 - 2A   
 * 22222 - A (cycle must wrap around)   
 * 222222 - B */  

string code[] = {"", "ABC2", "DEF3", "GHI4", "JKL5", "MON6", "PQRS7", "TUV8", "WXYZ9"};
vector<string> mp(code,code+sizeof(code)/sizeof(code[0]));
string sms(string str) {
	string res;

	for(int i=0;i<str.length();i++) {
		if(str[i]=='1') {
			continue;
		} else if(str[i]=='#') {
			continue;
		} else if(str[i]=='*'){
			res+=" ";
		} else {
			int count=1;
			while(i+1<str.length() && str[i]==str[i+1]) {
				count++;
				i++;
			}
			int target = count % (mp[str[i] - '1'].size());
			if(target==0) target=mp[str[i] - '1'].size();
            res += mp[str[i] - '1'][target-1];  
		}
	}
	return res;
}