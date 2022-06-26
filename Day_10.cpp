// linear searching using time complexity
#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
int arr[999999];
	int a,b;
void linear(int n,int m){
	int count=0;
	//clrscr();
	cout<<"\nThe elements in array are :";
	for(int i=0; i<a; i++){
		cout<<"\t"<<arr[i];
	}

	for(int i=0; i<n; i++){
		if(arr[i]==m){
			cout<<"The element is at index\t"<<i<<"\n";
			count =1;
		}
	}
	if(count==0){
		cout<<"\nThe element is not found.\n";
	}

}

int main(){

	//clrscr();
	cout<<"Enter the size of array:";
	cin>>a;
	for(int i=0; i<a; i++){
		arr[i]=rand();
	}

	cout<<"\n";
	cout<<"\nEnter element to search:";
	cin>>b;
	clock_t t;
	t = clock();
	linear(a,b);
	t = clock()-t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	cout<<"\nThe time taken for the program :"<<time_taken<<"s";
	//getch();
	return 0;
}
