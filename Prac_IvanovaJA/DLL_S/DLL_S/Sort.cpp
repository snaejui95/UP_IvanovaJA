#include "pch.h"
#include "Sort.h"
#include <algorithm>
using namespace std;

ofstream fout;
ifstream fin;

void randText() {
	/*������� 100 ��������� ����*/
	srand(time(0));
	fout.open("textSample.txt");
	for (int i = 0; i < 100; i++) fout << rand() % 10;
	fout.close();
}

void swapToStars() {
	/*������ ���� ���� �� <<*>> */
	fout.open("textSample.txt");
	for (int i = 0; i < 100; i++) fout << "*";
	fout.close();
}
