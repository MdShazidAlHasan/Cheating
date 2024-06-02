#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr, arr+n);
    printf("Please enter the search key: ");
    int key;cin>>key;
    int lo = 0, hi = n-1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key){
            printf("The element is found at %d", mid);
            return 0;
        }else if(arr[mid]>key){
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    printf("The element is not found");
    
}