#include"problems.h"

/* Description: Every even integer greater than 2 can be expressed as the sum of two primes.   
 * Write a function which takes a number as input, verify if is an even number   
 * greater than 2 and also print at least one pair of prime numbers. */  

bool isPrime(int num) {
	if(num==2) return true;
	else {
		for(int i=2;i<=sqrtl(num);i++) {
			if(num%i==0) return false;
		}
	}
	return true;
}
void Goldbach(int num) {
	if(num==2 || num%2==0) return;
	for(int i=2;i<=num/2;i++) {
		if(isPrime(i) && isPrime(num-i)) {
			cout<<i<<" "<<num-i;
		}
	}
}