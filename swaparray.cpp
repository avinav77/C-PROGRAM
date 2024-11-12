//  You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list. You don't need to print or return anything, just change in the input array itself.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6};
    int n=arr.size();
    for (int i = 0; i < n-1; i++)
    {
       swap(arr[i],arr[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] <<" ";
    }
    
}