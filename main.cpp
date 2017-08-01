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
void problem8() {
	const char* num = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	
	long long unsigned int max = 0;
	
	for(size_t i = 0; i < 1000 - 13; i++)
	{
		long long unsigned int curr = 1;

		for (size_t j = 0; j < 13; j++)
		{
			int curr2 = num[i+j] - offset_pb8;
			if(curr2 != 0)
				curr*=curr2;
			else
				break;
		}
		max = (curr > max) ? curr : max;
	}
	
	cout << max;
}
void problem9() {
	// 200 - 375 - 425
	for (size_t i = 1; i < 333; i++)
	{
		for (size_t j = 2; j < 500; j++)
		{
			for (size_t k = 3; k < 500; k++)
			{
				if(pow(i, 2) + pow (j, 2) == pow(k, 2) && ( i + j + k) == 1000) {
					cout << i*j*k << " " << i << " " << j << " " << k << " ";
					break;
				}
			}
		}
	}
}
void problem10() {
	long int chloe = 17;

	for (size_t i = 11; i < 2000000; i+=2)
	{
		if(isPrime(i))
			chloe+=i;
	}
	cout << chloe;
}
void problem11() {

} 


int main()
{
	// problem1();
	// problem2();	
	// problem3();
	// problem4();
	// problem5();
	// problem6();
	// problem7();
	// problem8();
	// problem9();
	// problem10();
	problem11();

	return 0;
}
