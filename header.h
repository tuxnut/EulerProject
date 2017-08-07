#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <gmpxx.h>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

#define int_problem3 600851475143
#define offset_pb8 48

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

vector<long> list_factor(size_t number) {
	vector<long> factor;
	factor.push_back(1);
	for (size_t i = 2; i < sqrt(number); i++) {
		if (number % i == 0) {
			size_t couple = number / i;
			factor.push_back(i);
			factor.push_back(couple);
		}
	}
	return factor;
}

size_t computeCollatz(size_t number) {
	if (number <= 1)
		return 1;
	return (number % 2 == 0) ? (number / 2) : (3 * number + 1);
}

double fact(double number) {
	if (number > 20)
		return 0;
	else
		return (number == 1 || number == 0) ? 1 : fact(number - 1) * number;
}

mpz_class fact_mpz(unsigned int n) {
    mpz_class result(n); 		// initialize an arbitrary-sized integer with 'n'
    while(n-- > 1) result *= n; // compute the product with every integers < n
    return result;
}

string readFile(const char * filename) {
	string str;
	ifstream file (filename);

	if(file.is_open()) {
		// get length of file:
		file.seekg(0, file.end);
		int length = file.tellg();
		file.seekg(0, file.beg);

		// allocate memory:
		char * buffer = new char [length];

		// read data as a block:
		file.read(buffer,length);

		file.close();

		str = buffer;
		delete[] buffer;

		return str;
	}
}
