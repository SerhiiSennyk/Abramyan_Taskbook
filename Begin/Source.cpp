#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void Begin1(int a) {
	//Дана сторона квадрата a.Найти его периметр P = 4·a.
	int p = 4 * a;
	cout << "P = " << p << endl;
}

void Begin2(int a) {
	//Дана сторона квадрата a.Найти его площадь S = a^2
	int s = a * a;
	cout << "S = " << s << endl;
}

void Begin3(int a, int b) {
	/*Даны стороны прямоугольника a и b. 
	Найти его площадь S = a·b и периметр P = 2·(a + b).*/
	int s = a * b;
	int p = 2 * (a + b);

	cout << "S = " << s << endl;
	cout << "P = " << p << endl;
}

void Begin4(int d) {
	//Дан диаметр окружности d. Найти ее длину L = π·d.
	float l = d * M_PI;
	cout << "L = " << l << endl;
}

void Begin5(int a) {
	/*Дана длина ребра куба a. 
	Найти объем куба и площадь его поверхности*/
	int v = pow(a, 3);
	int s = 6 * (a * a);

	cout << "V = " << v << endl;
	cout << "S = " << s << endl;
}

void Begin6(int a, int b, int c) {
	/*Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти
его объем V = a·b·c и площадь поверхности S = 2·(a·b + b·c + a·c).*/
	int v = a * b * c;
	int s = 2 * (a * b + a * c + b * c);

	cout << "V = " << v << endl;
	cout << "S = " << s << endl;
}

void Begin7(int r) {
	/*Найти длину окружности L и площадь круга S заданного радиуса R*/
	float l = 2 * M_PI * r;
	float s = M_PI * r * r;

	cout << "l = " << l << endl;
	cout << "s = " << s << endl;
}

void Begin8(int a, int b) {
	/*Даны два числа a и b. Найти их среднее арифметическое*/
	float mean = (a + b) / 2;
	cout << "mean = " << mean << endl;
}

void Begin9(int a, int b) {
	/*Даны два неотрицательных числа a и b. Найти их среднее геометрическое*/
	float gMean = sqrt(a * b);
	cout << "geometric mean = " << gMean << endl;
}

void Begin10(int a, int b) {
	/*Даны два ненулевых числа. 
	Найти сумму, разность, произведение и частное их квадратов.*/
	int aSquare = a * a;
	int bSquare = b * b;

	int sum = aSquare + bSquare;
	int difference = aSquare - bSquare;
	int product = aSquare * bSquare;
	int quotient = aSquare / bSquare;
	
	cout << "a^2 + b^2 = " << sum << endl;
	cout << "a^2 - b^2 = " << difference << endl;
	cout << "a^2 * b^2 = " << product << endl;
	cout << "a^2 / b^2 = " << quotient << endl;
}

void Begin11(int a, int b) {
	/*Даны два ненулевых числа. 
	Найти сумму, разность, произведение и частное их модулей.*/
	int absoluteA = abs(a);
	int absoluteB = abs(b);

	int sum = absoluteA + absoluteB;
	int difference = absoluteA - absoluteB;
	int product = absoluteA * absoluteB;
	int quotient = absoluteA / absoluteB;

	cout << "|a| + |b| = " << sum << endl;
	cout << "|a| - |b| = " << difference << endl;
	cout << "|a| * |b| = " << product << endl;
	cout << "|a| / |b| = " << quotient << endl;
}

void Begin12(int a, int b) {
	/*Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P*/
	float c = sqrt(a*a + b*b);
	int p = a + b + c;
	cout << "hypothenuse = " << c << endl;
	cout << "P = " << p << endl;
}

void Begin13(int r1, int r2) {
	/*Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
Найти площади этих кругов S1 и S2, а также площадь S3 кольца, внешний
радиус которого равен R1, а внутренний радиус равен R2*/
	float s1 = M_PI * r1*r1;
	float s2 = M_PI * r2*r2;
	float s3 = s1 - s2;

	cout << "S1 = " << s1 << endl;
	cout << "S2 = " << s2 << endl;
	cout << "S3 = " << s3 << endl;
}

void Begin14(int l) {
	/*Дана длина L окружности. Найти ее радиус R и площадь S круга,
ограниченного этой окружностью*/
	float r = l / (2 * M_PI);
	float s = M_PI * r*r;
	
	cout << "R = " << r << endl;
	cout << "S = " << s << endl;
}

