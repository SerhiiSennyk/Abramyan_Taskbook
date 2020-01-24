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
	case 1: result = length * 0.1; break;
	case 2: result = length * 1000; break;
	case 3: result = length; break;
	case 4: result = length * 0.001; break;
	case 5: result = length * 0.01; break;
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
	case 1: result = mass; break;
	case 2: result = mass * 0.000001; break;
	case 3: result = mass * 0.001; break;
	case 4: result = mass * 1000; break;
	case 5: result = mass * 100; break;
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

enum class sides: int{N, W, S, E};

void case10_02(char c, int n) {
	sides side;
	switch(c){
	case 'N': side = sides::N; break;
	case 'W': side = sides::W; break;
	case 'S': side = sides::S; break;
	case 'E': side = sides::E; break;
	}
	side = (sides)(((int)side + n + 4) % 4);
	switch (side) {
	case sides::N: cout << "N" << endl; break;
	case sides::W: cout << "W" << endl; break;
	case sides::S: cout << "S" << endl; break;
	case sides::E: cout << "E" << endl; break;
	}
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
	case 'N': return NorthSwitch(n);
	case 'W': return WestSwitch(n);
	case 'S': return SouthSwitch(n);
	case 'E': return EastSwitch(n);
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

void case11_02(char c, int n1, int n2) {
	sides side;
	switch (c) {
	case 'N': side = sides::N; break;
	case 'W': side = sides::W; break;
	case 'S': side = sides::S; break;
	case 'E': side = sides::E; break;
	}
	side = (sides)(((int)side + n1 + n2 + 4) % 4);
	switch (side) {
	case sides::N: cout << "N" << endl; break;
	case sides::W: cout << "W" << endl; break;
	case sides::S: cout << "S" << endl; break;
	case sides::E: cout << "E" << endl; break;
	}
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
		break;
	case 2:
		cathetus = value / sqrt(2);
		hypotenuse = value;
		height = hypotenuse / 2;
		square = hypotenuse * (height / 2);
		break;
	case 3:
		cathetus = (value / sqrt(2)) * 2;
		hypotenuse = cathetus * sqrt(2);
		height = value;
		square = hypotenuse * (height / 2);
		break;
	case 4:
		hypotenuse = sqrt(value * 4);
		cathetus = hypotenuse / sqrt(2);
		height = hypotenuse / 2;
		square = value;
		break;
	}
	cout << "cathetus = " << cathetus << endl;
	cout << "hypotenuse = " << hypotenuse << endl;
	cout << "height = " << height << endl;
	cout << "square = " << square << endl;
}

void case14(int number, int value) {
	/*Элементы равностороннего треугольника пронумерованы следующим образом: 
	1 — сторона a, 2 — радиус R1 вписанной окружности (R1 = a· √ 3/6), 
	3 — радиус R2 описанной окружности (R2 = 2·R1), 4 — площадь S = a^2·√3/4. 
	Дан номер одного из этих элементов и его значение.
	Вывести значения остальных элементов данного треугольника (в том же порядке).*/
	float a, r1, r2, s;
	switch (number) {
	case 1:
		a = value;
		r1 = a * sqrt(0.5);
		r2 = 2 * r1;
		s = a*a * sqrt(0.75);
		break;
	case 2:
		a = value / sqrt(0.5);
		r1 = value;
		r2 = 2 * r1;
		s = a*a * sqrt(0.75);
		break;
	case 3:
		r1 = value / 2;
		a = r1 / sqrt(0.5);
		r2 = value;
		s = a*a * sqrt(0.75);
		break;
	case 4:
		a = sqrt(value / sqrt(0.75));
		r1 = a * sqrt(0.5);
		r2 = 2 * r1;
		s = value;
		break;
	}
	cout << "a = " << a << endl;
	cout << "r1 = " << r1 << endl;
	cout << "r2 = " << r2 << endl;
	cout << "square = " << s << endl;
}

void case15(int n, int m) {
	/*Мастям игральных карт присвоены порядковые номера: 1 — пики,
	2 — трефы, 3 — бубны, 4 — червы. Достоинству карт, старших десятки,
	присвоены номера: 11 — валет, 12 — дама, 13 — король, 14 — туз. Даны
	два целых числа: N — достоинство (6 ≤ N ≤ 14) и M — масть карты
	(1 ≤ M ≤ 4). Вывести название соответствующей карты вида «шестерка
	бубен», «дама червей», «туз треф» и т. п.*/
	switch (n) {
	case 6:
		cout << "шестёрка ";
		suits(m);
		break;
	case 7:
		cout << "семёрка ";
		suits(m);
		break;
	case 8:
		cout << "восьмёрка ";
		suits(m);
		break;
	case 9:
		cout << "девятка ";
		suits(m);
		break;
	case 10:
		cout << "десятка ";
		suits(m);
		break;
	case 11:
		cout << "валет  ";
		suits(m);
		break;
	case 12:
		cout << "дама ";
		suits(m);
		break;
	case 13:
		cout << "король ";
		suits(m);
		break;
	case 14:
		cout << "туз ";
		suits(m);
		break;
	default: cout << "none";
	}
}

