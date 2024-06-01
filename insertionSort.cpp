#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=1;i<n;i++){
        int value = arr[i];
        int idx = i-1;
        while(arr[idx]>value and idx>=0){
            arr[idx+1] = arr[idx];
            idx--;
        }
        arr[idx+1] = value;
    }
    for(auto e:arr)cout<<e<<' ';
    cout<<endl;
}