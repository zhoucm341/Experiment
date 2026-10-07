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
void Tri::C(int a, int b, int c) {
	Tri_C=a + b + c;
}

float Tri::S(int a, int b, int c) {
	float n = (a + b + c) / 2.0;
	return sqrt(n * (n - a) * (n - b) * (n - c));
}

int Tri::Istype(int a, int b, int c) {
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
}

Tri::~Tri() {
}
