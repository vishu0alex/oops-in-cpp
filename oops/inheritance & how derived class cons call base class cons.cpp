#include<iostream>
#include<string>
using namespace std;
class teacher{
   public:
   string name;
   string subject;
   
   //parameterized constructor
   teacher(string name,string subject){
      this->name=name;
      this->subject=subject;
   }
};
class adddetails:public teacher{
   public:
   int mob;
    //pass remaing value to base class
   adddetails(string name,string subject,int mob):teacher(name,subject){
      this->mob=mob;
   }
   void info(){
      cout<<"name: "<<name<<endl<<"subject: "<<subject<<endl<<"mob: "<<mob<<endl;
   }
};

int main(){
   adddetails t1("vikas","cpp",76273627);
   t1.info();
}
