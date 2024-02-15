#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

void factorial(int n){
    int arr[n] ;
    for(int i =1 ;i<n;i++){
        int fact = 1;
        cin>>arr[i];
        int num = arr[i];
        while(num>0){
            fact *= num;
            num--;
            arr[i] = fact;
        }
    }
    for(int i =1 ;i<=n;i++){
        cout<<arr[i]<<endl;}
    
}

int main() {
    int n =4;
    factorial(n);
    return 0;
}
