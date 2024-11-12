// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8. We stop at this point because we are left with one digit.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int sum=0;
    int sum1=0;
    while(n!=0){
        int a=n%10;
        sum=sum+ a;
        n=n/10;
        }
    while (sum>9)
    {
     int sum1=0;
    while (sum!=0)
    {
        int b=sum%10;
        sum1=sum1+b;
        sum=sum/10;
    }
     sum=sum1;
    }

   
    cout << sum;
}