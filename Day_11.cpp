// Binary searching problem
#include <iostream>
#include <stdlib.h>
using namespace std;
int array[9999];
int n,i,j,k;
int first = 0,last = n;
int mid =(first+last)/2;
void binarysearch(int x,int n){
    if(x>array[mid]){
        first= mid+1;
    }
    else if(x<array[mid]){
        last=mid-1;
    }
    if(x==array[mid]){
         mid;
    }
        cout<<"the index of the given number :"<<mid;
}

int main(){
    int x;
    cout<<"enter the size of the array:";
    cin>>n;
    for(i=0;i<n;i++){
        array[i]= rand();
    }
    for(j=0;j<n-1;j++){
        for(k=0;k<n-j-1;k++){
            if(array[k]>array[k+1]){
                int temp = array[k];
                array[k]= array[k+1];
                array[k+1]=temp;
            }
        }
    }
    cout<<"the elements in array are :";
    for(i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }
    cout<<"\n enter the element to search:";
    cin>>x;
    binarysearch(x,n);
    return 0;

}
