#include "mode.h"
#include"Graphic.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<array>
using namespace std;







mode::mode() {

}

void mode::mode1() { //全部
	int n;
	cout << "题目数量：" << endl;
	cin >> n;
	char arr[100000][10] = { "NULL" };
	//const int COLS = 2;
	//vector<array<char, COLS>>arr(n);

	for (int i = 0;i < n;i++) {
		Graphic x;
		x.choose(arr[i]);
	}
	for (int i = 0;i < n;i++) {
		cout << "第" << i + 1 << "题答案：" << arr[i] << "        " << arr[i][9] << endl;
	}
}

void mode::mode2() { //全部
	int n = 0;

	char arr[10] = { "0" };
	//const int COLS = 2;
	//vector<array<char, COLS>>arr(n);
	Graphic x;
	x.choose(arr);
	cout << "答案：" << arr << "        " << arr[9] << endl;

}


mode::~mode() {

}