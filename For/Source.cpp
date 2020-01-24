#define _USE_MATH_DEFINES
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void for1(int k, int n) {
	/* Даны целые числа K и N (N > 0). Вывести N раз число K.*/
	for (int i = 0; i < n; i++) {
		cout << k;
	}
	cout << endl;
}

void for2(int a, int b) {
	/*Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
	целые числа, расположенные между A и B (включая сами числа A и B), а
	также количество N этих чисел.*/
	int n = b - a + 1;
	for (; a <= b; a++) {
		cout << a;
	}
	cout << endl << n << endl;
}

void for3(int a, int b) {
/*Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые числа,
расположенные между A и B (не включая числа A и B), а также количество N этих чисел.*/
int n = (--b) - a;
for (; b > a; b--) {
	cout << b;
}
cout << endl << n << endl;
}

void for4(int price) {
	/*Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
	2, . . . , 10 кг конфет.*/
	for (int i = 1; i <= 10; i++) {
		cout << i << " kg of candies costs " << i * price << endl;
	}
}

void for5(int price) {
	/*Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
	0.2, . . . , 1 кг конфет.*/
	for (int i = 1; i <= 10; i++) {
		cout << i * 0.1 << " kg of candies costs " << i * 0.1 * price << endl;
	}
}

void for6(int price) {
	/*Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
	1.4, . . . , 2 кг конфет.*/
	for (int i = 1; i <= 5; i++) {
		cout << 1 + (i * 0.2) << " kg of candies costs " << (1 + (i * 0.2)) * price << endl;
	}
}

void for7(int a, int b) {
	/*Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
	от A до B включительно*/
	int sum = 0;
	for (; a <= b; a++) {
		sum += a;
	}
	cout << sum << endl;
}

void for8(int a, int b) {
	/*Даны два целых числа A и B (A < B). Найти произведение всех целых
	чисел от A до B включительно.*/
	int m = 1;
	for (; a <= b; a++) {
		m *= a;
	}
	cout << m << endl;
}

void for9(int a, int b) {
	/*Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
	чисел от A до B включительно.*/
	int q = 0;
	for (; a <= b; a++) {
		q += a*a;
	}
	cout << q << endl;
}

void for10(int n) {
	/*Дано целое число N (> 0). Найти сумму 1 + 1/2 + 1/3 + ... + 1/N (вещественное число).*/
	float sum = 1;
	for (int i = 1; i <= n; i++) {
		sum += 1 / i;
	}
	cout << sum << endl;
}

void for11(int n) {
	/*Дано целое число N (> 0). Найти сумму N^2 + (N + 1)^2 + (N + 2)^2 + . . . 
	+ (2·N)^2 (целое число).*/
	int sum = 0;
	for (int i = 0; i <= (2 * n); i++) {
		sum += (n + i)*(n + i);
	}
	cout << sum << endl;
}

void for12(int n) {
	/* Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . .
	(N сомножителей)*/
	float m = 1;
	float e = 1.1;
	for (int i = 0; i < n; i++) {
		e += 0.1;
		m *= e;
	}
	cout << m << endl;
}

void for13(int n) {
	/*Дано целое число N (> 0). Найти значение выражения 1.1 − 1.2 + 1.3 − . . .
	(N слагаемых, знаки чередуются). Условный оператор не использовать.*/
	float m = 1;
	float e = 1.1;
	int sign = -1;
	for (int i = 0; i < n; i++) {
		sign *= -1;
		e += 0.1;
		m += (e + 0.1);
	}
	cout << m << endl;
}

void for14(int n) {
	/*Дано целое число N (> 0). Найти квадрат данного числа, используя для
	его вычисления следующую формулу: N^2 = 1 + 3 + 5 + . . . + (2·N − 1).
	После добавления к сумме каждого слагаемого выводить текущее значение суммы 
	(в результате будут выведены квадраты всех целых чисел от 1 до N).*/
	int nSqr = 1;
	for (int i = 1; i <= (2 * n - 1); i++) {
		nSqr += 2;
	}
	cout << n << "^2 = " << nSqr << endl;
}

void for15(int a, int n) {
	/*Дано вещественное число A и целое число N (> 0). Найти A в степени N:
	A^N = A·A· . . . ·A (числа A перемножаются N раз).*/
	int m = 1;
	for (int i = 0; i < n; i++) {
		m *= a;
	}
	cout << m << endl;
}