void Begin15(int s) {
	/*Дана площадь S круга. Найти его диаметр D и длину L окружности,
ограничивающей этот круг*/
	float r = sqrt(s / M_PI);
	float d = 2 * r;
	float l = M_PI * d;

	cout << "D = " << d << endl;
	cout << "L = " << l << endl;
}

void Begin16(int x1, int x2) {
	/*Найти расстояние между двумя точками с заданными координатами x1 и x2*/
	int distance = abs(x1 - x2);
	cout << "distance = " << distance << endl;
}

void Begin17(int a, int b, int c) {
	/*Даны три точки A, B, C на числовой оси. 
	Найти длины отрезков AC и BC и их сумму.*/
	int ac = abs(a - c);
	int bc = abs(b - c);
	int acbc = ac + bc;

	cout << "AC length = " << ac << endl;
	cout << "BC length = " << bc << endl;
	cout << "AC + BC = " << acbc << endl;
}

void Begin18(int a, int b, int c) {
	/*Даны три точки A, B, C на числовой оси. Точка C расположена
	между точками A и B. Найти произведение длин отрезков AC и BC.*/
	int ac = abs(a - c);
	int bc = abs(b - c);
	int product = ac * bc;

	cout << "ac * bc = " << product << endl;
}

void Begin19(int x1, int y1, int x2, int y2) {
	/*Даны координаты двух противоположных вершин прямоугольника:
	(x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат.
	Найти периметр и площадь данного прямоугольника.*/
	int xLength = abs(x1 - x2);
	int yLength = abs(y1 - y2);
	int p = 2 * (xLength + yLength);
	int s = xLength * yLength;

	cout << "P = " << p << endl;
	cout << "S = " << s << endl;
}

void Begin20(int x1, int y1, int x2, int y2) {
	/*Найти расстояние между двумя точками с заданными координатами
	(x1, y1) и (x2, y2) на плоскости.*/
	int xLength = abs(x1 - x2);
	int yLength = abs(y1 - y2);
	float distance = sqrt(xLength * xLength + yLength * yLength);

	cout << "distance = " << distance << endl;
}

void Begin21(int x1, int y1, int x2, int y2, int x3, int y3) {
	/*Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3).
	Найти его периметр и площадь*/
	float a = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	float b = sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2));
	float c = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	float p = a + b + c;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "P = " << p << endl;
	cout << "S = " << s << endl;
}

