// reversal using stack

#include <iostream>


using namespace std;


int max_size=100,top=-1;
int A[100];


void push(char x){
    if(top>=max_size-1){
        cout<<"error : stack overflow"<<endl;
    }
    else{
        top++;
        A[top]=x;
    }
    
    
}


void pop(){
   if (top>=-1){
    while (top>=-1)
    {
        
   
        cout<<"the poped element is :"<<A[top]<<endl;
        
    }top--;
   }
   
    
}

void display() {
    if(top>=0) {
       cout<<"Stack elements are:";
       for(int i=top; i>=0; i--)
       cout<<A[i]<<" "<<endl;
       
   } else
       cout<<"Stack is empty"<<endl;
}


int main()
{
    int choice;
    char value;
   cout<<"1.push() opretation"<<endl;
   cout<<"2.pop() opretation"<<endl;
   cout<<"3.display Stack() opretation"<<endl;
   cout<<"4. exit() opretation"<<endl;
   
   do {
       cout<<"Enter choice: "<<endl;
       cin>>choice;
   switch(choice) {
       case 1: {
          cout<<"Enter value to be pushed:"<<endl;
          cin>>value;
          push(value);
          break;
       }
   
       case 2: {
           pop();
           break;
       }
       
       case 3:{
           cout<<"display the stack"<<endl;
           display();
           break;
           
       }
   
       default: {
           cout<<"Invalid Choice"<<endl;
       }
   }
 }while(choice<=3);
return 0;
}


