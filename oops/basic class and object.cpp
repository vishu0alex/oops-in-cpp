#include<iostream>
#include<string>
using namespace std;
class teacher{
   public:
   string name;
   string subject;
   int mob;

   void changesubject(string subject){
      this->subject=subject;
   };

   private:
   double salary;
};

int main(){
   teacher t1;
   t1.name="vikas";
   t1.subject="cpp";
   t1.mob=712827817;
   cout<<t1.name<<endl<<t1.subject<<endl<<t1.mob<<endl;
   t1.changesubject("java");
   cout<<t1.subject;
}
