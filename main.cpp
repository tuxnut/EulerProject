#include "./header.h"

using namespace std;

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
	int maxPrimeFactor = 2;
	long number = int_problem3;

	while (maxPrimeFactor * maxPrimeFactor <= number) {
		if (number % maxPrimeFactor == 0) {
			cout << maxPrimeFactor << "\t";
			number /= maxPrimeFactor;
		}
		else
			maxPrimeFactor++;
	}

	if (number > 1)
		cout << "- "<<number;
}
void problem4() {
	int a, b;
	long largestPalindrome = 0;

	for (size_t i = 100; i < 999; i++)
	{
		for (size_t j = 100; j < 999; j++)
		{
			int current = i * j;
			if (isPalindrome(current) && current > largestPalindrome) {
				largestPalindrome = current;
				a = i;
				b = j;
			}
		}
	}

	cout << largestPalindrome;
}
void problem5() {
	cout << 2*2*2*2*3*3*5*7*11*13*17*19;
}
void problem6() {
	long sum_of_square = 0, square_of_sum = 0;

	for (size_t i = 1; i <= 100; i++)
	{
		square_of_sum += i;
		sum_of_square += pow(i, 2);
	}

	square_of_sum = pow(square_of_sum, 2);

	cout << square_of_sum - sum_of_square;
}
void problem7() {
	int counter = 6;
	long number = 17;

	do
	{
		if (isPrime(number))
			counter++;

		number+=2;	
	} while(counter < 10001);
	
	cout << number - 2;
}


int main()
{
	// problem1();
	// problem2();	
	// problem3();
	// problem4();
	// problem5();
	// problem6();
	problem7();

	return 0;
}
