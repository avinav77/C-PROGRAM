#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout<<"enter n";
    cin>>n;
    int ans;
    int i=0;
    while(n!=0){
        int a=n%2;
        ans=a&1;
        n=n/2;
        ans=ans<<1;
    }
    cout<<ans;
}