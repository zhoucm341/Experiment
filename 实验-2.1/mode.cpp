#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<array>
#include "mode.h"
#include"Tri.h"
using namespace std;


int IsTri(int a, int b, int c) {
	int n = 0;
	if (a + b > c && a + c > b && b + c > a) {
		n = 1;
	}
	return n;
}

mode::mode() {

}

void mode::mode1() { //全部
	int n;
	cout << "题目数量：" << endl;
	cin >> n;
	char arr[100000][10] = { "NULL" };
	/*const int COLS = 2;
	vector<array<char, COLS>>arr(n);*/
	
	for (int i = 0;i < n;i++) {
		int a, b, c;
		do {
			a = rand() % 10 + 1;
			b = rand() % 10 + 1;
			c = rand() % 10 + 1;
		} while (!IsTri(a, b, c));
		Tri x(a, b, c);
		x.question(arr[i]);
	}
	for (int i = 0;i < n;i++) {
		cout << "第" << i + 1 << "题答案：" << arr[i] << "        " << arr[i][9] << endl;
	}
}

void mode::mode2() { //全部
	int n=0;
	
	char arr[10] = { "0" };
	/*const int COLS = 2;
	vector<array<char, COLS>>arr(n);*/
	int a, b, c;
	do {
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		c = rand() % 10 + 1;
	} while (!IsTri(a, b, c));
	Tri x(a, b, c);
	x.question(arr);
	cout << "答案：" << arr << "        " << arr[9] << endl;
	
}


mode::~mode() {

}