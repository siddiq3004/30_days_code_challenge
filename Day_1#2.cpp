// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
//   Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include <iostream>
using namespace std;
int main(){
    int n,i;
    long min,max;
    long sum=0;
    long array[5];
    for(i=0;i<5;i++){
    cin>>array[i];
    }
    min = array[0];
    max = array[0];
    for(i=0;i<5;i++){
        if(min<=array[i]){
        min;
        }
        else{
            min=array[i];
        }
        
    }
    for(i=0;i<5;i++){
        if(max>=array[i]){
         max;
        }    
        else{
            max=array[i];
        }
        
    }
    for(int k=0;k<5;k++){
        sum+=array[k];
    }
 
    cout<<sum-max<<" ";
    cout<<sum-min;
    
}
