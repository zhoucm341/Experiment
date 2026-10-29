#include "Triangle.h"
#include<iostream>
#include<cmath>  
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;


int IsTri(int a, int b, int c) {
	int n = 0;
	if (a + b > c && a + c > b && b + c > a) {
		n = 1;
	}
	return n;
}

Triangle::Triangle() {
	do {
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		c = rand() % 10 + 1;
	} while (!IsTri(a, b, c));
}

Triangle::Triangle(int at, int bt, int ct) {
	a = at;
	b = bt;
	c = ct;
}


void Triangle::C() {
	Tri_C = a + b + c;
}

void Triangle::S() {
	float n = (a + b + c) / 2.0;
	Tri_S = sqrt(n * (n - a) * (n - b) * (n - c));
	/*return Tri_S;*/
}

void Triangle::question(char arr[]) {
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
	int n = rand() % 9;

	if (n < 3) {
		que << "三角形求周长 a=" << a << " b=" << b << " c=" << c << endl;
		cout << "三角形求周长 a=" << a << " b=" << b << " c=" << c << endl;
		C();
		cout << "输入：" ;
		cin >> get_C;
		int x = snprintf(&arr[0], sizeof(arr), "%d", Tri_C);
		arr[x + 1] = '\0';
		if (Tri_C == get_C) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "三角形求周长 a=" << a << " b=" << b << " c=" << c << endl;
			wro << "答案：" << left << setw(20) << Tri_C << "		输入：" << get_C << endl;
			wro << endl;

		}
		que << "答案：" << left << setw(20) << Tri_C << "		输入：" << get_C << endl;
		que << endl;
	}
	if (n < 6 && n >= 3) {
		que << "三角形求面积 a=" << a << " b=" << b << " c=" << c << endl;
		cout << "三角形求面积 a=" << a << " b=" << b << " c=" << c << endl;
		S();
		cout << "输入：" ;
		cin >> get_S;
		int x = snprintf(&arr[0], sizeof(arr), "%.1f", Tri_S);
		arr[x + 1] = '\0';
		if (abs(Tri_S - get_S) <= 0.2) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "三角形求面积 a=" << a << " b=" << b << " c=" << c << endl;
			wro << "答案：" << left << setw(20) << fixed << setprecision(1) << Tri_S << "		输入：" << get_S << endl;
			wro << endl;
		}
		que << "答案：" << left << setw(20) << fixed << setprecision(1) << Tri_S << "		输入：" << get_S << endl;
		que << endl;
	}
	if (n < 9 && n >= 6) {
		que << "三角形判断类型 a=" << a << " b=" << b << " c=" << c << endl;
		cout << "三角形判断类型 a=" << a << " b=" << b << " c=" << c << endl;
		Istype();
		cout << "输入（0：等边，1：等腰，2：普通）：" ;
		cin >> t;
		int x = snprintf(&arr[0], sizeof(arr), "%d", type);
		arr[x + 1] = '\0';
		if (type == t) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
			wro << "三角形判断类型 a=" << a << " b=" << b << " c=" << c << endl;
			wro << "答案：" << left << setw(20) << type << "		输入：" << t << endl;
			wro << endl;
		}
		que << "答案：" << left << setw(20) << type << "		输入：" << t << endl;
		que << endl;
	}

	que.close();
}

void Triangle::Istype() {
	if (a == b && b == c) {
		type = 0; //等边(0)
	}
	else if (a == b || b == c || a == c) {
		type = 1;  //等腰(1)
	}
	else {
		type = 2; //一般
	}

}

int Triangle::over() {
	if (get_C == -1 || get_S == -1 || t == -1) {
		return -1;
	}
}


Triangle::~Triangle() {

}
