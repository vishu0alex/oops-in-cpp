#include<iostream>
#include<algorithm>
using namespace std;
int add(int &x,int &y){
   return x+y;

}

int main(){
   int x,y;
   cout<<"enter no "<<endl;
   cin>>x>>y;
   swap(x,y);
   cout<<"x="<<x<<" y= "<<y<<endl;

   int res=add(x,y);
   cout<<res<<"\n";

   cout<<add(x,y);//printf("%d",add());
}
