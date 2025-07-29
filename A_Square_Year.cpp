#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char last=s.back();
        if(last=='2' || last=='3' || last =='7' || last=='8'){
            l1:
            cout<<-1<<endl;
            continue;
        }
        int n=stoi(s);
        bool flag=true;
        int i;
        for(i=0;i*i<=n;i++){
            if(i*i==n){
                flag=false;
                break;
            }
        }
        if(flag)
         goto l1;
        cout<<0<<" "<<i<<endl;
    }
    return 0;
}