//if values are multiple of 3 and 5 then print FizzBuzz ,if value is multiple of 3 but not 5 then print Fizz only ,
//if value is only multiple of 5 but not 3 then print Buzz as output , otherwise print original values....
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int val;
    cin>>val;
    vector<int> array;
    int i=0;
    for(i=1;i<=val;i++){
        array.push_back(i);
    }
    
    int size = array.size();
    for(int i=0;i<size;i++){
        if(array[i]%3==0&&array[i]%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(array[i]%3==0&&array[i]%5!=0){
            cout<<"Fizz"<<endl;
        }
        else if(array[i]%3!=0&&array[i]%5==0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<array[i]<<endl;
        }
    }
    return 0;
}

