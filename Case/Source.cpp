#define _USE_MATH_DEFINES
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void case1(int day) {
	/*Дано целое число в диапазоне 1–7. Вывести строку — название дня
	недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.).*/
	switch (day) {
	case 1: cout << "Monday" << endl; break;
	case 2: cout << "Tuesday" << endl; break;
	case 3: cout << "Wednesday" << endl; break;
	case 4: cout << "Thursday" << endl; break;
	case 5: cout << "Friday" << endl; break;
	case 6: cout << "Saturday" << endl; break;
	case 7: cout << "Sunday" << endl; break;
	default: cout << "none" << endl; break;
	}
}

void case2(int k) {
	/*Дано целое число K. Вывести строку-описание оценки, соответствующей числу 
	K (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 
	5 — «отлично»). Если K не лежит в диапазоне 1–5, то вывести строку «ошибка».*/
	switch (k) {
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "неудовлетворительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4: cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default: cout << "none" << endl; break;
	}
}

void case3(int month) {
	/*Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.).
	Вывести название соответствующего времени года («зима», «весна», «лето», «осень»).*/
	switch (month) {
	case 1:
	case 2:
	case 12: cout << "зима" << endl; break;
	case 3:
	case 4:
	case 5: cout << "весна" << endl; break;
	case 6:
	case 7:
	case 8: cout << "лето" << endl; break;
	case 9:
	case 10:
	case 11: cout << "осень" << endl; break;
	default: cout << "none" << endl; break;
	}
}

void case4(int month) {
	/*Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
февраль и т. д.). Определить количество дней в этом месяце для невисокосного года.*/
	switch (month) {
	case 1: cout << "January - 31 days" << endl; break;
	case 2: cout << "February - 28 days" << endl; break;
	case 3: cout << "March - 31 days" << endl; break;
	case 4: cout << "April - 30 days" << endl; break;
	case 5: cout << "May - 31 days" << endl; break;
	case 6: cout << "June - 30 days" << endl; break;
	case 7: cout << "July - 31 days" << endl; break;
	case 8: cout << "August - 31 days" << endl; break;
	case 9: cout << "September - 30 days" << endl; break;
	case 10: cout << "October - 31 days" << endl; break;
	case 11: cout << "November - 30 days" << endl; break;
	case 12: cout << "December - 31 days" << endl; break;
	default: cout << "none" << endl; break;
	}
}

void case5(int a, int b, int n) {
	/*Арифметические действия над числами пронумерованы следующим
	образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление. Дан
	номер действия N (целое число в диапазоне 1–4) и вещественные числа A
	и B (В не равно 0). Выполнить над числами указанное действие и вывести
	результат.*/
	int result;
	switch (n) {
	case 1: result = a + b; break;
	case 2: result = a - b; break;
	case 3: result = a * b; break;
	case 4: result = a / b; break;
	default: return;
	}
	cout << result << endl;
}

void case6(int length, int prefix) {
	/*Единицы длины пронумерованы следующим образом: 1 — дециметр,
	2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр. Дан номер
	единицы длины (целое число в диапазоне 1–5) и длина отрезка в этих
	единицах (вещественное число). Найти длину отрезка в метрах.*/
	float result;
	switch (prefix) {
	case 1: result = length * 0.1;
	case 2: result = length * 1000;
	case 3: result = length;
	case 4: result = length * 0.001;
	case 5: result = length * 0.01;
	default: return;
	}
	cout << result << " meters" << endl;
}

void case7(int mass, int prefix) {
	/*Единицы массы пронумерованы следующим образом: 1 — килограмм,
	2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер единицы массы 
	(целое число в диапазоне 1–5) и масса тела в этих единицах
	(вещественное число). Найти массу тела в килограммах.*/
	float result;
	switch (prefix) {
	case 1: result = mass;
	case 2: result = mass * 0.000001;
	case 3: result = mass * 0.001;
	case 4: result = mass * 1000;
	case 5: result = mass * 100;
	default: return;
	}
}

void case8(int d, int m) {
	/*Даны два целых числа: D (день) и M (месяц), определяющие правильную дату 
	невисокосного года. Вывести значения D и M для даты, предшествующей указанной.*/
	d -= 1;
	if (d == 0) {
		m -= 1;
		if (m == 0) m = 12;
		switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: d = 31; break;
		case 4:
		case 6:
		case 9:
		case 11: d = 30; break;
		case 2: d = 28; break;
		default: return;
		}
	}
	cout << "Previous date is: " << d << "." << m << endl;
}

