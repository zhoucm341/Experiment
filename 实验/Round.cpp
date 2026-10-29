#include "Round.h"
#include<iostream>
#include<cmath>  
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
#define PI 3.1415


Round::Round() {
	R = rand() % 10 + 1;
}

Round::Round(int Rt) {
	R = Rt;
}

void Round::C() {
	Rou_C = 2.0 * PI * R;
}

void Round::S() {
	Rou_S =(float) PI * R * R;
}

void Round::question(char arr[]) {
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
		que << "圆求周长 R=" << R << endl;
		cout << "圆求周长 R=" << R << endl;
		C();
		cout << "输入：";
		cin >> get_C;
		int x = snprintf(&arr[0], sizeof(arr), "%.1f", Rou_C);
		arr[x + 1] = '\0';
		if (abs(Rou_C - get_C) <= 0.2) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "圆求周长 R=" << R << endl;
			wro << "答案：" << left << setw(20) << fixed << setprecision(1) << Rou_C << "		输入：" << get_C << endl;
			wro << endl;
		}
		que << "答案：" << left << setw(20) << fixed << setprecision(1) << Rou_C << "		输入：" << get_C << endl;
		que << endl;
	}
	if (n == 1) {
		que << "圆求面积 R=" << R << endl;
		cout << "圆求面积 R=" << R << endl;
		S();
		cout << "输入：";
		cin >> get_S;
		int x = snprintf(&arr[0], sizeof(arr), "%.1f", Rou_S);
		arr[x + 1] = '\0';
		if (abs(Rou_S - get_S) <= 0.2) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "圆求面积 R=" << R << endl;
			wro << "答案：" << left << setw(20) << fixed << setprecision(1) << Rou_S << "		输入：" << get_S << endl;
			wro << endl;
		}
		que << "答案：" << left << setw(20) << fixed << setprecision(1) << Rou_S << "		输入：" << get_S << endl;
		que << endl;
	}

	que.close();
}

int Round::over() {
	if (get_C == -1 || get_S == -1 ) {
		return -1;
	}
}

Round::~Round() {

}