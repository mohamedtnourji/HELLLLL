#include <iostream>
#include <cstring>
#include "class_practice.cpp"
using namespace std;

 tnourji operator+(int num, tnourji tn) {
	tnourji tn3;
	tn3.x = num + tn.x;
	tn3.y = num + tn.y;
	return tn3;
}
 tnourji operator+(tnourji tn, int n) {
	 tnourji tn3;
	 tn3.x = tn.x + n;
	 tn3.y = tn.y + n;
	 return tn3;
 }

int main() {
	tnourji tn1(10,10), tn2(20,20),tn3;
	tn3 = 20 + tn1;
	tn3.print();
	tn3 = tn1.operator+(tn2);
	tn3.print(); 
	tn3 = tn1 + 100;
	tn3.print();


	return 0;
}