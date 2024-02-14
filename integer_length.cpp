#include<stdio.h>
#include<iostream>
#include <cstring>
using namespace std;

int main(){
    int n = -122234;
    if(n<0){
        n=abs(n);
    }
    string str =to_string(n); 
    int length = str.length();
    cout<<length;
 
    return 0;
}
