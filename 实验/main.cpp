#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<string>
#include<algorithm>
#include"mode.h"
using namespace std;


bool clearFile(const string& path) {
	ofstream ofs(path, ios::trunc); 
	return static_cast<bool>(ofs);             
}


int main() {
	srand(time(NULL));
	mode x;
	cout << "输入0（做题-最后给答案）" << endl
		<< "输入1（做题-一题一给）" << endl
		<< "输入2（查看过往历史）" << endl
		<< "输入3（查看错题）" << endl
		<< "输入4（清空历史记录）" << endl
		<< "输入5（清空错题记录）" << endl
		<< "输入6（结束）" << endl;
	while (1) {
		int n;
		cout << "请选择功能：";
		cin >> n;
		if (n == 6) {
			break;
		}
		switch (n) {
			case 0:
				x.mode1();
				cout << endl << endl;
				continue;
			case 1:
				x.mode2();
				cout << endl << endl;
				continue;
			case 2:
				x.read1();
				cout << endl << endl;
				continue;
			case 3:
				x.read2();
				cout << endl << endl;
				continue;
			case 4:
				clearFile("question.txt");
				cout << "OK";
				cout << endl << endl;
				continue;
			case 5:
				clearFile("wrong.txt");
				cout << "OK";
				cout << endl << endl;
				continue;
		}
	}
	return 0;
}