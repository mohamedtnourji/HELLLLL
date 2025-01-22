#include <iostream>
#include <algorithm>
#include <cstring>
 using namespace std;
 string DAYS[7] = {"sunday","monday","tuesday","wdnesday","thursday","friday","saturday"};
 enum days{
	 sunday = 1,monday,tuesday,wdnesday,thursday,friday,saturday
 };
  class tnourji{
private:
	  
   public:
   days d[7];
   void set_day(days D[7]){
	   for(int i = 0 ; i < 7 ; i++){
		   d[i] = D[i];
	   }
   }
	   void print(){
		   for(int i = 0 ; i < 7 ; i++){
			   cout << "the day is: " << DAYS[i] << " and the number is: " << d[i] << endl;
		   }
	   }
   };
 int main(){
	tnourji tn;
	days xn[7] = { sunday,monday,tuesday,wdnesday,thursday,friday,saturday};
	tn.set_day(xn);
	tn.print();
	 return 0;
 }