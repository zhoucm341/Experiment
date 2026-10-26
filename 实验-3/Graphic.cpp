#include "Graphic.h"
#include"Triangle.h"
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

void Graphic::choose(char arr[]) {
	int n = rand() % 9;
	if (n < 3) {
		cout << "Èý½ÇÐÎ";
		Triangle T;
		T.question(arr);
	}

}






Graphic::~Graphic() {

}