// day-4
//Given a list of integers, count and return the number of times each value appears as an array of integers.

#include <bits/stdc++.h>
using namespace std;
int i,j;
int val;
void countingSort(int array[],int size){
    int countArray[size];
    for(i=0;i<size;i++){
        countArray[i]=array[i];
    }
    memset(countArray,0,sizeof(countArray));
    
    for(i=0;i<size;i++){
        val=array[i];
        for(j=0;j<size;j++){
            if(val==j){
                countArray[j]++;
            }
        }
    }
   for(i=0;i<100;i++){
       cout<<countArray[i]<<" ";
   }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int items;
    cin>>items;
    int array[items];
    
    for(i=0;i<items;i++){
        cin>>array[i];
    }
    countingSort(array,items);
    return 0;
}