void suits(int m) {
	switch (m) {
	case 1: cout << "пик" << endl; break;
	case 2: cout << "треф" << endl; break;
	case 3: cout << "бубен" << endl; break;
	case 4: cout << "червей" << endl; break;
	}
}

void case16(int number) {
	/*Дано целое число в диапазоне 20–69, определяющее возраст (в годах).
	Вывести строку-описание указанного возраста, обеспечив правильное согласование числа 
	со словом «год», например: 20 — «двадцать лет», 32 — «тридцать два года», 41 — «сорок один год».*/
	int dozens = number / 10;
	int units = number % 10;
	switch (dozens) {
	case 2:
		cout << "двадцать ";
		years(units);
		cout << endl;
		break;
	case 3:
		cout << "тридцать ";
		years(units);
		cout << endl;
		break;
	case 4:
		cout << "сорок ";
		years(units);
		cout << endl;
		break;
	case 5:
		cout << "пятдесят ";
		years(units);
		cout << endl;
		break;
	case 6:
		cout << "шестдесят ";
		years(units);
		cout << endl;
		break;
	}
}

void years(int units) {
	switch (units) {
	case 0: cout << "лет"; break;
	case 1: cout << "один год"; break;
	case 2: cout << "два года"; break;
	case 3: cout << "три года"; break;
	case 4: cout << "четыре года"; break;
	case 5: cout << "пять лет"; break;
	case 6: cout << "шесть лет"; break;
	case 7: cout << "семь лет"; break;
	case 8: cout << "восемь лет"; break;
	case 9: cout << "девять лет"; break;
	}
}

void case17(int number) {
	/* Дано целое число в диапазоне 10–40, определяющее количество учебных заданий 
	по некоторой теме. Вывести строку-описание указанного количества заданий, 
	обеспечив правильное согласование числа со словами «учебное задание», 
	например: 18 — «восемнадцать учебных заданий»*/
	int dozens = number / 10;
	int units = number % 10;
	if (dozens < 20) tenth(units);
	else {
		switch (dozens) {
		case 2:
			cout << "двадцать ";
			unitsTasks(units);
			break;
		case 3:
			cout << "тридцать ";
			unitsTasks(units);
			break;
		case 4:
			cout << "сорок ";
			unitsTasks(units);
			break;
		}
	}
}

void tenth(int units) {
	switch (units) {
	case 0: cout << "десять" << endl; break;
	case 1: cout << "одинадцать" << endl; break;
	case 2: cout << "двенадцать" << endl; break;
	case 3: cout << "тринадцать" << endl; break;
	case 4: cout << "четырнадцать" << endl; break;
	case 5: cout << "пятнадцать" << endl; break;
	case 6: cout << "шестнадцать" << endl; break;
	case 7: cout << "семнадцать" << endl; break;
	case 8: cout << "восемнадцать" << endl; break;
	case 9: cout << "девятнадцать" << endl; break;
	}
}

void unitsTasks(int units) {
	switch (units) {
	case 0: break;
	case 1: cout << "одно"; break;
	case 2: cout << "два"; break;
	case 3: cout << "три"; break;
	case 4: cout << "четыре"; break;
	case 5: cout << "пять"; break;
	case 6: cout << "шесть"; break;
	case 7: cout << "семь"; break;
	case 8: cout << "восемь"; break;
	case 9: cout << "девять"; break;
	}
	if (units == 1) cout << " учебное задание" << endl;
	else if ((units > 1) || (units < 5)) cout << " учебных задания" << endl;
	else cout << " учебных заданий" << endl;
}

void case18(int number) {
	/*Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа,
	например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».*/
	hundredsOut(number / 100);
	int dozens = (number % 100) / 10;
	int units = number % 10;
	if ((dozens > 1) && units) {
		dozensOut(dozens);
		unitsOut(units);
	}
	else tensOut(units);
}

void hundredsOut(int hundreds) {
	switch (hundreds) {
	case 0: break;
	case 1: cout << "сто "; break;
	case 2: cout << "двести "; break;
	case 3: cout << "триста "; break;
	case 4: cout << "четыреста "; break;
	case 5: cout << "пятсот "; break;
	case 6: cout << "шестьсот "; break;
	case 7: cout << "семьсот "; break;
	case 8: cout << "восемьсот "; break;
	case 9: cout << "девятьсот "; break;
	}
}

