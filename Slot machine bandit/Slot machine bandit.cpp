// Slot machine bandit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Drum.h"
#pragma warning(suppress : 4996)
using namespace std;


//Условия задачи
/*Создать имитацию игры «однорукий бандит». Например, при нажатии кнопки «Enter» происходит «вращение»
трех барабанов (естественно, количество вращений каждого из них выбирается случайно),
на которых изображены разные значки; и если выпадает определенная
комбинация, то игрок получает какой-то выигрыш.*/



int main()
{
    int decision = NULL;
    Drum game;
    do {
        game.Play();
        cout << "\t\t Once more? Press ENTER to continue..." << endl;
        decision = _getch();
    } while (decision == 13);

}