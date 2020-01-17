#define _USE_MATH_DEFINES
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void Integer1(int l) {
	/*Дано расстояние L в сантиметрах.
	Используя операцию деления нацело, найти количество полных метров в нем*/
	int m = l / 100;
	cout << l << " cm = " << m << " m" << endl;
}

void Integer2(int m) {
	/*Дана масса M в килограммах.Используя операцию деления нацело,
	найти количество полных тонн в ней*/
	int tn = m / 1000;
	cout << m << " kg = " << tn << " ton" << endl;
}

void Integer3(int byte) {
	/*Дан размер файла в байтах.Используя операцию деления нацело,
	найти количество полных килобайтов, которые занимает данный файл*/
	int kb = byte / 1024;
	cout << byte << " bytes = " << kb << " kb" << endl;
}

void Integer4(int a, int b) {
	/*Даны целые положительные числа A и B(A > B).
	На отрезке длины A размещено максимально возможное количество отрезков длины B.
	Используя операцию деления нацело, найти количество отрезков B,
	размещенных на отрезке A.*/
	int number = a / b;
	cout << number << " of " << b << " fits into " << a << endl;
}

void Integer5(int a, int b) {
	/*Даны целые положительные числа A и B(A > B).На отрезке длины A
	размещено максимально возможное количество отрезков длины B(без
	наложений).Используя операцию взятия остатка от деления нацело, найти
	длину незанятой части отрезка A.*/
	/*	int number = a / b;
		int remainder = a - (number * b);*/
	int remainder = a % b;
	cout << "reminder = " << remainder << endl;
}

void Integer6(int doubleDigit) {
	/*Дано двузначное число.Вывести вначале его левую цифру(десятки),
	а затем — его правую цифру(единицы).Для нахождения десятков
	использовать операцию деления нацело, для нахождения единиц — операцию взятия остатка от деления.*/
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	cout << "In " << doubleDigit << " there are " << dozens << " dozens and " << units << " units" << endl;
}

void Integer7(int doubleDigit) {
	/*Дано двузначное число.Найти сумму и произведение его цифр.*/
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int sum = dozens + units;
	int product = dozens * units;
	cout << "sum = " << sum << endl;
	cout << "product = " << product << endl;
}

void Integer8(int doubleDigit) {
	/*Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.*/
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int backward = units * 10 + dozens;
	cout << backward << endl;
}

void Integer9(int trippleDigit) {
	/*Дано трехзначное число.Используя одну операцию деления нацело,
	вывести первую цифру данного числа(сотни).*/
	int hundreds = trippleDigit / 100;
	cout << "hundreds = " << hundreds << endl;
}

void Integer10(int trippleDigit) {
	/*Дано трехзначное число.Вывести вначале его последнюю цифру
	(единицы), а затем — его среднюю цифру(десятки).*/
	int doubleDigit = trippleDigit % 100;
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int number = units * 10 + dozens;
	cout << number << endl;
}

void Integer11(int trippleDigit) {
	/*Дано трехзначное число.Найти сумму и произведение его цифр.*/
	int hundreds = trippleDigit / 100;
	int doubleDigit = trippleDigit % 100;
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int sum = hundreds + dozens + units;
	int product = hundreds * dozens * units;
	cout << "sum = " << sum << endl;
	cout << "product = " << product << endl;
}

void Integer12(int trippleDigit) {
	/*Дано трехзначное число.Вывести число,
	полученное при прочтении исходного числа справа налево.*/
	int hundreds = trippleDigit / 100;
	int doubleDigit = trippleDigit % 100;
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int backward = units * 100 + dozens * 10 + hundreds;
	cout << backward << endl;
}

void Integer13(int trippleDigit) {
	/*Дано трехзначное число.В нем зачеркнули первую слева цифру и
	приписали ее справа.Вывести полученное число.*/
	int hundreds = trippleDigit / 100;
	int doubleDigit = trippleDigit % 100;
	int number = doubleDigit * 10 + hundreds;
	cout << number << endl;
}

void Integer14(int trippleDigit) {
	/*Дано трехзначное число.В нем зачеркнули первую справа цифру
	и приписали ее слева.Вывести полученное число.*/
	int hundredsDozens = trippleDigit / 10;
	int units = trippleDigit % 10;
	int number = units * 100 + hundredsDozens;
	cout << number << endl;
}

void Integer15(int trippleDigit) {
	/*Дано трехзначное число.Вывести число, полученное при перестановке цифр сотен
	и десятков исходного числа(например, 123 перейдет в 213).*/
	int hundreds = trippleDigit / 100;
	int doubleDigit = trippleDigit % 100;
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int number = dozens * 100 + hundreds * 10 + units;
	cout << number << endl;
}

void Integer16(int trippleDigit) {
	/*Дано трехзначное число.Вывести число, полученное при перестановке цифр десятков
	и единиц исходного числа(например, 123 перейдет в 132).*/
	int hundreds = trippleDigit / 100;
	int doubleDigit = trippleDigit % 100;
	int dozens = doubleDigit / 10;
	int units = doubleDigit % 10;
	int number = hundreds * 100 + units * 10 + dozens;
	cout << number << endl;
}

void Integer17(int number) {
	/*Дано целое число, большее 999. Используя одну операцию деления нацело
	и одну операцию взятия остатка от деления, найти цифру,
	соответствующую разряду сотен в записи этого числа.*/
	int trippleDigit = number % 1000;
	int hundreds = trippleDigit / 100;
	cout << "hundreds = " << hundreds << endl;
}

