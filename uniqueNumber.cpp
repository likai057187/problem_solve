#include"problems.h"

/* Description: Write, efficient code for extracting unique elements from   
 * a sorted list of array. e.g. (1, 1, 3, 3, 3, 5, 5, 5, 9, 9, 9, 9) -> (1, 3, 5, 9). */ 

//Unique Number
list<int> unique(list<int> arr_list) {  
    list<int> res;  
    for (list<int>::iterator it = arr_list.begin(); it != arr_list.end(); ++it) {  
		if(res.size()==0 || res.back()!=*it) {
			res.push_back(*it);
		}
    }  
    return res;  
}  