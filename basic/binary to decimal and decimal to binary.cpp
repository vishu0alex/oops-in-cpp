#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int x;
   cout<<"enter no :"<<endl;
   cin>>x;
   int res=0,bit,i=0;
   while(x){
      bit=x%10;
      res+=bit*pow(2,i++);//res+=(x%10)<<i++;
      x/=10;
   }
   cout<<res;
}



#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter no :"<<endl;
   cin>>x;
   int revstore[32],i=0;
   while(x){
      revstore[i++]=x%2;        // cout << "Binary of " << x << " is: " << bitset<32>(x) << endl; in <bitset> library
      x/=2;
   }
   for(int j=i-1;j>=0;j--){
      cout<<revstore[j];
   }
}
