#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Переменные объявляется таким образом: #тип# #имя# = #значение#

	//short - УКОРОЧЕННЫЙ
	//long - УДЛИНЁННЫЙ (по умолчанию для int)
	//signed - ПОЛОЖИТЕЛЬНЫЙ и ОТРЕЦАТЕЛЬНЫЙ (по умолчанию)
	//unsigned - ТОЛЬКО ПОЛОЖИТЕЛЬНЫЙ

	//ЦЕЛЫЕ
	//short, short int, signed short, signed short int (-32 768...32 767) - 2 byte
	//unsigned, unsigned int, unsigned, unsigned int (0...65 535) - 2 byte
	//int, signed, signed int, long, long int, signed long, signed long int (-2 147 483 648...2 147 483 647) - 4 byte
	//long long, long long int, long signed long, long signed long int (-9 223 372 036 854 775 808...9 223 372 036 854 775 807) - 8 byte

	//ВЕЩЕСТВЕННЫЕ
	// float (-2 147 483 648.0...2 147 483 647.0) - 4 byte
	// long float, double (-9 223 372 036 854 775 808.0...9 223 372 036 854 775 807.0) - 8 byte

	//sizeof(#переменная | тип#) - возвращает размер переменной или типа (в byte)

	short shortNumber = 200;
	cout << "short: " << sizeof(shortNumber) << endl;
	long long longNumber = 200000000000;
	cout << "long long: " << sizeof(longNumber) << endl;

	//КОНСТАНТЫ5
	const short DAYS_OF_WEEK = 7;

	//В файле limits.h находятся константы максимальных и минимальных значений типов
	int maxInteger = INT_MAX;
	cout << maxInteger;

	//В стандарте C++11 появился новый способ объявления переменных: #тип# #имя# {#значение#}
	//Этот способ обеспечивает лучшую защиту от ошибок преобразования типов
	int number1 = 10;
	int number2{ 10 };

	//Условный оператор
	//if (#условие#)
	//{
	//	#блок кода#
	//}

	//cin.get() - ждёт пока не нажмётся клавиша Enter
	cin.get();

	return 0;
}
