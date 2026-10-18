#include<iostream>
#include<cmath>  
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
#include"Tri.h"
using namespace std;


Tri::Tri() {
	a = 0;
	b = 0;
	c = 0;
}

Tri::Tri(int at, int bt, int ct) {
	a = at;
	b = bt;
	c = ct;
}
void Tri::C() {
	Tri_C = a + b + c;
	/*return Tri_C;*/
}

void Tri::S() {
	float n = (a + b + c) / 2.0;
	Tri_S = sqrt(n * (n - a) * (n - b) * (n - c));
	/*return Tri_S;*/
}

void Tri::Istype() {
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

void Tri::question(char arr[]) {
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
		cout << "输入：" << endl;
		cin >> get_C;
		int x=snprintf(&arr[0], sizeof(arr), "%d", Tri_C);
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
		cout << "输入：" << endl;
		cin >> get_S;
		int x=snprintf(&arr[0], sizeof(arr), "%.2f", Tri_S);
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
		cout << "输入（0：等边，1：等腰，2：普通）：" << endl;
		cin >> t;
		int x=snprintf(&arr[0], sizeof(arr), "%d", t);
		arr[x + 1] = '\0';
		if (Tri_C == get_C) {
			arr[9] = 'V';
		}
		else {
			arr[9] = 'X';
		}
		que << "答案：" << type << "		输入：" << t << endl;
	}

	que.close();
}

void Tri::readFile()
{
	ifstream fin;
	fin.open("question.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	string line;
	int count = 0;
	while (getline(fin, line))
	{
		cout << line << endl;
		count++;
	}
	cout << "共读取 " << count / 2 << " 题" << endl;
	fin.close();
}

void Tri::readFile(int t)
{
	int n = 2 * t;
	ifstream fin;
	fin.open("question.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	string line;
	int count = 0;
	while (getline(fin, line) && count < n)
	{
		cout << line << endl;
		count++;
	}
	//cout << "本次输出 " << count << " 行" << endl;
	fin.close();
}










void Tri::print() {
	//后面想
	cout << "S==" << Tri_S << endl;
	cout << "C==" << Tri_C << endl;

}

Tri::~Tri() {
}
