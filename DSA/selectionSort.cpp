#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
    for(auto e:arr)cout<<e<<' ';
    cout<<endl;
}