void Begin22(int a, int b) {
	/*Поменять местами содержимое переменных A и B и вывести новые значения A и B.*/
	int c = a;
	a = b;
	b = c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void Begin23(int a, int b, int c) {
	/*Даны переменные A, B, C. Изменить их значения, переместив содержимое 
	A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C*/
	int aTemp = a;
	a = c;
	c = b;
	b = aTemp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void Begin24(int a, int b, int c) {
	/*Даны переменные A, B, C. Изменить их значения, переместив содержимое 
	A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.*/
	int cTemp = a;
	c = a;
	a = b;
	b = cTemp;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void Begin25(int x) {
	/*Найти значение функции y = 3x^6 - 6x^2 - 7*/
	float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "f(" << x << ") = 3" << x << "^6 - 6" << x <<"^2 - 7 = " << y << endl;
}

void Begin26(int x) {
	/*Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2*/
	float y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "f(" << x << ") = 4(" << x << " - 3)^6 - 7(" << x << " - 3)^3 + 2 = " << y << endl;
}

void Begin27(int a) {
	/*Дано число A. Вычислить A^8 через промежуточные степени*/
	int pow2 = a * a;
	int pow4 = pow2 * pow2;
	int pow8 = pow4 * pow4;

	cout << "A^2 = " << pow2 << endl;
	cout << "A^4 = " << pow4 << endl;
	cout << "A^8 = " << pow8 << endl;
}

void Begin28(int a) {
	/*Дано число A. Вычислить A^15 через промежуточные степени*/
	int pow2 = a * a;
	int pow3 = a * pow2;
	int pow5 = pow2 * pow3;
	int pow10 = pow5 * pow5;
	int pow15 = pow5 * pow10;

	cout << "A^2 = " << pow2 << endl;
	cout << "A^3 = " << pow3 << endl;
	cout << "A^5 = " << pow5 << endl;
	cout << "A^10 = " << pow10 << endl;
	cout << "A^15 = " << pow15 << endl;
}

void Begin29(int α) {
	/*Дано значение угла α в градусах (0 < α < 360). 
	Определить значение этого же угла в радианах*/
	float radians = α * (M_PI / 180);
	cout << α << " degrees = " << radians << " radians" << endl;
}

void Begin30(int α) {
	/*Дано значение угла α в радианах (0 < α < 2·π). 
	Определить значение этого же угла в градусах*/
	float degrees = (α * 180) / M_PI;
	cout << α << " radians = " << degrees << " degrees" << endl;
}

void Begin31(int t) {
	/*Дано значение температуры T в градусах Фаренгейта. 
	Определить значение этой же температуры в градусах Цельсия*/
	float centigrade = (t - 32) * (5 / 9);
	cout << t << " degrees fahrenheit = " << centigrade << " degrees centigrade" << endl;
}

void Begin32(int t) {
	/*Дано значение температуры T в градусах Цельсия. 
	Определить значение этой же температуры в градусах Фаренгейта*/
	float fahrenheit = ((t * 9) / 5) + 32;
	cout << t << " degrees centigrade = " << fahrenheit << " degrees fahrenheit" << endl;
}

void Begin33(int x, int a, int y) {
	/*Известно, что X кг конфет стоит A рублей. 
	Определить, сколько стоит 1 кг и Y кг этих же конфет.*/
	float kg = a / x;
	float yKg = y * kg;

	cout << "1 kg = " << kg << " rub" << endl;
	cout << y << " kg = " << yKg << " rub" << endl;
}

void Begin34(int x, int a, int y, int b) {
	/*Известно, что X кг шоколадных конфет стоит A рублей, а Y кг ирисок стоит B рублей. 
	Определить, сколько стоит 1 кг шоколадных конфет, 1 кг ирисок, 
	а также во сколько раз шоколадные конфеты дороже ирисок*/
	float kgChocolate = a / x;
	float kgCaramel = y / y;
	float times = kgChocolate / kgCaramel;

	cout << "1 kg chocolate = " << kgChocolate << " rub" << endl;
	cout << "1 kg caramel = " << kgCaramel << " rub" << endl;
	cout << "chocolate is " << times << " times more expensive than caramel" << endl;
}

void Begin35(int v, int u, float t1, float t2) {
	/*Скорость лодки в стоячей воде V км/ч, скорость течения реки U км/ч (U < V). 
	Время движения лодки по озеру T1 ч, а по реке (против течения)— T2 ч. 
	Определить путь S, пройденный лодкой (путь = время · скорость)*/
	float s1 = v * t1;
	float s2 = (v - u) * t2;
	float s = s1 + s2;

	cout << "s = " << s << endl;
}

void Begin36(int v1, int v2, int s, float t) {
	/*Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. 
	Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. 
	Данное расстояние равно сумме начального расстояния и общего пути, проделанного автомобилями;
	общий путь = время · суммарная скорость.*/
	float s1 = v1 * t;
	float s2 = v2 * t;
	float Δs = abs(s1 - s2) + s;

	cout << "distance = " << Δs << endl;
}

void Begin37(int v1, int v2, int s, float t) {
	/*Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. 
	Определить расстояние между ними через T часов, если автомобили первоначально движутся 
	навстречу друг другу. Данное расстояние равно модулю разности начального расстояния и общего пути,
	проделанного автомобилями; общий путь = время · суммарная скорость.*/
	float distance = abs(s - t * (v1 + v2));

	cout << "distance = " << distance << endl;
}

void Begin38(int a, int b) {
	/*Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)*/
	float x = -(b / a);
	cout << "x = " << x << endl;
}

void Begin39(int a, int b, int c) {
	/*Найти корни квадратного уравнения A·x^2 + B·x + C = 0, заданного своими коэффициентами A, B, C 
	(коэффициент A не равен 0), если известно, что дискриминант уравнения положителен. 
	Вывести вначале меньший, а затем больший из найденных корней.*/
	float d = b*b - 4 * a * c;
	float x1 = (-b - sqrt(d)) / (2 * a);
	float x2 = (-b - sqrt(d)) / (2 * a);

	cout << "D = " << d << endl;
	cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
}

void Begin40(int a1, int b1, int c1, int a2, int b2, int c2) {
	/*Найти решение системы линейных уравнений вида
	A1·x + B1·y = C1,
	A2·x + B2·y = C2,
	заданной своими коэффициентами A1, B1, C1, A2, B2, C2, если известно,
	что данная система имеет единственное решение.*/
	int y = (c2 * a1 - a2 * c1) / (b1 * (1 - a2));
	int x = (c1 - b1 * y) / a1;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}