void for16(int a, int n) {
	/*Дано вещественное число A и целое число N (> 0). Используя один
	цикл, вывести все целые степени числа A от 1 до N.*/
	int m = 1;
	int pow = 1;
	for (int i = 0; i < n; i++) {
		m *= a;
		cout << a << "^" << pow++ << "= " << m << endl;
	}
}

void for17(int a, int n) {
	/*Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму
	1 + A + A^2 + A^3 + . . . + A^N .*/
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += pow(a, i);
	}
	cout << sum << endl;
}

void for18(int a, int n) {
	/*Дано вещественное число A и целое число N (> 0). Используя один цикл, 
	найти значение выражения 1 − A + A^2 − A^3 + . . . + (−1)^N ·A^N .
	Условный оператор не использовать.*/
	int sum = 0;
	int sign = -1;
	for (int i = 0; i <= n; i++) {
		sign *= -1;
		sum += sign * pow(a, i);
	}
	cout << sum << endl;
}

void for19(int n) {
	/*Дано целое число N (> 0). Найти произведение N! = 1·2·. . .·N (N–факториал). 
	Чтобы избежать целочисленного переполнения, вычислять это произведение с помощью 
	вещественной переменной и вывести его как вещественное число.*/
	long double factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
	cout << n << "! = " << factorial << endl;
}

void for20(int n) {
	/*Дано целое число N (> 0). Используя один цикл, найти сумму 1! + 2! + 3! + . . . + N!
	(выражение N! — N–факториал — обозначает произведение всех целых
	чисел от 1 до N: N! = 1·2·. . .·N). Чтобы избежать целочисленного переполнения, 
	проводить вычисления с помощью вещественных переменных и вывести результат как вещественное число.*/
	long double factorial = 1;
	long double sum = 0;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
		sum += factorial;
	}
	cout << sum << endl;
}

void for21(int n) {
	/* Дано целое число N (> 0). Используя один цикл, найти сумму
	1 + 1/(1!) + 1/(2!) + 1/(3!) + . . . + 1/(N!)
	(выражение N! — N–факториал — обозначает произведение всех целых
	чисел от 1 до N: N! = 1·2·. . .·N). 
	Полученное число является приближенным значением константы e = exp(1).*/
	long double factorial = 1;
	int exp = 0;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
		exp += 1/factorial;
	}
	cout << "exp(" << n << ") = " << exp << endl;
}

void for22(int x, int n) {
	/*Дано вещественное число X и целое число N (> 0). Найти значение выражения
	1 + X + X^2/(2!) + . . . + X^N /(N!) где (N! = 1·2·. . .·N). 
	Полученное число является приближенным значением функции exp в точке X.*/
	long double factorial = 1;
	int exp = 0;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
		exp += pow(x, i) / factorial;
	}
	cout << exp << endl;
}

void for23(int x, int n) {
	/*Дано вещественное число X и целое число N (> 0). Найти значение выражения
	X − X^3/(3!) + X^5/(5!) − . . . + (−1)N ·X^2·N+1/((2·N+1)!) (N! = 1·2·. . .·N). 
	Полученное число является приближенным значением функции sin в точке X.*/
	long double factorial = 1;
	int sin = 0;
	int sign = -1;
	for (int i = 1; i <= n + 1; i + 2) {
		sign *= -1;
		factorial *= i;
		sin += pow(x, i) / factorial;
		factorial *= i + 1;
	}
	cout << sin << endl;
}

void for24(int x, int n) {
	/* Дано вещественное число X и целое число N (> 0). Найти значение выражения
	1 − X^2/(2!) + X^4/(4!) − . . . + (−1)N ·X^2·N /((2·N)!) (N! = 1·2·. . .·N). 
	Полученное число является приближенным значением функции cos в точке X.*/
	long double factorial = 1;
	int cos = 1;
	int sign = -1;
	for (int i = 2; i <= 2 * n; i++) {
		factorial *= i;
		if (i % 2) {
			sign *= -1;
			cos += pow(x, i) / factorial;
		}
		factorial *= i + 1;
	}
	cout << cos << endl;
}

void for25(int x, int n) {
	/* Дано вещественное число X (|X| < 1) и целое число N (> 0). Найти значение выражения
	X − X^2/2 + X^3/3 − . . . + (−1)N−1·X^N /N.
	Полученное число является приближенным значением функции ln в точке 1 + X.*/
	int ln = 0;
	int sign = 1;
	for (int i = 1; i <= n; i++) {
		ln += sign * pow(x, i) / n;
		sign *= -1;
	}
	cout << ln << endl;
}


