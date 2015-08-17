#include"problems.h"

/* Description: If an N X N matrix is given, print it in spiral order.   
 * Example: Below is 5 X 5 matrix   
 * i l o v e   
 * d i n t e   
 * n i e e p   
 * a v w r i   
 * m a x e c   
 * Print in spiral order. Output is iloveepicexamandinterview */  

//Spiral Order
vector<char> spiralOrder(vector<vector<char>> mat) {
	vector<char> ret;
	int rowStart = 0;
	int colStart = 0;
	int rowEnd = mat.size()-1;
	int colEnd = mat[0].size()-1;
	int maxSize = mat.size()*mat[0].size();
	while(true) {
		//upper
		for(int i=colStart;i<=colEnd;i++) {
			ret.push_back(mat[rowStart][i]);
		}
		rowStart++;
		if(ret.size()==maxSize) break;
		//right
		for(int i=rowStart;i<=rowEnd;i++) {
			ret.push_back(mat[i][colEnd]);
		}
		colEnd--;
		if(ret.size()==maxSize) break;
		//bottom
		for(int i=colEnd;i>=colStart;i--) {
			ret.push_back(mat[rowEnd][i]);
		}
		rowEnd--;
		if(ret.size()==maxSize) break;
		//left
		for(int i=rowEnd;i>=rowStart;i--) {
			ret.push_back(mat[i][colStart]);
		}
		colStart++;
		if(ret.size()==maxSize) break;
	}
	return ret;
}