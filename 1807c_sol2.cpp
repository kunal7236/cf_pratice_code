#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin>>l;
        cin>>s;
        set<char> odd;
        set<char> even;
        for(int i=0;i<l;i++){
            if(i&1)
             odd.insert(s[i]);
            else
             even.insert(s[i]);
        }
        int insum=odd.size()+even.size();
        for(auto i:even){
            odd.insert(i);
        }
        if(insum==odd.size())
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }
}