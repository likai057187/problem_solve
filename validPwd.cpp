#include"problems.h"

/* Description: In 1-9 keypad one key is not working. If some one enters a password then   
 * not working key will not be entered. You have given expected password and entered password.  
 * Check that entered password is valid or not   
 * Ex: entered 164, expected 18684 (you need to take care as when u enter   
 * 18684 and 164 only both will be taken as 164 input) */  

//Valid Password
bool checker(string actual, string expected) {
	if(actual.size()>expected.size()) return false;
	char faultKey = 'x';
	int actPtr=0;
	int expPtr=0;
	while(actPtr!=actual.size() && expPtr!=expected.size()) {
		if(actual[actPtr]!=expected[expPtr]) {
			if(faultKey=='x') faultKey = expected[expPtr];
		}
		if(expected[expPtr]==faultKey) {
			expPtr++;
			continue;
		}
		if(actual[actPtr]!=expected[expPtr]) {
			return false;
		}
		actPtr++;expPtr++;
	}
	//handle 12,12333
	if(actual.substr(0,actPtr) == expected.substr(0,expPtr)) {
		if(faultKey=='x') faultKey=expected[expPtr];
	}
	while(expPtr!=expected.size() && expected[expPtr]==faultKey) expPtr++;
	return actPtr==actual.size() && expPtr==expected.size();
}