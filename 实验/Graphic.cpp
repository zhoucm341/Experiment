#include "Graphic.h"
#include "Triangle.h"
#include "Round.h"
#include "Square.h"
#include<cstdlib>
#include<iostream>
using namespace std;


Graphic::Graphic() {

}

void Graphic::C(){

}

void Graphic::S() {

}

void Graphic::question(char arr[]) {

}

int Graphic::choose(char arr[]) {
	int n = rand() % 9;
	if (n < 3) {
		Triangle T;
		T.question(arr);
		if (T.over() == -1) {
			return -1;
		}
	}
	if (n < 6 && n >= 3) {
		Round R;
		R.question(arr);
		if (R.over() == -1) {
			return -1;
		}
	}
	if (n < 9 && n >= 6) {
		Square S;
		S.question(arr);
		if (S.over() == -1) {
			return -1;
		}
	}
}

Graphic::~Graphic() {

}