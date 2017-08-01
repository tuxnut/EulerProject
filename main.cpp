#include "./header.h"

using namespace std;

bool isPrime(long number) {
	for 
}

void problem1() {
	int sum = 0;

	for (int i = 3; i < 1000; i++) {
		if (i%3 == 0 || i%5 == 0)
			sum += i;
	}

	cout << sum;
}
void problem2() {
	int cpt = 0;
	int sum = 0;
	int fibo1 = 1;
	int fibo2 = 2;
	int fibo_next;

	do {
		fibo_next = fibo1 + fibo2;
		cpt++;
		fibo1 = fibo2;
		fibo2 = fibo_next;

		if (cpt % 3 == 0) {
			sum+=fibo_next;
			cpt = 0;
		}
	} while (fibo_next <= 4000000);
	sum += 2;
	cout << sum;
}
void problem3() {
	long primeFactor = (600851475143 + 1) / 2 - 1;

	for (size_t i = primeFactor; i > 1; i--) {
		bool isPrime = true;
		
		for (size_t j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			primeFactor = i;
			break;
		}
	}

	cout << primeFactor;
}
int main()
{
	// problem1();
	// problem2();	
	problem3();
	return 0;
}
