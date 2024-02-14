#include <iostream>
#include<stdio.h>
#include <string>
#include <algorithm>

using namespace std ;
int main() {
    string input = "somthinggnihtmos";
    string str = input ; 
    reverse(str.begin(),str.end());
    if(str ==input)
    cout<<"true";
    else
    cout<<"false";

    return 0;
}