void Integer18(int number) {
	/*Дано целое число, большее 999. Используя одну операцию деления нацело
	и одну операцию взятия остатка от деления, найти цифру,
	соответствующую разряду тысяч в записи этого числа.*/
	int quadrippleDigit = number % 10000;
	int thousands = quadrippleDigit / 1000;
	cout << "thousands = " << thousands << endl;
}

void Integer19(int sec) {
	/*С начала суток прошло N секунд(N — целое).Найти количество
	полных минут, прошедших с начала суток.*/
	int min = sec / 60;
	cout << min << " minutes have passed" << endl;
}

void Integer20(int sec) {
	/*С начала суток прошло N секунд(N — целое).Найти количество
	полных часов, прошедших с начала суток.*/
	int hours = sec / 3600;
	cout << sec << " hours passed" << endl;
}

void Integer21(int sec) {
	/*С начала суток прошло N секунд(N — целое).Найти количество
	секунд, прошедших с начала последней минуты.*/
	int secPassed = sec % 60;
	cout << secPassed << " seconds have passed since last minute" << endl;
}

void Integer22(int sec) {
	/*С начала суток прошло N секунд(N — целое).Найти количество
	секунд, прошедших с начала последнего часа.*/
	int secPassed = sec % 3600;
	cout << secPassed << " seconds have passed since last hour" << endl;
}

void Integer23(int sec) {
	/*С начала суток прошло N секунд(N — целое).Найти количество
	полных минут, прошедших с начала последнего часа.*/
	int secPassed = sec % 3600;
	int minutes = secPassed / 60;
	cout << minutes << " minutes have passed since last hour" << endl;
}

void Integer24(int k) {
	/*Дни недели пронумерованы следующим образом : 0 — воскресенье,
	1 — понедельник, 2 — вторник, . . ., 6 — суббота.Дано целое число K,
	лежащее в диапазоне 1–365.Определить номер дня недели для K - го дня
	года, если известно, что в этом году 1 января было понедельником.*/
	int day = k % 7;
	cout << k << " day of the year is " << DayDisplay(day) << endl;
}

void Integer25week(int k) {
	/*Дни недели пронумерованы следующим образом : 0 — воскресенье,
	1 — понедельник, 2 — вторник, . . ., 6 — суббота.Дано целое число K,
	лежащее в диапазоне 1–365.Определить номер недели для K - го дня
	года, если известно, что в этом году 1 января было четвергом.*/
	int week = ((k + 4) / 7) + 1;
	cout << "On " << k << " day is " << week << " week." << endl;
}

void Integer25(int k) {
	/*Дни недели пронумерованы следующим образом : 0 — воскресенье,
	1 — понедельник, 2 — вторник, . . ., 6 — суббота.Дано целое число K,
	лежащее в диапазоне 1–365.Определить номер дня недели для K - го дня
	года, если известно, что в этом году 1 января было четвергом.*/
	int day = (k + 3) % 7;
	cout << k << " day of the year is " << DayDisplay(day) << endl;

}

void Integer26(int k) {
	/*Дни недели пронумерованы следующим образом : 1 — понедельник, 2 — вторник, . . ., 6 — суббота, 7 — воскресенье.Дано целое число K,
	лежащее в диапазоне 1–365.Определить номер дня недели для K - го дня
	года, если известно, что в этом году 1 января было вторником.*/
	int day = (k % 7) + 1;
	cout << k << " day of the year is " << DayDisplay(day) << endl;
}

void Integer27(int k) {
	/*Дни недели пронумерованы следующим образом : 1 — понедельник, 2 — вторник, . . ., 6 — суббота, 7 — воскресенье.Дано целое число K,
	лежащее в диапазоне 1–365.Определить номер дня недели для K - го дня
	года, если известно, что в этом году 1 января было субботой.*/
	int day = ((k + 4) % 7) + 1;
	cout << k << " day of the year is " << DayDisplay(day) << endl;
}

void Integer28(int k, int n) {
	/*Дни недели пронумерованы следующим образом : 1 — понедельник, 2 — вторник, . . ., 6 — суббота, 7 — воскресенье.Дано целое число K,
	лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7.
	Определить номер дня недели для K - го дня года, если известно, что в
	этом году 1 января было днем недели с номером N.*/
	int day = ((k + n - 2) % 7) + 1;
	cout << k << " day of the year is " << DayDisplay(day) << endl;
}

void Integer29(int a, int b, int c) {
	/*Даны целые положительные числа A, B, C.На прямоугольнике размера A × B размещено максимально возможное количество квадратов со
	стороной C(без наложений).Найти количество квадратов, размещенных
	на прямоугольнике, а также площадь незанятой части прямоугольника.*/
	int x = a / c;
	int y = b / c;
	int squares = x * y;
	int xl = a % c;
	int yl = b % c;
	int freeSpace = (a * b) - (squares * c*c);
	cout << "There are " << squares << " squares in the rectangle." << endl;
	cout << "There are " << freeSpace << " of free space left." << endl;
}

void Integer30(int year) {
	/*Дан номер некоторого года(целое положительное число).Определить соответствующий ему номер столетия, учитывая, что, к примеру,
	началом 20 столетия был 1901 год.*/
	int century = ((year - 1) / 100) + 1;
	cout << year << " year is in " << century << " century.";
}

std::string DayDisplay(int day) {
	switch (day) {
	case 1:
	case 7:
		return "Monday";
	case 2:
		return "Tuesday";
	case 3:
		return "Wednesday";
	case 4:
		return "Thursday";
	case 5:
		return "Friday";
	case 6:
		return "Saturday";
	case 0:
		return "Sunday";
	default:
		break;
	}
}