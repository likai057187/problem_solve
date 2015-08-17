#include"problems.h"

/* Description: From a given string, replace all instances of 'a' with 'one' and 'A' with 'ONE'.   
 * Example Input:   
 * " A boy is playing in a garden"   
 * Example Output:   
 * " ONE boy is playing in one garden"   
 * -- Not that 'A' and 'a' are to be replaced only when they are single characters, not as part of another word. */ 

//A to one
string a_to_one(string str) {
	istringstream iss(str);
	vector<string> strings;
	string tmp;
	while(iss>>tmp) {
		if(tmp=="A") {
			tmp="ONE";
		} else if(tmp=="a") {
			tmp = "one";
		}
		strings.push_back(tmp);
	}
	tmp="";
	for(int i=0;i<strings.size();i++) {
		tmp+=strings[i]+' ';
	}
	return tmp.substr(0,tmp.length());
}