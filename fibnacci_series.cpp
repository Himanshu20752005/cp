#include <iostream>
#include<stdio.h>
#include <string>
#include <algorithm>

using namespace std ; 

int main() {
    
    int n;
    cin>>n; 
    int arr[100]={0,1,1};
    
    for(int i =0;i<=n;i++){
     int j = i+1;
     int k = j+1;
        arr[k] = arr[i] + arr[j];
        cout<<arr[i] << endl;
    }
    return 0;
}
