#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>v1;
   int num;
   cout<<"enter -1 to stop";
   while(1){
      cin>>num;
      if(num==-1) break;
      if(num%2==0) v1.push_back(num);
   }

   for(int var:v1){
      cout<<var<<" ";
   }


}
