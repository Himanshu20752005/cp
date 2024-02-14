#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n =1000;
     string str = to_string(n);
     reverse(str.begin(),str.end());
     cout<<str;

    return 0;
}
