// lonely integers problem

#include<bits/stdc++.h>
using namespace std;
int lonelyinteger(vector < int > a) {
int ans=0;
    vector<int> ::iterator it;
    for(it=a.begin();it!=a.end();it++)
        {
        ans^=(*it);
    }
    return ans;

}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
