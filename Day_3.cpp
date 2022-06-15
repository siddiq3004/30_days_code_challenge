// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j;
    //  int j=0;
    int absolute_diff;
    cin>>n;
    int mat[n][n];
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           cin>>mat[i][j];
       }    
    }
    int d1=0;
    int d2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                d1=d1+mat[i][j];
                cout<<"d1 :"<<d1<<endl;
                
                
            }
        }
    }
    int x;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            x=i+j;
            cout<<"x:"<<x<<endl;
            if(x==n-1){
                d2=d2+mat[i][j];
                cout<<"d2 :"<<d2<<endl;
            }
        }
    }
    if(d1>d2){
        absolute_diff=d1-d2;
    }
    else{
        absolute_diff=d2-d1;
    }
    cout<<absolute_diff;
    return 0;
}
