﻿#define _USE_MATH_DEFINES
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void if1(int num) {
	/*Дано целое число. Если оно является положительным, то прибавить к
	нему 1; в противном случае не изменять его. Вывести полученное число.*/
	if (num > 0) num++;
	cout << num << endl;
}

void if2(int num) {
	/*Дано целое число. Если оно является положительным, то прибавить к
	нему 1; в противном случае вычесть из него 2. Вывести полученное число.*/
	if (num > 0) num++;
	else num -= 2;
	cout << num << endl;
}

void if3(int num) {
	/*Дано целое число. Если оно является положительным, то прибавить к
	нему 1; если отрицательным, то вычесть из него 2; если нулевым, то
	заменить его на 10. Вывести полученное число.*/
	if (num > 0) num++;
	else if (num < 0) num - 2;
	else num = 10;
	cout << num << endl;
}

void if4(int a, int b, int c) {
	/*Даны три целых числа. Найти количество положительных чисел в исходном наборе.*/
	int counter = 0;
	if (a > 0) counter++;
	if (b > 0) counter++;
	if (c > 0) counter++;
	cout << counter << endl;
}

void if5(int a, int b, int c) {
	/* Даны три целых числа. Найти количество положительных и количество
	отрицательных чисел в исходном наборе.*/
	int pos = 0;
	int neg = 0;
	if (a > 0) pos++;
	else if (a < 0) neg++;
	if (b > 0) pos++;
	else if (b < 0) neg++;
	if (c > 0) pos++;
	else if (c < 0) neg++;
	cout << "Negative = " << neg << endl;
	cout << "Positive = " << pos << endl;
}

void if6(int a, int b) {
	/*Даны два числа. Вывести большее из них.*/
	if (a > b) cout << a << endl;
	else if (b > a) cout << b << endl;
}

void if7(int a, int b) {
	/*Даны два числа. Вывести порядковый номер меньшего из них.*/
	if (a > b) cout << 1 << endl;
	else if (b > a) cout << 2 << endl;
}

void if8(int a, int b) {
	/*Даны два числа. Вывести вначале большее, а затем меньшее из них.*/
	if (a == b) return;
	else if (a > b) cout << a << b << endl;
	else cout << b << a << endl;
}

void if9(int a, int b) {
	/*Даны две переменные вещественного типа: A, B. Перераспределить значения 
	данных переменных так, чтобы в A оказалось меньшее из значений,
	а в B — большее. Вывести новые значения переменных A и B.*/
	if (a == b) return;
	else if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}

void if10(int a, int b) {
	/*Даны две переменные целого типа: A и B. Если их значения не равны,
	то присвоить каждой переменной сумму этих значений, а если равны,
	то присвоить переменным нулевые значения. Вывести новые значения
	переменных A и B.*/
	if (a != b) {
		int sum = a + b;
		a = sum;
		b = sum;
	}
	else {
		a = 0;
		b = 0;
	}
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}

void if11(int a, int b) {
	/*Даны две переменные целого типа: A и B. Если их значения не равны, то
	присвоить каждой переменной большее из этих значений, а если равны,
	то присвоить переменным нулевые значения. Вывести новые значения
	переменных A и B.*/
	if (a != b) {
		if (a > b) b = a;
		else a = b;
	}
	else {
		a = 0;
		b = 0;
	}
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}

void if12(int a, int b, int c) {
	/*Даны три числа. Найти наименьшее из них.*/
	if ((a < b) && (a < c)) cout << a << endl;
	else if ((b <= a) && (b < c)) cout << b << endl;
	else cout << c << endl;
}

void if13(int a, int b, int c) {
	/*Даны три числа. Найти среднее из них (то есть число, расположенное
	между наименьшим и наибольшим).*/
	if (((a < b) && (a > c)) || ((a > b) && (a < c))) cout << a << endl;
	else if (((b <= a) && (b > c)) || ((b >= a) && (b < c))) cout << b << endl;
	else cout << c << endl;
}

