#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;

void countSort(vector<int>& arr, int exp) {
    map<int, vector<int>> buckets;
    for (int num : arr) {
        int bucketIndex = (num / exp) % 10;
        buckets[bucketIndex].push_back(num);
    }
    int index = 0;
    for (auto& bucket : buckets) {
        for (int num : bucket.second) {
            arr[index++] = num;
        }
    }
}

void radixSort(vector<int>& arr) {
    int m = *max_element(all(arr));
    for (int exp = 1; m / exp > 0; exp *= 10) {
        countSort(arr, exp);
    }
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    radixSort(arr);
    for(auto e:arr)cout<<e<<' ';
    cout<<endl;
}