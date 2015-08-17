#include"problems.h"

/* Description: You know a password is well-ordered string. Well-ordered string means that   
 * the order of the characters is in an alphabetical increasing order. Like ¡°abEm¡± is   
 * a well-ordered number. However, ¡°abmE¡± is not a well-order number. Given an input #   
 * that tells you also how many digits are in the password, print all possible passwords. */ 

vector<string> wellOrderString_res;
void wellOrderString(int remain, int start, string prefix) {
	if(remain==0) {
		wellOrderString_res.push_back(prefix);
	} else {
		for(int i=start;i<=26-remain;i++) {
			wellOrderString(remain-1,i+1,prefix+static_cast<char>('A'+i));
			wellOrderString(remain-1,i+1,prefix+static_cast<char>('a'+i));
		}
	}
}