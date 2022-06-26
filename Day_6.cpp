// string pattren matching
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;

    int count =0;
    int pres=0;
    n=10;
    char str_1[]="AACABACABA";
    char str_2[3];
    for( i=0;i<3;i++){
        cin>>str_2[i];
    }
    for(i=0;i<n-2;i++){
        int k=i;
        for(j=0;j<3;j++){

            if(str_1[k]==str_2[j]){
                k++;
                count++;
                if(count==3){
                    cout<<"the given string pattren matches at index "<<i<<endl;
                    count=0;
                    pres=1;
                }

            }
            else{
                count=0;
                break;
            }
       }
    }
    if(pres==0){
        cout<<"****THE GIVEN STRING PATTREN DOES'NT MATCHES THE ORIGINAL ONE****";
    }
    return 0;
}