void if14(int a, int b, int c) {
	/*Даны три числа. Вывести вначале наименьшее, а затем наибольшее из
	данных чисел.*/
	if ((a < b) && (a < c)) {
		cout << a << endl;
		if (b > c) cout << b << endl;
		else cout << c << endl;
	}
	else if ((b <= a) && (b < c)) {
		cout << b << endl;
		if (a > c) cout << a << endl;
		else cout << c << endl;
	}
	else {
		cout << c << endl;
		if (a > b) cout << a << endl;
		else cout << b << endl;
	}
}

void if15(int a, int b, int c) {
	/*Даны три числа. Найти сумму двух наибольших из них.*/
	int sum = 0;
	if ((a < b) && (a < c)) sum = b + c;
	else if ((b <= a) && (b < c)) sum = a + c;
	else sum = a + b;
	cout << sum << endl;
}

void if16(int a, int b, int c) {
	/*Даны три переменные вещественного типа: A, B, C. Если их значения
	упорядочены по возрастанию, то удвоить их; в противном случае заменить 
	значение каждой переменной на противоположное. Вывести новые
	значения переменных A, B, C.*/
	if ((a < b) && (b < c)) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else {
		a *= -1;
		b *= -1;
		c *= -1;
	}
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
}

void if17(int a, int b, int c) {
	/*Даны три переменные вещественного типа: A, B, C. Если их значения
	упорядочены по возрастанию или убыванию, то удвоить их; в противном случае 
	заменить значение каждой переменной на противоположное.
	Вывести новые значения переменных A, B, C.*/
	if (((a < b) && (b < c)) || ((a > b) && (b > c))) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else {
		a *= -1;
		b *= -1;
		c *= -1;
	}
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
}

void if18(int a, int b, int c) {
	/*Даны три целых числа, одно из которых отлично от двух других, 
	равных между собой. Определить порядковый номер числа, отличного от остальных.*/
	if (b == c) cout << 1 << endl;
	else if (a == c) cout << 2 << endl;
	else cout << 3 << endl;
}

void if19(int a, int b, int c, int d) {
	/*Даны четыре целых числа, одно из которых отлично от трех других,
	равных между собой. Определить порядковый номер числа, отличного от
	остальных.*/
	if (b == c) {
		if (c == d) cout << 1 << endl;
		else cout << 4 << endl;
	}
	else if (a == b) cout << 3 << endl;
	else cout << 1 << endl;
}

void if20(int a, int b, int c) {
	/* На числовой оси расположены три точки: A, B, C. Определить, какая из
	двух последних точек (B или C) расположена ближе к A, и вывести эту
	точку и ее расстояние от точки A.*/
	int ba = abs(b - a);
	int ca = abs(c - a);
	if (ba < ca) {
		cout << "B = " << b << endl;
		cout << "distance from A = " << ba << endl;
	}
	else {
		cout << "C = " << c << endl;
		cout << "distance from A = " << ca << endl;
	}
}

void if21(int x, int y) {
	/*Даны целочисленные координаты точки на плоскости. Если точка совпадает 
	с началом координат, то вывести 0. Если точка не совпадает с началом координат, 
	но лежит на оси OX или OY, то вывести соответственно 1
	или 2. Если точка не лежит на координатных осях, то вывести 3.*/
	if (x == 0) {
		if (y == 0) cout << 0 << endl;
		else cout << 1 << endl;
	}
	else {
		if (y == 0) cout << 2 << endl;
		else cout << 3 << endl;
	}
}

void if22(int x, int y) {
	/*Даны координаты точки, не лежащей на координатных осях OX и OY.
	Определить номер координатной четверти, в которой находится данная точка.*/
	if (x > 0) {
		if (y > 0) cout << 1 << endl;
		else cout << 4 << endl;
	}
	else {
		if (y > 0) cout << 2 << endl;
		else cout << 3 << endl;
	}
}

