#pragma once
#include <iostream>
#include <string>

using namespace std;

class tnourji
{
private:
	int x, y;
public:
	tnourji(int c = 0,int j = 0) {
		x = c;
		y = j;
	}
	friend tnourji operator+(int num, tnourji tn);

	tnourji operator+(tnourji tn3) {
		tnourji tn;
		tn.x = x + tn3.x;
		tn.y = y + tn3.y;
		return tn;
	}
	friend tnourji operator+(tnourji tn, int n);
	void print() { 
		cout << "x : " << x << " " << "y: " << y << endl;
	}
};