#include<iostream>
#include<string>
using namespace std;
class teacher{
   public:
   string name;
   string subject;
   int mob;
   //default cons...
   teacher(){
      cout<<"this is custom default constructor";
   }
   //parameterized constructor
   teacher(string name,string subject){
      this->name=name;
      this->subject=subject;
   }
   
   void info(){
      cout<<"name: "<<name<<endl<<"subject: "<<subject<<endl;
   }
   //custom copy constructor
   teacher(teacher &newobj){
      cout<<"custom copy contructor called....\n";
         this->name=newobj.name;
         this->subject=newobj.subject;
   }

};

int main(){
   teacher t1("vikas","cpp");
   t1.info();
   teacher t2(t1);
   t2.info();
   teacher t3=t1;
   t3.info();
   teacher t4;
   
}
