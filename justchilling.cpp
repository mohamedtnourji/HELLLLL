#include<iostream>

using namespace std;

class tnourji{
     int *height,*width;
public:
     tnourji(int ,int);
int area(){
     return *height * *width;
}
      ~tnourji();
};

tnourji::tnourji(int x,int y){
    height = new int(x);
    width = new int(y);
}
tnourji::~tnourji(){
   delete height;
   delete width;
}

int main(){
   tnourji tn(10,20),tn1(40,27);
   cout << tn.area() << endl;
   cout << tn1.area() << endl;
return 0;
}