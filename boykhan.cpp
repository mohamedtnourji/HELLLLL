#include <iostream>
#include <algorithm>
#include <cstring>
 using namespace std;
  class tnourji{
	private:
	int width,height;
	public:
	 void change_value(int ,int );
	 int area();
	 tnourji moha(tnourji ob);
   };
     void tnourji::change_value(int x,int y){
	   width = x;
       height = y;	   
   }
   
   int tnourji::area(){
	   return width * height;
   }
   
   	tnourji tnourji::moha(tnourji ob){
		tnourji tn;
		tn.width = ob.width * 2;
		tn.height = ob.height * 2;
		return tn;
	}
	
 int main(){
	tnourji vari,xml;
	vari.change_value(3,2);
	cout << vari.area() << endl;
	xml =  tnourji(vari);
	std::cout << xml.area() << std::endl;
	 return 0;
 }