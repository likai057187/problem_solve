#include"problems.h"

/* Description: There is a security keypad at the entrance of a building.   
 * It has 9 numbers 1 - 9 in a 3x3 matrix format.   
 * 1 2 3   
 * 4 5 6   
 * 7 8 9   
 * The security has decided to allow one digit error for a person but that digit   
 * should be horizontal or vertical. Example: for 5 the user is allowed to enter   
 * 2, 4, 6, 8 or for 4 the user is allowed to enter 1, 5, 7. IF the security code to   
 * enter is 1478 and if the user enters 1178 he should be allowed. Write a function   
 * to take security code from the user and print out if he should be allowed or not */  

//Allowed Password
bool allowedPWD(vector<int> pwd, vector<int> user, vector<vector<int>> keypad) {
	if(pwd.size() != user.size()) return false;
	bool mistake = false;
	int i=0;
	for(int i=0;i<pwd.size();i++) {
		if(pwd[i]!=user[i]) {
			if(mistake) {
				return false;
			} else {
				mistake = true;
				int pwd_x;
				int pwd_y;
				int user_x;
				int user_y;
				for(int j=0;j<keypad.size();j++) {
					for(int k=0;k<keypad[0].size();k++) {
						if(keypad[j][k]==pwd[i]) {
							pwd_x = j;
							pwd_y = k;
						}
						if(keypad[j][k]==user[i]) {
							user_x = j;
							user_y = k;
						}
					}
				}
				//check position
				if(pwd_x==user_x+1 && pwd_y==user_y
				|| pwd_x==user_x-1 && pwd_y==user_y
				|| pwd_y==user_y-1 && pwd_x==user_x
				|| pwd_y==user_y+1 && pwd_x==user_x) {
					//do nothing
				} else {
					return false;
				}
			}
		}
	}
	return true;
}