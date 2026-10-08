#include<iostream>
#include<cmath>  
#include"Tri.h"
using namespace std;


Tri::Tri() {
}

Tri::Tri(int at,int bt,int ct) {
		a = at;
		b = bt;
		c = ct;
}
void Tri::C() {
	Tri_C=a + b + c;
	/*return Tri_C;*/
}

float Tri::S() {
	float n = (a + b + c) / 2.0;
	Tri_S = sqrt(n * (n - a) * (n - b) * (n - c));
	return Tri_S;
}

int Tri::Istype() {
	if (a == b && b == c) {
		return 0; //等边(0)
	}
	if (a == b || b == c || a == c) {
		return 1; //等腰(1)
	}
	return 2;//一般
}

void Tri::print() {
	//后面想
	cout << "S==" << Tri_S << endl;
	cout << "C==" << Tri_C << endl;
	
}

Tri::~Tri() {
}
