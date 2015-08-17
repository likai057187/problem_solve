#include"problems.h"

/* Description: Two-dimensional array representation of an image can also be represented   
 * by a one-dimensional array of W*H size, where W represent row and H represent column   
 * size and each cell represent pixel value of that image. you are also given a threshold X.   
 * For edge detection, you have to compute difference of a pixel value with each of   
 * it's adjacent pixel and find maximum of all differences. And finally compare if   
 * that maximum difference is greater than threshold X. if so, then that pixel is   
 * a edge pixel and have to display it. */  

//Edge Detection
void edge_detect(vector<int> input, int W, int H, int T) {
	for(int i=0;i<H;i++) {
		for(int j=0;j<W;j++) {
			int index = i*W + j;
			int diff = 0;
			//check left
			if(j>0) {
				diff = max(diff,abs(input[index]-input[i*W+j-1]));
			}
			//check right
			if(j<W-1) {
				diff = max(diff,abs(input[index]-input[i*W+j+1]));
			}
			//check upper
			if(i>0) {
				diff = max(diff,abs(input[index]-input[(i-1)*W+j]));
			}
			//check lower
			if(i<H-1) {
				diff = max(diff,abs(input[index]-input[(i+1)*W+j]));
			}
			if(diff>=T) {
				cout<<input[index]<<" ";
			}
		}
	}
	cout<<endl;
}