void for26(int x, int n) {
	/*Дано вещественное число X (|X| < 1) и целое число N (> 0). Найти значение выражения
	X − X^3/3 + X^5/5 − . . . + (−1)^N ·X^(2·N+1)/(2·N+1).  
	Полученное число является приближенным значением функции arctg в точке X.*/
	int arctan = 0;
	int sign = 1;
	for (int i = 1; i <= 2 * n + 1; i + 2) {
		arctan += pow(x, i) / i;
	}
	cout << arctan << endl;
}

void for27(int x, int n) {
	/*Дано вещественное число X (|X| < 1) и целое число N (> 0). Найти значение выражения
	X + 1·X^3/(2·3) + 1·3·X^5/(2·4·5) + . . . + 1·3·. . .·(2·N−1)·X 2·N+1/(2·4·. . .·(2·N)·(2·N+1)).
	Полученное число является приближенным значением функции arcsin в точке X*/
	long double arcsin = x;
	long double numerator = 1;
	long double denumerator = 1;
	long double power;
	for (int i = 1; i <= n; i++) {
		numerator *= 2 * i - 1;
		denumerator *= 2 * i;
		power = 2 * i + 1;
		arcsin += (numerator * pow(x, power)) / (denumerator * power);
	}
	cout << arcsin << endl;
}

void for28(int x, int n) {
	/*Дано вещественное число X (|X| < 1) и целое число N (> 0). Найти значение выражения
	1 + X/2 − 1·X^2/(2·4) + 1·3·X^3/(2·4·6) − . . . + (−1)N−1
	·1·3·. . .·(2·N−3)·X N /(2·4·. . .·(2·N)).
	Полученное число является приближенным значением функции √(1+X).*/
	long double function = 1 + x / 2;
	long double numerator = 1;
	long double denumerator = 2 * 4;
	int sign = -1;
	for (int i = 2; i <= n; i++) {
		numerator *= 2 * i - 3;
		denumerator *= 2 * i;
		function += (sign * numerator * pow(x, i)) / denumerator;
		sign *= -1;
	}
	cout << function << endl;
}

void for29(int a, int b, int n) {
	/*Дано целое число N (> 1) и две вещественные точки на числовой оси:
	A, B (A < B). Отрезок [A, B] разбит на N равных отрезков. Вывести H —
	длину каждого отрезка, а также набор точек
	A, A + H, A + 2·H, A + 3·H, . . . , B, образующий разбиение отрезка [A, B].*/
	int ab = b - a;
	float h = ab / n;
	cout << "A = " << a << endl;
	cout << "H = " << h << endl;
	for (int i = 1; i < n; i++) {
		cout << a + i * h;
		if (i != n) cout << ", ";
	}
	cout << "B = " << b << endl;
}

void for30(int a, int b, int n) {
	/*Дано целое число N (> 1) и две вещественные точки на числовой оси:
	A, B (A < B). Отрезок [A, B] разбит на N равных отрезков. Вывести H —
	длину каждого отрезка, а также значения функции F(X) = 1 − sin(X) в
	точках, разбивающих отрезок [A, B]:
	F(A), F(A + H), F(A + 2·H), . . . , F(B).*/
	int ab = b - a;
	float h = ab / n;
	cout << "H = " << h << endl;
	for (int i = 0; i <= n; i++) {
		cout << 1 - sin(a + i * h);
		if (i != n) cout << ", ";
	}
}

void for31(int n) {
	/*Дано целое число N (> 0). Последовательность вещественных чисел AK
	определяется следующим образом: A0 = 2, AK = 2 + 1/AK−1, K = 1, 2, . . . .
	Вывести элементы A1, A2, . . . , AN .*/
	float a = 2;
	for (int i = 1; i <= n; i++) {
		a = 2 + (1 / a);
		cout << a << endl;
	}
}

void for32(int n) {
	/*Дано целое число N (> 0). Последовательность вещественных чисел AK
	определяется следующим образом: A0 = 1, AK = (AK−1 + 1)/K, K = 1, 2, . . . .
	Вывести элементы A1, A2, . . . , AN .*/
	float a = 1;
	for (int i = 1; i <= n; i++) {
		a = (a + 1) / i;
		cout << a << endl;
	}
}

