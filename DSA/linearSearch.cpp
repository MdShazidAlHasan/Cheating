#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    printf("Please enter the search key: ");
    int key;cin>>key;   
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found at "<<i<<endl;
            return 0;
        }
    }
    cout<<"Not Found"<<endl;
}