void if23(int x1, int y1, int x2, int y2, int x3, int y3) {
	/*Даны целочисленные координаты трех вершин прямоугольника, стороны
	которого параллельны координатным осям. Найти координаты его четвертиной*/
	int x4, int y4;
	if (x1 == x2) x4 = x3;
	else if (x1 == x3) x4 = x2;
	else x4 = x1;

	int x4, int y4;
	if (y1 == y2) y4 = y3;
	else if (y1 == y3) y4 = y2;
	else y4 = y1;

	cout << "x4 = " << x4 << endl;
	cout << "y4 = " << y4 << endl;
}

void if24(float x) {
	/*Для данного вещественного x найти значение следующей функции f,
	принимающей вещественные значения:
	f (x) = 2·sin(x), если x > 0, 6 − x, если x ≤ 0.*/
	float y;
	if (x > 0) y = 2 * sin(x);
	else y = 6 - x;
	cout << x << endl;
}

void if25(float x) {
	/*Для данного целого x найти значение следующей функции f, 
	принимающей значения целого типа:
	f (x) = 2·x, если x < −2 или x > 2, −3·x, в противном случае.*/
	if ((x < -2) || (x > 2)) x *= 2;
	else x *= -3;
	cout << x << endl;
}

void if26(float x) {
	/*Для данного вещественного x найти значение следующей функции f,
	принимающей вещественные значения:
			−x, если x ≤ 0,
	f (x) = x^2, если 0 < x < 2,
			4, если x ≥ 2.*/
	if (x <= 0) x *= -1;
	else if (x >= 2) x = 4;
	else x *= x;
	cout << x << endl;
}

void if27(float x) {
	/*Для данного вещественного x найти значение следующей функции f,
	принимающей значения целого типа:
			0, если x < 0,
	f (x)=	1, если x принадлежит [0, 1), [2, 3), . . . ,
			−1, если x принадлежит [1, 2), [3, 4), . . . .*/
	if (x < 0) x = 0;
	else if (( ((int)x) % 2) == 0) x = 1;
	else x = -1;
	cout << x << endl;
}

void if28(int year) {
	/*Дан номер года (положительное целое число). Определить количество
	дней в этом году, учитывая, что обычный год насчитывает 365 дней, а
	високосный — 366 дней. Високосным считается год, делящийся на 4, за
	исключением тех годов, которые делятся на 100 и не делятся на 400
	(например, годы 300, 1300 и 1900 не являются високосными, а 1200 и 2000
	— являются).*/
	if (((year / 4) == 0) && ((year / 100) != 0) && ((year / 400) == 0)) {
		cout << "366" << endl;
	}
	else cout << "365" << endl;
}

void if29(int number) {
	/*Дано целое число. Вывести его строку-описание вида «отрицательное
	четное число», «нулевое число», «положительное нечетное число» и т. д.*/
	if (number == 0) cout << "Нулевое число" << endl;
	else if (number > 0) {
		cout << "положительное ";
		if ((number % 2) == 0) cout << "четное число" << endl;
		else cout << "нечетное число" << endl;
	}
	else {
		cout << "отрицательное ";
		if ((number % 2) == 0) cout << "четное число" << endl;
		else cout << "нечетное число" << endl;
	}
}

void if30(int number) {
	/* Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида 
	«четное двузначное число», «нечетное трехзначное число» и т. д.*/
	if ((number % 2) == 0) {
		cout << "четное ";
		if ((number / 10) > 0) {
			if ((number / 100) > 0) cout << "трехзначное число" << endl;
			else cout << "двузначное число" << endl;
		}
		else cout << "однозначное число" << endl;
	}
	else {
		cout << "нечётное ";
		if ((number / 10) > 0) {
			if ((number / 100) > 0) cout << "трехзначное число" << endl;
			else cout << "двузначное число" << endl;
		}
		else cout << "однозначное число" << endl;
	}
}