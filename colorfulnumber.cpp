#include"problems.h"

/* Description: Determine whether a number is colorful or not.   
 * 263 is a colorful number because (2,6,3,2x6,6x3,2x3x6) are all different   
 * whereas 236 is not because (2,3,6,2x3,3x6,2x3x6) have 6 twice.   
 * So take all consecutive subsets of digits, take their product   
 * and ensure all the products are different */  

//Colorful number
bool isColorfulNum(int num) {
	string str = to_string(static_cast<long long>(num));
	set<int> st;
	int digit;
	
	for(int i=0;i<str.length();i++) {
		if(st.find(str[i]-'0')!=st.end()) {
			return false;
		} else {
			digit=str[i]-'0';
		}
		for(int j=i+1;j<str.length();j++) {
			digit *= (str[j]-'0');
			if(st.find(digit)!=st.end()) {
				return false;
			}
			st.insert(digit);
		}
	}

	return true;
}