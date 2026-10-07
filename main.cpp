#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath> 
#include"Tri.h"
using namespace std;


int IsTri(int a, int b, int c) {
	int n = 0;
	if (a + b > c && a + c > b && b + c > a) {
		n = 1;
	}
	return n;
}

int main() {
	Tri n;
	srand(time(NULL));
abc:
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	int c = rand() % 10 + 1;
	if (!IsTri(a, b, c)) {
		goto abc;
	}
	Tri(a, b, c);
	
	
	return 0;
}