void case9(int d, int m) {
	/*Даны два целых числа: D (день) и M (месяц), определяющие правильную дату 
	невисокосного года. Вывести значения D и M для даты, следующей за указанной.*/
	d += 1;
	if (d > 28) {
		if ((d == 29) && (m == 2)) {
			m++;
			d = 1;
		}
		else {
			switch (m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (d > 30) {
					m++;
					d = 1;
					if (m == 13) m = 1;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (d > 31) {
					m++;
					d = 1;
				break;
			}
			default: return;
			}
		}
	}
	cout << "Next date is: " << d << "." << m << endl;
}

void case10(char c, int n) {
	/*Робот может перемещаться в четырех направлениях («N» — север,
	«W» — запад, «S» — юг, «E» — восток) и принимать три цифровые команды: 
	0 — продолжать движение, 1 — поворот налево, −1 — поворот
	направо. Дан символ C — исходное направление робота и целое число N
	— посланная ему команда. Вывести направление робота после выполнения полученной команды.*/
	switch (c) {
	case 'N':
		if (n > 0) c = 'W';
		else if (n < 0) c = 'E';
		break;
	case 'W':
		if (n > 0) c = 'S';
		else if (n < 0) c = 'N';
		break;
	case 'S':
		if (n > 0) c = 'E';
		else if (n < 0) c = 'W';
		break;
	case 'E':
		if (n > 0) c = 'N';
		else if (n < 0) c = 'S';
		break;
	}
	cout << c << endl;
}

void case11(char c, int n1, int n2) {
	/*Локатор ориентирован на одну из сторон света («С» — север, «З» —
	запад, «Ю» — юг, «В» — восток) и может принимать три цифровые команды поворота: 
	1 — поворот налево, −1 — поворот направо, 2 — поворот на 180◦.
	Дан символ C — исходная ориентация локатора и целые числа N1 и N2 — 
	две посланные команды. Вывести ориентацию локатора после выполнения этих команд.*/
	c = RadarSwitch(RadarSwitch(c, n1), n2);
	cout << c << endl;
}

char RadarSwitch(char c, int n) {
	switch (c) {
	case 'N':
		return NorthSwitch(n);
	case 'W':
		return WestSwitch(n);
	case 'S':
		return SouthSwitch(n);
	case 'E':
		return EastSwitch(n);
	}
}

char NorthSwitch(int n) {
	if (n == 1) return 'W';
	else if (n == -1) return 'E';
	else if (n == 2) return 'S';
	return 'N';
}

char WestSwitch(char n) {
	if (n == 1) return 'S';
	else if (n == -1) return 'N';
	else if (n == 2) return 'E';
	return 'W';
}

char SouthSwitch(char n) {
	if (n == 1) return 'E';
	else if (n == -1) return 'W';
	else if (n == 2) return 'N';
	return 'S';
}

char EastSwitch(char n) {
	if (n == 1) return 'N';
	else if (n == -1) return 'S';
	else if (n == 2) return 'W';
	return 'E';
}

void case12(int number, int value) {
	/*Элементы окружности пронумерованы следующим образом: 1 — радиус R, 2 — диаметр 
	D = 2·R, 3 — длина L = 2·π·R, 4 — площадь круга S = π·R^2.
	Дан номер одного из этих элементов и его значение. Вывести
	значения остальных элементов данной окружности (в том же порядке).*/
	float radius, diameter, length, square;
	switch (number) {
	case 1:
		radius = value;
		diameter = radius * 2;
		length = diameter * M_PI;
		square = radius*radius * M_PI;
		break;
	case 2:
		radius = value / 2;
		diameter = value;
		length = diameter * M_PI;
		square = radius * radius * M_PI;
		break;
	case 3:
		radius = value / (2 * M_PI);
		diameter = radius * 2;
		length = value;
		square = radius * radius * M_PI;
		break;
	case 4:
		radius = sqrt(value / M_PI);
		diameter = radius * 2;
		length = diameter * M_PI;
		square = value;
		break;
	}
	cout << "radius = " << radius << endl;
	cout << "diameter = " << diameter << endl;
	cout << "length = " << length << endl;
	cout << "square = " << square << endl;
}

void case13(int number, int value) {
	/*Элементы равнобедренного прямоугольного треугольника пронумерованы следующим 
	образом: 1 — катет a, 2 — гипотенуза c = a·√2, 3 — высота h, опущенная на гипотенузу
	(h = c/2), 4 — площадь S = c·h/2. Дан номер одного из этих элементов и его значение.
	Вывести значения остальных элементов данного треугольника (в том же порядке).*/
	float cathetus, hypotenuse, height, square;
	switch (number) {
	case 1:
		cathetus = value;
		hypotenuse = cathetus * sqrt(2);
		height = hypotenuse / 2;
		square = hypotenuse * (height / 2);
	case 2:
		cathetus = value / sqrt(2);
		hypotenuse = value;
		height = hypotenuse / 2;
		square = hypotenuse * (height / 2);
	case 3:
		cathetus = (value / sqrt(2)) * 2;
		hypotenuse = cathetus * sqrt(2);
		height = value;
		square = hypotenuse * (height / 2);
	case 4:
		hypotenuse = sqrt(value * 4);
		cathetus = hypotenuse / sqrt(2);
		height = hypotenuse / 2;
		square = value;
	}
	cout << "cathetus = " << cathetus << endl;
	cout << "hypotenuse = " << hypotenuse << endl;
	cout << "height = " << height << endl;
	cout << "square = " << square << endl;
}

void case14(int) {
	/*Элементы равностороннего треугольника пронумерованы следующим образом: 
	1 — сторона a, 2 — радиус R1 вписанной окружности (R1 = a· √ 3/6), 
	3 — радиус R2 описанной окружности (R2 = 2·R1), 4 — площадь S = a^2·√3/4. 
	Дан номер одного из этих элементов и его значение.
	Вывести значения остальных элементов данного треугольника (в том же порядке).*/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	}
}

void case15(int) {
	/**/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	}
}

void case16(int) {
	/**/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	}
}

void case17(int) {
	/**/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	}
}

void case18(int) {
	/**/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	}
}

void case19(int) {
	/**/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	}
}

void case20(int) {
	/**/
	switch () {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	}
}