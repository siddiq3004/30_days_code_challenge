// STL practice
// vector
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<"   ";
        cout<<v.at(i)<<"  ";
    }
}

int main(){

vector<int> vec1;
vector<char> vec2;
vector<char>vec3(vec2);
vector<int> vec4(6,3);
 int size,element;
cout<<"enter the size of an element:";
cin>> size;
for(int i=0; i<size;i++){
    cout<<"enter the element to add in this vector:";
    cin>> element;
    vec1.push_back(element);
}
display(vec4);
cout<<endl;
vector<int> :: iterator iter = vec1.begin();
//vec1.insert(iter+1,100,566);
//display(vec1);
return 0;
}
