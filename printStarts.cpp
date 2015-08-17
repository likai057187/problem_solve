#include"problems.h"

/* Write a software to print triangle made of *s. Given the height and width of Triangles in terms of number of stars.   
 * like to output   
 * *       
 * * *   
 * * * *   
 * given you have to use 3 stars or the height is 3 stars. */ 

//Print stars
void printStars(int height) {
	vector<string> ret;
	string tmp;
	for(int i=1;i<=height;i++) {
		tmp+="*";
		ret.push_back(tmp);
	}
}