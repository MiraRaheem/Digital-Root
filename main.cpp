//to get the digitalroot of a number
//by RECURSION
//number 8

#include <iostream>

using namespace std;



//get the sum of all thr integrs EX: 1729 ...1+7+2+9+=19


int digitalroot(int x){

if(x<10)return x;
x=x%10+digitalroot(x/10);
return x<10? x:digitalroot(x);
}


int main()
{
    int n=1729;


    cout<<digitalroot(n);
}

