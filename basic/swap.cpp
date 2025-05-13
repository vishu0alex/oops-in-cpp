#include<iostream>//or directly use fn. swap in <algorithm>
using namespace std;
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
int main(){
    int a=1;
    int b=2;
    swap(a,b);
    cout<<a<<b;
}
//for c
#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 1;
    int b = 2;

    swap(&a, &b);  // pass addresses to allow modification
    printf("%d%d\n", a, b);  // prints: 21

    return 0;
}
