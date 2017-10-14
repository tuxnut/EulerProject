#include "./header.h"
/*Multiples of 3 and 5*/
void problem1() {
	int sum = 0;

	for (int i = 3; i < 1000; i++) {
		if (i%3 == 0 || i%5 == 0)
			sum += i;
	}

	std::cout << sum;
}
/*Even Fibonacci numbers*/
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
	std::cout << sum;
}
/*Largest prime factor*/
void problem3() {
	int maxPrimeFactor = 2;
	long number = int_problem3;

	while (maxPrimeFactor * maxPrimeFactor <= number) {
		if (number % maxPrimeFactor == 0) {
			std::cout << maxPrimeFactor << "\t";
			number /= maxPrimeFactor;
		}
		else
			maxPrimeFactor++;
	}

	if (number > 1)
		std::cout << "- "<<number;
}
/*Largest palindrome product*/
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

	std::cout << largestPalindrome;
}
/*Smallest multiple*/
void problem5() {
	std::cout << 2*2*2*2*3*3*5*7*11*13*17*19;
}
/*Sum square difference*/
void problem6() {
	long sum_of_square = 0, square_of_sum = 0;

	for (size_t i = 1; i <= 100; i++)
	{
		square_of_sum += i;
		sum_of_square += pow(i, 2);
	}

	square_of_sum = pow(square_of_sum, 2);

	std::cout << square_of_sum - sum_of_square;
}
/*10001st prime*/
void problem7() {
	int counter = 6;
	long number = 17;

	do
	{
		if (isPrime(number))
			counter++;

		number+=2;	
	} while(counter < 10001);
	
	std::cout << number - 2;
}
/*Largest product in a series*/
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
	
	std::cout << max;
}
/*Special Pythagorean triplet*/
void problem9() {
	// 200 - 375 - 425
	for (size_t i = 1; i < 333; i++)
	{
		for (size_t j = 2; j < 500; j++)
		{
			for (size_t k = 3; k < 500; k++)
			{
				if(pow(i, 2) + pow (j, 2) == pow(k, 2) && ( i + j + k) == 1000) {
					std::cout << i*j*k << " " << i << " " << j << " " << k << " ";
					break;
				}
			}
		}
	}
}
/*Summation of primes*/
void problem10() {
	long int chloe = 17;

	for (size_t i = 11; i < 2000000; i+=2)
	{
		if(isPrime(i))
			chloe+=i;
	}
	std::cout << chloe;
}
/*Largest product in a grid*/
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

	// std::cout << max_line; // 21426363
	// std::cout << max_column; // 17712864
}
/*Highly divisible triangular number*/
void problem12() {
	long triangle_rank = 1;
	long triangle = 0;

	do
	{
		triangle += triangle_rank;
		std::cout << triangle_rank << " ";
		triangle_rank++;
	} while(list_factor(triangle).size() < 500);

	std::cout << triangle; 
}
/*Large sum*/
void problem13() {
	// const char * n = "37107287533902102798797998220837590246510135740250";
	// mpz_class result(n);
	// n  = "46376937677490009712648124896970078050417018260538";result += mpz_class (n);
	// n  = "74324986199524741059474233309513058123726617309629";result += mpz_class (n);
	// n  = "91942213363574161572522430563301811072406154908250";result += mpz_class (n);
	// n  = "23067588207539346171171980310421047513778063246676";result += mpz_class (n);
	// n  = "89261670696623633820136378418383684178734361726757";result += mpz_class (n);
	// n  = "28112879812849979408065481931592621691275889832738";result += mpz_class (n);
	// n  = "44274228917432520321923589422876796487670272189318";result += mpz_class (n);
	// n  = "47451445736001306439091167216856844588711603153276";result += mpz_class (n);
	// n  = "70386486105843025439939619828917593665686757934951";result += mpz_class (n);
	// n  = "62176457141856560629502157223196586755079324193331";result += mpz_class (n);
	// n  = "64906352462741904929101432445813822663347944758178";result += mpz_class (n);
	// n  = "92575867718337217661963751590579239728245598838407";result += mpz_class (n);
	// n  = "58203565325359399008402633568948830189458628227828";result += mpz_class (n);
	// n  = "80181199384826282014278194139940567587151170094390";result += mpz_class (n);
	// n  = "35398664372827112653829987240784473053190104293586";result += mpz_class (n);
	// n  = "86515506006295864861532075273371959191420517255829";result += mpz_class (n);
	// n  = "71693888707715466499115593487603532921714970056938";result += mpz_class (n);
	// n  = "54370070576826684624621495650076471787294438377604";result += mpz_class (n);
	// n  = "53282654108756828443191190634694037855217779295145";result += mpz_class (n);
	// n  = "36123272525000296071075082563815656710885258350721";result += mpz_class (n);
	// n  = "45876576172410976447339110607218265236877223636045";result += mpz_class (n);
	// n  = "17423706905851860660448207621209813287860733969412";result += mpz_class (n);
	// n  = "81142660418086830619328460811191061556940512689692";result += mpz_class (n);
	// n  = "51934325451728388641918047049293215058642563049483";result += mpz_class (n);
	// n  = "62467221648435076201727918039944693004732956340691";result += mpz_class (n);
	// n  = "15732444386908125794514089057706229429197107928209";result += mpz_class (n);
	// n  = "55037687525678773091862540744969844508330393682126";result += mpz_class (n);
	// n  = "18336384825330154686196124348767681297534375946515";result += mpz_class (n);
	// n  = "80386287592878490201521685554828717201219257766954";result += mpz_class (n);
	// n  = "78182833757993103614740356856449095527097864797581";result += mpz_class (n);
	// n  = "16726320100436897842553539920931837441497806860984";result += mpz_class (n);
	// n  = "48403098129077791799088218795327364475675590848030";result += mpz_class (n);
	// n  = "87086987551392711854517078544161852424320693150332";result += mpz_class (n);
	// n  = "59959406895756536782107074926966537676326235447210";result += mpz_class (n);
	// n  = "69793950679652694742597709739166693763042633987085";result += mpz_class (n);
	// n  = "41052684708299085211399427365734116182760315001271";result += mpz_class (n);
	// n  = "65378607361501080857009149939512557028198746004375";result += mpz_class (n);
	// n  = "35829035317434717326932123578154982629742552737307";result += mpz_class (n);
	// n  = "94953759765105305946966067683156574377167401875275";result += mpz_class (n);
	// n  = "88902802571733229619176668713819931811048770190271";result += mpz_class (n);
	// n  = "25267680276078003013678680992525463401061632866526";result += mpz_class (n);
	// n  = "36270218540497705585629946580636237993140746255962";result += mpz_class (n);
	// n  = "24074486908231174977792365466257246923322810917141";result += mpz_class (n);
	// n  = "91430288197103288597806669760892938638285025333403";result += mpz_class (n);
	// n  = "34413065578016127815921815005561868836468420090470";result += mpz_class (n);
	// n  = "23053081172816430487623791969842487255036638784583";result += mpz_class (n);
	// n  = "11487696932154902810424020138335124462181441773470";result += mpz_class (n);
	// n  = "63783299490636259666498587618221225225512486764533";result += mpz_class (n);
	// n  = "67720186971698544312419572409913959008952310058822";result += mpz_class (n);
	// n  = "95548255300263520781532296796249481641953868218774";result += mpz_class (n);
	// n  = "76085327132285723110424803456124867697064507995236";result += mpz_class (n);
	// n  = "37774242535411291684276865538926205024910326572967";result += mpz_class (n);
	// n  = "23701913275725675285653248258265463092207058596522";result += mpz_class (n);
	// n  = "29798860272258331913126375147341994889534765745501";result += mpz_class (n);
	// n  = "18495701454879288984856827726077713721403798879715";result += mpz_class (n);
	// n  = "38298203783031473527721580348144513491373226651381";result += mpz_class (n);
	// n  = "34829543829199918180278916522431027392251122869539";result += mpz_class (n);
	// n  = "40957953066405232632538044100059654939159879593635";result += mpz_class (n);
	// n  = "29746152185502371307642255121183693803580388584903";result += mpz_class (n);
	// n  = "41698116222072977186158236678424689157993532961922";result += mpz_class (n);
	// n  = "62467957194401269043877107275048102390895523597457";result += mpz_class (n);
	// n  = "23189706772547915061505504953922979530901129967519";result += mpz_class (n);
	// n  = "86188088225875314529584099251203829009407770775672";result += mpz_class (n);
	// n  = "11306739708304724483816533873502340845647058077308";result += mpz_class (n);
	// n  = "82959174767140363198008187129011875491310547126581";result += mpz_class (n);
	// n  = "97623331044818386269515456334926366572897563400500";result += mpz_class (n);
	// n  = "42846280183517070527831839425882145521227251250327";result += mpz_class (n);
	// n  = "55121603546981200581762165212827652751691296897789";result += mpz_class (n);
	// n  = "32238195734329339946437501907836945765883352399886";result += mpz_class (n);
	// n  = "75506164965184775180738168837861091527357929701337";result += mpz_class (n);
	// n  = "62177842752192623401942399639168044983993173312731";result += mpz_class (n);
	// n  = "32924185707147349566916674687634660915035914677504";result += mpz_class (n);
	// n  = "99518671430235219628894890102423325116913619626622";result += mpz_class (n);
	// n  = "73267460800591547471830798392868535206946944540724";result += mpz_class (n);
	// n  = "76841822524674417161514036427982273348055556214818";result += mpz_class (n);
	// n  = "97142617910342598647204516893989422179826088076852";result += mpz_class (n);
	// n  = "87783646182799346313767754307809363333018982642090";result += mpz_class (n);
	// n  = "10848802521674670883215120185883543223812876952786";result += mpz_class (n);
	// n  = "71329612474782464538636993009049310363619763878039";result += mpz_class (n);
	// n  = "62184073572399794223406235393808339651327408011116";result += mpz_class (n);
	// n  = "66627891981488087797941876876144230030984490851411";result += mpz_class (n);
	// n  = "60661826293682836764744779239180335110989069790714";result += mpz_class (n);
	// n  = "85786944089552990653640447425576083659976645795096";result += mpz_class (n);
	// n  = "66024396409905389607120198219976047599490197230297";result += mpz_class (n);
	// n  = "64913982680032973156037120041377903785566085089252";result += mpz_class (n);
	// n  = "16730939319872750275468906903707539413042652315011";result += mpz_class (n);
	// n  = "94809377245048795150954100921645863754710598436791";result += mpz_class (n);
	// n  = "78639167021187492431995700641917969777599028300699";result += mpz_class (n);
	// n  = "15368713711936614952811305876380278410754449733078";result += mpz_class (n);
	// n  = "40789923115535562561142322423255033685442488917353";result += mpz_class (n);
	// n  = "44889911501440648020369068063960672322193204149535";result += mpz_class (n);
	// n  = "41503128880339536053299340368006977710650566631954";result += mpz_class (n);
	// n  = "81234880673210146739058568557934581403627822703280";result += mpz_class (n);
	// n  = "82616570773948327592232845941706525094512325230608";result += mpz_class (n);
	// n  = "22918802058777319719839450180888072429661980811197";result += mpz_class (n);
	// n  = "77158542502016545090413245809786882778948721859617";result += mpz_class (n);
	// n  = "72107838435069186155435662884062257473692284509516";result += mpz_class (n);
	// n  = "20849603980134001723930671666823555245252804609722";result += mpz_class (n);
	// n  = "53503534226472524250874054075591789781264330331690";result += mpz_class (n);

	// std::cout << result; //5537376230390876637302048746832985971773659831892672;
}
/*Longest Collatz sequence*/
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
	std::cout << thomas << " avec " << lea << " termes";
}
/*Lattice paths*/
void problem15() {
	/* Le but est d'aller de (0, 0)  à (20, 20) (n, n)
	* on doit donc aller 20 (n) fois à droite, et 20 (n) fois en bas
	* on aura fait dans TOUS les cas 40 (2*n) déplacements
	* d' où le 20 (n) parmi 40 (2*n) */
	
	long unsigned int aurelien = fact(40) / pow(fact(20), 2); 
	std::cout << aurelien << 137846528820;//137846528820
}
/*Power digit sum*/
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
	std::cout << sum;
}
/*Number letter counts*/
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

	std::cout << nb_letter_one_to_900_ninetynine + 11;
}
/*Maximum path sum I*/
void problem18() {

}
/*Counting Sundays*/
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

	std::cout << nb_sunday_first_of_month;
}
/*Factorial digit sum*/
void problem20() {
	// mpz_class n = fact_mpz(100); // 93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
	const char* fact_100 = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";

	int i = 0;
	long sum = 0;

	while(fact_100[i]) {
		sum += fact_100[i] - offset_pb8;
		i++;
	}	

	std::cout << sum;
}
/*Amicable numbers*/
void problem21() {

	int sum = 0;
	for (size_t i = 1; i < 10000; i++)
	{
		// compute d(i)
		std::vector<long> divisor_i = list_factor(i);

		int sum_divisor_i = 0;

		for (size_t j = 0; j < divisor_i.size(); j++)
		{
			sum_divisor_i += divisor_i[j];
		}

		// compute d(sum_divisor_i)
		std::vector<long> divisor_ii = list_factor(sum_divisor_i);

		int sum_divisor_ii = 0;

		for (size_t j = 0; j < divisor_ii.size(); j++)
		{
			sum_divisor_ii += divisor_ii[j];
		}

		if(sum_divisor_ii == i && i != sum_divisor_i) {
			std::cout << i << " and " << sum_divisor_i << std::endl;
			sum += i;
		}
	}

	std::cout << sum << '\n';
}
/*Names scores*/
void problem22() {
	/* setup data */
	std::string str = readFile("p022_names.txt");
	std::string delimiter = "\",\"";

	size_t pos = 0;
	std::vector<std::string> names;

	while ((pos = str.find(delimiter)) != std::string::npos) {
		names.push_back(str.substr(0, pos));
		str.erase(0, pos + delimiter.length());
	}

	names[0].erase(0, 1);
	names.push_back("ALONSO");

	/* sorting vector */
	sort(names.begin(), names.end());

	/* computing sum */
	size_t sum = 0;

	for (size_t i = 0; i < names.size(); i++) {
		std::string name_at_i = names[i];
		int value_name = 0, cpt = 0;

		while(name_at_i[cpt]) {
			int letter = name_at_i[cpt] - offset_pb22;
			value_name += letter;
			cpt++;
		}
		value_name *= i+1;
		sum += value_name;
	}

	std::cout << sum << '\n';
}
/*Non-abundant sums*/
void problem23() {
	// find every abundant number < 28123
	// find every combination of two of those
	// sum what's left
	/* size_t guillaume = 0;

	std::vector<int> vect_abundant_nb;
	for (size_t i = 12; i < 28124 - 12; i++)
		if(isAbundant(i))
			vect_abundant_nb.push_back(i);

	std::vector<int> vect_sum_2_abundant;
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = i; j < vect_abundant_nb.size(); j++) {
			int sum_2_abundant = vect_abundant_nb[i] + vect_abundant_nb[j];
			
			if(sum_2_abundant > 28123)
				break;
			else if(find(vect_sum_2_abundant.begin(), vect_sum_2_abundant.end(), sum_2_abundant) != vect_sum_2_abundant.end())
				continue;
			else {
				vect_sum_2_abundant.push_back(sum_2_abundant);
				std::cout << sum_2_abundant << endl;
			}
		}
		std::cout << "-----------" << i << '\n';
	}

	sort(vect_sum_2_abundant.begin(), vect_sum_2_abundant.end());

	for (size_t i = 0; i < vect_sum_2_abundant.size(); i++) {
		if(!(find(vect_sum_2_abundant.begin(), vect_sum_2_abundant.end(), i) != vect_sum_2_abundant.end()))
			guillaume += i;
	}

	std::cout << guillaume << '\n'; */
}
/*Lexicographic permutations*/
void problem24() {
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::sort(tab, tab+10);
	size_t cpt = 1;

	do {
		std::next_permutation(tab, tab+10);
		cpt++;
	} while(cpt<1000000);
	
	for(size_t i = 0; i < 10; i++)
		std::cout << tab[i];
}
/*1000-digit Fibonacci number*/
void problem25() {
	std::vector<size_t> indexes;
	std::vector<size_t> fibo;
	int power = 2;
	double_t moy = 0;
	
	fibo.push_back(0);
	fibo.push_back(1);
	fibo.push_back(1);

	for(size_t i = 3; i < 105; i++) {
		fibo.push_back(fibo.at(i-1) + fibo.at(i-2));
		if(fibo.at(i) > pow(10, power)) {
			power++;
			indexes.push_back(i);
		}		
	}
	
	for(size_t i = 0; i < indexes.size(); i++) {
		std::cout << indexes.at(i) << "\t";
		if(i > 0) {
			moy += (indexes.at(i) - indexes.at(i-1));
		}
	}
	std::cout << power-1 << std::endl;
	moy /= (indexes.size()-1);
	std::cout << moy << std::endl;
}

/*Reciprocal cycles*/
void problem26() {
	int d = 0;
	int recurringCycleLength = 0;
	
	
	for(size_t i = 2; i < 1000; i++) {
		std::vector<int> digit; // stocker les digit;
		// double_t result = 1./i;
		digit.push_back(1);

		int n = 0;
		while(1) {
			int value = (10 * digit.at(n)) % i;
			
			if(value == 0 || (std::find(digit.begin(), digit.end(), value) != digit.end()))
				break;
			
			digit.push_back(value);

			n++;
		}

		if(n - 1 > recurringCycleLength) {
			recurringCycleLength = n - 1;
			d = i;
		}

		std::cout << "nouveau max : " << d << std::endl;
	}
	std::cout << "Valeur de d est " << d << std::endl;
	std::cout << "Longueur du cycle est " << recurringCycleLength << std::endl;
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
	// problem20();
	// problem21();
	// problem22();
	// problem23();
	// problem24();
	// problem25();
	problem26();
	return 0;
}