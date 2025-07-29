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
        vector<int> even(26,0);
        vector<int> odd(26,0);
        bool flag=false;
        for(int i=0;i<l;i++){
            if(i&1){
                if(even[s[i]-97]==0){
                    odd[s[i]-97]+=1;
                }
                else{
                    flag=true;
                    break;
                }    
            }
            else{
                if(odd[s[i]-97]==0){
                    even[s[i]-97]+=1;
                }
                else{
                    flag=true;
                    break;
                }  

            }
        }
        if(flag)
         cout<<"NO"<<endl;
        else 
         cout<<"YES"<<endl;
    }
}