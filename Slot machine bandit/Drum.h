#include "Roll.h"
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma once


class Drum
{
private:
	Roll first;
	Roll second;
	Roll third;
public:
	Drum() {
		///first, second, third;
	};

	void Play() {
		srand(time(NULL));
		int temp = rand() % 8 - 1; // случайное число для первого элемента
		for (int i = 0; i < temp; i++) {
			first.extract();
		}
		first.show2();
		Sleep(500);

		temp = rand() % 8 - 1; // случайное число для второго элемента
		for (int i = 0; i < temp; i++) {
			second.extract();
		}
		second.show2();
		Sleep(500);

		temp = rand() % 8 - 1; // случайное число для третьего элемента
		for (int i = 0; i < temp; i++) {
			third.extract();
		}
		third.show2();
		Sleep(500);
	}
};

