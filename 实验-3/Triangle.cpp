#include "Triangle.h"
#include<iostream>
#include<cmath>  
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
#include"Triangle.h"
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
	fstream que;
	que.open("question.txt", ios::app);
	if (!que.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}

	int n = rand() % 9;

	if (n < 3) {
		que << "求周长 a=" << a << " b=" << b << " c=" << c << endl;
		cout << "求周长 a=" << a << " b=" << b << " c=" << c << endl;
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
		}
		que << "答案：" << Tri_C << "		输入：" << get_C << endl;
	}
	if (n < 6 && n >= 3) {
		que << "求面积 a=" << a << " b=" << b << " c=" << c << endl;
		cout << "求面积 a=" << a << " b=" << b << " c=" << c << endl;
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
		}
		que << "答案：" << fixed << setprecision(1) << Tri_S << "		输入：" << get_S << endl;
	}
	if (n < 9 && n >= 6) {
		que << "判断类型 a=" << a << " b=" << b << " c=" << c << endl;
		cout << "判断类型 a=" << a << " b=" << b << " c=" << c << endl;
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
		}
		que << "答案：" << type << "		输入：" << t << endl;
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


Triangle::~Triangle() {

}