void dozensOut(int dozens) {
	switch (dozens) {
	case 0: break;
	case 2: cout << "двадцать "; break;
	case 3: cout << "тридцать "; break;
	case 4: cout << "чорок "; break;
	case 5: cout << "пятьдесят "; break;
	case 6: cout << "шестьдесят"; break;
	case 7: cout << "семьдесят "; break;
	case 8: cout << "восемьдесят "; break;
	case 9: cout << "девяносто "; break;
	}
}

void tensOut(int number) {
	switch (number) {
	case 0: cout << "десять" << endl; break;
	case 1: cout << "одинадцать" << endl; break;
	case 2: cout << "двенадцать" << endl; break;
	case 3: cout << "тринадцать" << endl; break;
	case 4: cout << "четырнадцать" << endl; break;
	case 5: cout << "пятнадцать" << endl; break;
	case 6: cout << "шестнадцать" << endl; break;
	case 7: cout << "семнадцать" << endl; break;
	case 8: cout << "восемнадцать" << endl; break;
	case 9: cout << "девятнадцать" << endl; break;
	}
}

void unitsOut(int units) {
	switch (units) {
	case 0: break;
	case 1: cout << "один" << endl; break;
	case 2: cout << "два" << endl; break;
	case 3: cout << "три" << endl; break;
	case 4: cout << "четыре" << endl; break;
	case 5: cout << "пять" << endl; break;
	case 6: cout << "шесть" << endl; break;
	case 7: cout << "семь" << endl; break;
	case 8: cout << "восемь" << endl; break;
	case 9: cout << "девять" << endl; break;
	}
}

void case19(int year) {
	/*В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, 
	обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. 
	В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, 
	змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить 	его название, если 1984 год — начало цикла: «год зеленой крысы».*/
	int cycle = (year - 1984) & 60;
	cout << "год ";
	switch (cycle / 12) {
	case 0: cout << "зелён"; break;
	case 1: cout << "красн"; break;
	case 2: cout << "жёлт"; break;
	case 3: cout << "бел"; break;
	case 4: cout << "чёрн"; break;
	}
	switch (cycle % 12) {
	case 0: cout << "ой крысы" << endl; break;
	case 1: cout << "ой коровы" << endl; break;
	case 2: cout << "го тигра" << endl; break;
	case 3: cout << "го зайца" << endl; break;
	case 4: cout << "го дракона" << endl; break;
	case 5: cout << "ой змеи" << endl; break;
	case 6: cout << "ой лошади" << endl; break;
	case 7: cout << "ой овцы" << endl; break;
	case 8: cout << "го обезьяны" << endl; break;
	case 9: cout << "ой курицы" << endl; break;
	case 10: cout << "ой собаки" << endl; break;
	case 11: cout << "ой свиньи" << endl; break;
	}
}

void case20(int d, int m) {
	/*Даны два целых числа: D (день) и M (месяц), определяющие правильную дату. 
	Вывести знак Зодиака, соответствующий этой дате: «Водолей» (20.1–18.2), 
	«Рыбы» (19.2–20.3), «Овен» (21.3–19.4), «Телец» (20.4–20.5), «Близнецы» (21.5–21.6), 	«Рак» (22.6–22.7), «Лев» (23.7–22.8), «Дева» (23.8–22.9), «Весы» (23.9–22.10), 	«Скорпион» (23.10–22.11), «Стрелец» (23.11–21.12), «Козерог» (22.12–19.1).*/
	switch (m) {
	case 1: 
		if (d < 20) cout << "Козерог" << endl;
		else cout << "Водолей" << endl; 
		break;
	case 2:
		if (d < 19) cout << "Водолей" << endl;
		else cout << "Рыбы" << endl;
		break;
	case 3:
		if (d < 21) cout << "Рыбы" << endl;
		else cout << "Овен" << endl;
		break;
	case 4:
		if (d < 20) cout << "Овен" << endl;
		else cout << "Телец" << endl;
		break;
	case 5:
		if (d < 21) cout << "Телец" << endl;
		else cout << "Близнецы" << endl;
		break;
	case 6:
		if (d < 22) cout << "Близнецы" << endl;
		else cout << "Рак" << endl;
		break;
	case 7:
		if (d < 23) cout << "Рак" << endl;
		else cout << "Лев" << endl;
		break;
	case 8:
		if (d < 23) cout << "Лев" << endl;
		else cout << "Дева" << endl;
		break;
	case 9:
		if (d < 23) cout << "Дева" << endl;
		else cout << "Весы" << endl;
		break;
	case 10:
		if (d < 23) cout << "Весы" << endl;
		else cout << "Скорпион" << endl;
		break;
	case 11:
		if (d < 23) cout << "Скорпион" << endl;
		else cout << "Стрелец" << endl;
		break;
	case 12:
		if (d < 22) cout << "Стрелец" << endl;
		else cout << "Козерог" << endl;
		break;
	}
}