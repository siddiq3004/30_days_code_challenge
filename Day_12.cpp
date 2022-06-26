// left rotation of array
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int array[n];
    // cout<<"Enter elements in array :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int temp;
    for(int i=0;i<d;i++){
        temp=array[0];
        for(int j=0;j<n-1;j++){
            array[j]=array[j+1];
        }
        // cout<<"\ntemp :"<<temp;
        array[n-1]=temp;
    }
    // cout<<"\nAfter rotation :";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
