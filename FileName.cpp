#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>  //三角形：等边（0） 等腰（1） 一般（2）
using namespace std;
double PI = 3.1415;

int f() {
	int n;
	cout << "输入难度(10/100/1000) ： ";
	cin >> n;
	return n;
}


class Tri {
	float Tri_S;
	float get_S;
	int a,b,c;
	int Tri_C;
	int type;
	int get_C;
	int sore;
	int IsTri(int a, int b, int c) {
		int n = 0;
		if (a + b > c && a + c > b && b + c > a) {
			n = 1;
		}
		return n;
	}
	void Ass(int& a, int& b, int& c) {
		int n = f();
		a = 0;
		b = 0;
		c = 0;
		while (!IsTri(a, b, c)) {
			a = rand() % n + 1;
			b = rand() % n + 1;
			c = rand() % n + 1;
		}
	}
	int C(int a, int b, int c) {
		return a + b + c;
	}
	float S(int a, int b, int c) {
		float n = (a + b + c) / 2.0;

		return sqrt(n * (n - a) * (n - b) * (n - c));
	}
	int Istype(int a, int b, int c) {
		if (a == b && b == c) {
			return 0; //等边(0)
		}
		if (a == b || b == c || a == c) {
			return 1; //等腰(1)
		}
		return 2;//一般
	}
	
};

class Rec {
	int Rec_S;
	int get_S;
	int edg_1, edg_2;
	int Rec_C;
	int type;
	int get_C;
	int sore;
	void Ass(int& a, int& b) {
		int n = f();
		a = rand() % n + 1;
		b = rand() % n + 1;
	}
	int C(int a, int b) {
		return (a + b) * 2;
	}
	int S(int a, int b) {
		return a * b;
	}
};

class Rou {
	float Rou_S;
	float Rou_C;
	float get_S;
	float get_C;

	void Ass(int& R) {
		int n = f();
		R = rand() % n + 1;
	}
	float C(int R) {
		return 2.0 * R * PI;
	}
	float S(int R) {
		return PI * R * R;
	}
};







int main() {
	srand(time(NULL));

	return 0;
}
