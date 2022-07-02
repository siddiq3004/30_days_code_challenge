----------------------->>> Program for reversing an Array using pointers <<<---------------------------

#include <iostream>

using namespace std;

int main()
{
    //c++ Programs 
    int a=10 , b=20 ,  c=30 , size = 3;
    int *p[size] , *t;
    
    //here
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    
    for(int i=0 ; i<=size-1 ; i++){
        cout<<"element is "<<*p[i]<<endl;
    }
    cout<<endl<<"Now we wiwll Invert thee Array"<<endl;
    /*t = p[0];
    p[0] = p[2];              //Swapping of the elements of an array
    p[2] = t;*/
    
    
    for(int i = size-1 ; i>=0 ; i--){
        cout<<"The element is "<<*p[i]<<endl;
    }
    
    return 0;
}
