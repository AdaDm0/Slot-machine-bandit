#include <iostream>
#pragma once
using namespace std;

class Roll
{
private:
	int size;
	char* queue;
public:
	Roll() {
		size = 7;
		queue = new char[size] {'!', 'z', '$', 4, 3, 5, 6};
	}

	//показать по заданному значению (проверка)
	/*void show(int num) {
		if (num > 0 && num <= 7) {
			cout << queue[num]<<" ";
		}
		else
			cout << "Error";
	}*/

	//показать после прокрутки барабана
	void show2() {
		cout << queue[0] << " ";
	}

	~Roll() {
		delete[] queue;
	}

	// кольцевая очередь (первое значение в конец, остальные - сдвиг вперед)
	void extract() {
		char temp = queue[0];
		for (int i = 1; i < size; i++) {
			queue[i - 1] = queue[i];
		}
		queue[size - 1] = temp;
	}

};
