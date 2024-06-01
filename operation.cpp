#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    int n, m;cin>>n>>m;
    int a[n][m], b[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    printf("ADDITION: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]+b[i][j]<<' ';
        }
        cout<<endl;
    }
    printf("Subtraction: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]-b[i][j]<<' ';
        }
        cout<<endl;
    }
    printf("Multiplication: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int res = 0;
            for(int k=0;k<m;k++){
                res+= a[i][k]*b[k][j];
            }
            cout<<res<<' ';
        }
        cout<<endl;
    }


}