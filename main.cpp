#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath> 
#include<fstream>
#include<string>
#include"Tri.h"
using namespace std;


int IsTri(int a, int b, int c) {
	int n = 0;
	if (a + b > c && a + c > b && b + c > a) {
		n = 1;
	}
	return n;
}

void question(Tri x) {
	fstream que;
	que.open("question.txt", ios::out);

	int n = 0/*rand() / 9*/;
	if (n < 4) {
		que << "求周长 a=" << x.a << " b=" << x.b << " c=" << x.c << endl;
		cout << "求周长 a=" << x.a << " b=" << x.b << " c=" << x.c << endl;
		x.C();
		int C;
		cout << "输入：" << endl;
		cin >> C;
		que << "答案：" << x.Tri_C << "		输入：" << C << endl;
	}
	que.close();
}


int main() {
	srand(time(NULL));
abc:
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	int c = rand() % 10 + 1;
	if (!IsTri(a, b, c)) {
		goto abc;
	}
	Tri x(a,b,c);
	question(x);
















	return 0;
}