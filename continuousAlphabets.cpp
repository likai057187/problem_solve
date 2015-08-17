#include "problems.h"

/* Description: Print continuous alphabets from a sequence of arbitrary alphabets   
 * For example:   
 * Input: abcdefljdflsjflmnopflsjflasjftuvwxyz   
 * Output: abcdef; mnop; tuvwxyz   
 * Input: AbcDefljdflsjflmnopflsjflasjftuvWxYz   
 * Output: abcdef; mnop; tuvwxyz */  

//Continuous alphabets
vector<string> contiAlphabets(string input) {
	vector<string> ret;
	bool forming = false;
	string tmp;

	for(int i=0;i<input.length();i++) {
		input[i]=tolower(input[i]);
	}

	for(int i=0;i<input.length();i++) {
		if(i+1<input.length()) {
			if(input[i+1]-input[i]==1) {
				forming = true;
				tmp += input[i];
				continue;
			}
		}
		if(forming) {
			tmp+=input[i];
			ret.push_back(tmp);
			forming = false;
			tmp="";
		}
	}
	return ret;
}