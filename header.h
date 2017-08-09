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


#define int_problem3 600851475143
#define offset_pb8 48
#define offset_pb22 64

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

std::vector<long> list_factor(size_t number) {
	std::vector<long> factor;
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

size_t computeFibo(size_t rank) {
	if((rank == 0) || (rank == 1))
		return rank;
	else
		return (computeFibo(rank-1) + computeFibo(rank-2));
}

mpz_class computeFiboUntil(mpz_class limit) {
	mpz_class jean(1);
	mpz_class jacques(1);
	mpz_class jean_jacques(2);
	size_t rank = 3;

	while(limit > jean_jacques) {
		jacques = jean;
		jean = jean_jacques;
		jean_jacques = jean + jacques;
		rank++;
	}

	std::cout << "Fibo stop at rank " << rank << std::endl;

	return jean_jacques;
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

std::string readFile(const char * filename) {
	std::string str;
	std::ifstream file (filename);

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

bool isPerfect(long number) {
	std::vector<long> divisor = list_factor(number);

	size_t sum = 0;

	for (size_t i = 0; i < divisor.size(); i++)
		sum += divisor[i];

	return (number == sum) ? true : false;
}

bool isAbundant(long number) {
	std::vector<long> divisor = list_factor(number);

	size_t sum = 0;

	for (size_t i = 0; i < divisor.size(); i++)
		sum += divisor[i];

	return (number > sum) ? true : false;
}

bool isDeficient(long number) {
	std::vector<long> divisor = list_factor(number);

	size_t sum = 0;

	for (size_t i = 0; i < divisor.size(); i++)
		sum += divisor[i];

	return (number < sum) ? true : false;
}
