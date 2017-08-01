#include <iostream>
#include <cmath>
#include <climits>

#define int_problem3 600851475143

bool isPrime(long number) {
	if (number <= 1) {
		return false;
	} else if (number <= 3) {
		return true;
	} else if (number % 2 == 0 || number % 3 == 0) {
		return false;
	}

	long i = 5;
	while (i * i <= number) {
		if (number % i == 0 || number % (i+2) == 0)
			return false;
		i+=6;
	}
	return true;
}

bool isPalindrome(long number) {
    long num, digit, rev = 0;
    num = number;

    do {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     
    if (number == rev)
        return true;
    else
        return false;
}