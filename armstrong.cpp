#include <iostream>
#include<stdio.h>
#include <string>
#include <algorithm>

using namespace std ; 

int main() {
    int n = 153,x,sum=0,original;
    original = n;
    ;
    while(original>0){
        x=original%10;
        sum += x*x*x;
        original/=10;
     }

    if(sum == n)
     cout<< "armstrong";
    else
     cout<<"Non - armstrong";

    return 0;
}
