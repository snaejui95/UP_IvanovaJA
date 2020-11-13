#include "pch.h"
#include "Sort.h"
#include <algorithm>
using namespace std;

ofstream fout;
ifstream fin;

void randText() {
	/*Выводит 100 рандомных цифр*/
	srand(time(0));
	fout.open("textSample.txt");
	for (int i = 0; i < 100; i++) fout << rand() % 10;
	fout.close();
}

void swapToStars() {
	/*Замена всех цифр на <<*>> */
	fout.open("textSample.txt");
	for (int i = 0; i < 100; i++) fout << "*";
	fout.close();
}