void for33(int n) {
	/*Дано целое число N (> 1). Последовательность чисел Фибоначчи FK (целого типа) 
	определяется следующим образом: F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .
	Вывести элементы F1, F2, ..., FN .*/
	long double fibMinus2 = 1;
	long double fibMinus1 = 1;
	long double fib;
	for (int i = 1; i <= n; i++) {
		cout << "F" << i << " = ";
		if (i <= 2) cout << 1 << endl;
		else {
			fib = fibMinus2 + fibMinus1;
			cout << fib << endl;
			fibMinus2 = fibMinus1;
			fibMinus1 = fib;
		}
	}
}

void for34(int n) {
	/*Дано целое число N (> 1). Последовательность вещественных чисел AK
	определяется следующим образом:
	A1 = 1, A2 = 2, AK = (AK−2 + 2·AK−1)/3, K = 3, 4, . . . .
	Вывести элементы A1, A2, . . . , AN .*/
	long double aMinus2 = 1;
	long double aMinus1 = 2;
	long double a;
	for (int i = 1; i <= n; i++) {
		cout << "A" << i << " = ";
		if (i < 2) cout << 1 << endl;
		else if (i == 2) cout << 2 << endl;
		else {
			a = (aMinus2 + aMinus1) / 3;
			cout << a << endl;
			aMinus2 = aMinus1;
			aMinus1 = a;
		}
	}
}

void for35(int n) {
	/*Дано целое число N (> 2). Последовательность целых чисел AK определяется следующим образом:
	A1 = 1, A2 = 2, A3 = 3, AK = AK−1 + AK−2 − 2·AK−3, K = 4, 5, . . . .
	Вывести элементы A1, A2, . . . , AN .*/
	long double aMinus3 = 1;
	long double aMinus2 = 2;
	long double aMinus1 = 3;
	long double a;
	for (int i = 1; i <= n; i++) {
		cout << "A" << i << " = ";
		if (i < 2) cout << 1 << endl;
		else if (i == 2) cout << 2 << endl;
		else if (i == 3) cout << 3 << endl;
		else {
			a = aMinus1 + aMinus2 - 2 * aMinus3;
			cout << a << endl;
			aMinus3 = aMinus2;
			aMinus2 = aMinus1;
			aMinus1 = a;
		}
	}
}

void for36(int n, int k) {
	/*Даны целые положительные числа N и K. Найти сумму 1^K + 2^K + . . . + N^K.
	Чтобы избежать целочисленного переполнения, вычислять слагаемые этой суммы 	с помощью вещественной переменной и выводить результат как вещественное число.*/
	long double sum;
	for (int i = 1; i <= n; i++) {
		long double powerK;
		for (int j = 1; j <= k; j++)
		{
			powerK *= i;
		}
		sum += powerK;
	}
	cout << sum << endl;
}

void for37(int n) {
	/*Дано целое число N (> 0). Найти сумму 1^1 + 2^2 + . . . + N^N . 
	Чтобы избежать целочисленного переполнения, вычислять слагаемые этой суммы 
	с помощью вещественной переменной и выводить результат как вещественное число.*/
	long double sum;
	for (int i = 1; i <= n; i++) {
		long double power;
		for (int j = 1; j <= i; j++)
		{
			power *= i;
		}
		sum += power;
	}
	cout << sum << endl;
}

void for38(int n) {
	/* Дано целое число N (> 0). Найти сумму 1^N + 2^(N−1) + . . . + N^1.
	Чтобы избежать целочисленного переполнения, вычислять слагаемые этой суммы 	с помощью вещественной переменной и выводить результат как вещественное число.*/
	long double sum;
	for (int i = 1; i <= n; i++) {
		long double power;
		for (int j = n + 1 - i; j >= 1; j--)
		{
			power *= i;
		}
		sum += power;
	}
	cout << sum << endl;
}

void for39(int a, int b) {
	/*Даны целые положительные числа A и B (A < B). Вывести все целые
	числа от A до B включительно; при этом каждое число должно выводиться
	столько раз, каково его значение (например, число 3 выводится 3 раза).*/
	for (int i = a; i <= b; i++) {
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

void for40(int a, int b) {
	/*Даны целые числа A и B (A < B). Вывести все целые числа от A до B
	включительно; при этом число A должно выводиться 1 раз, число A + 1
	должно выводиться 2 раза и т. д.*/
	int number = 0;
	for (int i = a; i <= b; i++) {
		number++;
		for (int j = 0; j < number; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}