#include <iostream>
#include <string>
 using namespace std;
 string DAYS[7] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
 enum days{
	 sun =1,mon,tue,wed,thur,fri,sat
 };
  class tnourji{
	  days d[7];
   public:
   void set(days D[7]){for(int i = 0 ; i < 7 ; i++){d[i] = D[i]; }}
	   void p(){ for(int i = 0 ; i < 7 ; i++){cout << "the day is: " << DAYS[i] << " and the number is: " << d[i] << endl;}}
   };
 int main(){
	tnourji tn;
	days xn[7] = {sun,mon,tue,wed,thur,fri,sat};
	tn.set(xn);
	tn.p();
	 return 0;
 }
