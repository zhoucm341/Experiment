#include "Square.h"
#include<iostream>
#include<cmath>  
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;


Square::Square() {
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
}

Square::Square(int at, int bt) {
	a = at;
	b = bt;
}

void Square::C() {
	Squ_C = (a + b) * 2;
}

void Square::S() {
	Squ_S = a * b;
}

void Square::question(char arr[]) {
	ofstream que("question.txt", ios::app);
	ofstream wro("wrong.txt", ios::app);
	if (!que)
	{
		cout << "question文件打开失败！" << endl;
		return;
	}
	if (!que)
	{
		cout << "wrong文件打开失败！" << endl;
		return;
	}
	int n = rand() % 2;

	if (n == 0) {
		que << "方形求周长 a=" << a << " b=" << b << endl;
		cout << "方形求周长 a=" << a << " b=" << b << endl;
		C();
		cout << "输入：";
		cin >> get_C;
		int x = snprintf(&arr[0], sizeof(arr), "%d", Squ_C);
		arr[x + 1] = '\0';
		if (Squ_C == get_C) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "方形求周长 a=" << a << " b=" << b << endl;
			wro << "答案：" << left << setw(20) << Squ_C << "		输入：" << get_C << endl;
			wro << endl;
		}
		que << "答案：" << left << setw(20) << Squ_C << "		输入：" << get_C << endl;
		que << endl;
	}
	if (n == 1) {
		que << "方形求面积 a=" << a << " b=" << b << endl;
		cout << "方形求面积 a=" << a << " b=" << b << endl;
		S();
		cout << "输入：";
		cin >> get_S;
		int x = snprintf(&arr[0], sizeof(arr), "%d", Squ_S);
		arr[x + 1] = '\0';
		if (Squ_S == get_S) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "方形求面积 a=" << a << " b=" << b << endl;
			wro << "答案：" << left << setw(20) << Squ_S << "		输入：" << get_S << endl;
			wro << endl;
		}
		que << "答案：" << left << setw(20) << Squ_S << "		输入：" << get_S << endl;
		que << endl;
	}

	que.close();
}

int Square::over() {
	if (get_C == -1 || get_S == -1 ) {
		return -1;
	}
}

Square::~Square() {

}