#include "./header.h"

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
	const char *clemence = " 08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08 49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00 81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65 52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91 22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80 24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50 32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70 67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21 24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72 21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95 78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92 16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57 86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58 19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40 04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66 88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69 04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36 20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16 20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54 01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48";

	int line_length = 20*3;
	int length = 20 * line_length;
	long max_line = 0, max_column = 0, max_diagonale = 0, res = 0;
	
	// compute max_line
	/* for (size_t i = 0; i < 20; i++) {
		int num1, num2, num3, num4;
		for (size_t j = 0; j < line_length - 11; j+=3) {
			num1 = (clemence[i * line_length + j + 1] - offset_pb8) * 10 + clemence[i * line_length + j + 2] - offset_pb8;
			num2 = (clemence[i * line_length + j + 4] - offset_pb8) * 10 + clemence[i * line_length + j + 5] - offset_pb8;
			num3 = (clemence[i * line_length + j + 7] - offset_pb8) * 10 + clemence[i * line_length + j + 8] - offset_pb8;
			num4 = (clemence[i * line_length + j + 10] - offset_pb8) * 10 + clemence[i * line_length + j + 11] - offset_pb8;
		}
		long curr = num1 * num2 * num3 * num4;
		max_line = (curr > max_line) ? curr : max_line;
	} */

	// compute max_column
	/* for (size_t i = 1; i < line_length - 1; i+=3) {
		int num1, num2, num3, num4;
		for (size_t j = 0; j < 17; j++) {
			num1 = (clemence[i + j * line_length] - offset_pb8) * 10 + (clemence[i + 1 + j * line_length] - offset_pb8);
			num2 = (clemence[i + (j+1) * line_length] - offset_pb8) * 10 + (clemence[i + 1 + (j+1) * line_length] - offset_pb8);
			num3 = (clemence[i + (j+2) * line_length] - offset_pb8) * 10 + (clemence[i + 1 + (j+2) * line_length] - offset_pb8);
			num4 = (clemence[i + (j+3) * line_length] - offset_pb8) * 10 + (clemence[i + 1 + (j+3) * line_length] - offset_pb8);
		}
		long curr = num1 * num2 * num3 * num4;
		max_column = (curr > max_column) ? curr : max_column;
	} */ 

	// cout << max_line; // 21426363
	// cout << max_column; // 17712864
}
void problem12() {
	long triangle_rank = 1;
	long triangle = 0;

	do
	{
		triangle += triangle_rank;
		cout << triangle_rank << " ";
		triangle_rank++;
	} while(list_factor(triangle).size() < 500);

	cout << triangle; 
}
void problem13() {	
}
void problem14() {
	long lea = 0;
	long thomas;
	for (size_t i = 500; i < 1000000; i++) {
		long collatzSequenceLength = 1;
		long collatz = i;
		do {
			collatz = computeCollatz(collatz);
			collatzSequenceLength++;
		} while(collatz > 1);
		if (collatzSequenceLength > lea) {
			lea = collatzSequenceLength;
			thomas = i;
		}
	}
	cout << thomas << " avec " << lea << " termes";
}
void problem15() {
	/* Le but est d'aller de (0, 0)  à (20, 20) (n, n)
	* on doit donc aller 20 (n) fois à droite, et 20 (n) fois en bas
	* on aura fait dans TOUS les cas 40 (2*n) déplacements
	* d' où le 20 (n) parmi 40 (2*n) */
	
	long unsigned int aurelien = fact(40) / pow(fact(20), 2); 
	cout << aurelien << 137846528820;//137846528820
}
void problem16() {
	// printf("%lf", pow(2, 1000));
	const char* lol = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
	long sum = 0;
	int i = 0;

	while (lol[i])
	{
		sum += lol[i] - offset_pb8;
		i++;
	}
	cout << sum;
}
void problem17() {
	// from 1 to 9
	int nb_letter_one_to_nine = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4;
	// from 10 to 19
	int nb_letter_ten_to_nineteen = 3 + 6 + 6 + 8 + 7 + 7 + 7 + 9 + 9 + 8;
	// from 20 to 99
	int nb_letter_twenty_to_ninetynine = nb_letter_one_to_nine * 8 + 10 * (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6);

	// from 1 to 99
	int nb_letter_one_to_ninetynine = nb_letter_one_to_nine + nb_letter_ten_to_nineteen + nb_letter_twenty_to_ninetynine;

	// from 1 to 999 = (from 1 to 99) * 10 + 'unit hundred and' for each + 'unit hundred' * 9
	int nb_letter_one_to_900_ninetynine = nb_letter_one_to_ninetynine * 10 + 99 * (13 + 13 + 15 + 14 + 14 + 13 + 15 + 15 + 14) + (10 + 10 + 12 + 11 + 11 + 10 + 12 + 12 + 11);

	cout << nb_letter_one_to_900_ninetynine + 11;
}
void problem18() {

}
void problem19() {
	// Le jour de la semaine
	int days_number_in_week = 2; // 1er janvier 1901 est un mardi;

	int nb_of_days_by_month [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int nb_of_days_by_month_leap_year [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int nb_sunday_first_of_month = 0;
	
	int year = 1901;

	do {
		if (year % 4 != 0) {
			for (size_t i = 0; i < 12; i++) {
					if(nb_of_days_by_month[i] == 30) {
						days_number_in_week = (days_number_in_week + 2) % 7; 
					} else if(nb_of_days_by_month[i] == 31) {
						days_number_in_week = (days_number_in_week + 3) % 7;
					}

					if(days_number_in_week == 0)
						nb_sunday_first_of_month++;
			}
		} else {
			for (size_t i = 0; i < 12; i++) {
					if(nb_of_days_by_month_leap_year[i] == 29) {
						days_number_in_week = (days_number_in_week + 1) % 7;
					} else if(nb_of_days_by_month_leap_year[i] == 30) {
						days_number_in_week = (days_number_in_week + 2) % 7; 
					} else if(nb_of_days_by_month_leap_year[i] == 31) {
						days_number_in_week = (days_number_in_week + 3) % 7;
					}

					if(days_number_in_week == 0)
						nb_sunday_first_of_month++;
			}
		}

		year++;
	} while(year < 2001);

	cout << nb_sunday_first_of_month;
}
void problem20() {
	mpz_class a, b, c;

	a = 1234;
	b = "-1234";

	c = a + b;
	cout << c;
}



int main(int argc, char **argv) {
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
	// problem11();
	// problem12();
	// problem13();
	// problem14();
	// problem15();
	// problem16();
	// problem17();
	// problem19();
	problem20();

	return 0;
}
