#include "mode.h"
#include"Graphic.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;


bool deleteLastLines(const string& path, int n) {
	ifstream ifs(path);
	if (!ifs) return false;

	vector<string> lines;
	string line;
	while (getline(ifs, line))
		lines.push_back(line);
	ifs.close();

	lines.resize(lines.size() - n);

	ofstream ofs(path, ios::trunc);
	if (!ofs) return false;
	for (int i = 0; i < lines.size(); ++i) {
		ofs << lines[i];
		if (i + 1 < lines.size()) {
			ofs << '\n';
		}
	}
	return true;
}



mode::mode() {

}

void mode::mode1() { //全部
	int n;
	cout << "题目数量：" << endl;
	cin >> n;
	vector<array<char, 10>>arr(n);

	for (int i = 0;i < n;i++) {
		cout << i + 1 << "：";
		Graphic x;
		x.choose(&arr[i][0]);
	}
	for (int i = 0;i < n;i++) {
		cout << "第" << i + 1 << "题答案：";
		for (int j = 0;j < 10;j++) {
			if (arr[i][j] == 0) {
				cout << " ";
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}
}

void mode::mode2() {//单独
	while (1) {
		int n = 0;
		char arr[10] = { 0 };
		Graphic x;
		int k = x.choose(arr);
		if (k == -1) {
			deleteLastLines("question.txt", 3);
			if (arr[9] == 'X') {
				deleteLastLines("wrong.txt", 3);
			}
			break;
		}
		for (int i = 0;i < 10;i++) {
			if (arr[i] == 0) {
				cout << " ";
			}
			else {
				cout << arr[i];
			}
		}
		cout << endl;
	}
	
}

void mode::read1() {
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
	/*cout << "共读取 " << count / 3 << " 题" << endl;*/
	fin.close();
}

void mode::read2() {
	ifstream fin;
	fin.open("wrong.txt", ios::in);
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
	/*cout << "共读取 " << count / 3 << " 题" << endl;*/
	fin.close();
}

mode::~mode() {

}