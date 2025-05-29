#include<iostream>
using namespace std;
class overload{
   public:
   int a;
   overload(int a){
      this->a=a;
   }
   int operator ++(){
      return a*=2;
   }
   void show(){
      cout<<a;
   }

};
int main(){
   int a=5;
   overload o1(a);
   ++o1;
   o1.show();
   
}
