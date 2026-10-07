#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>  
using namespace std;



class Tri {
private
	float Tri_S;
	int a, b, c;
	int Tri_C;
	int type;
	int sore;
public
	Tri(at, bt, ct) {
		a = at;
		b = bt;
		c = ct;
	}
	~Tri;
	float get_S;
	int get_C;
	
	
	void C(int a, int b, int c) {
		Tri_C = a + b + c;
	}
	void S(int a, int b, int c) {
		float n = (a + b + c) / 2.0;

		Tri_S = sqrt(n * (n - a) * (n - b) * (n - c));
	}
	void Istype(int a, int b, int c) {
		if (a == b && b == c) {
			type = 0;//µÈ±ß(0)
		}
		if (a == b || b == c || a == c) {
			type = 1; //µÈÑü(1)
		}
		type = 2;//Ò»°ã
	}
	void print() {
		
	}
};

int IsTri(int a, int b, int c) {
	int n = 0;
	if (a + b > c && a + c > b && b + c > a) {
		n = 1;
	}
	return n;
}

int main() {
	srand(time(NULL));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	c = rand() % 10 + 1;
	if (IsTri) {
		Tri(a, b, c);
	}
	~Tri;
	return 0;
}
