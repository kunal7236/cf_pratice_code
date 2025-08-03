#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int mindigit=9;
        while (x>0)
        {
            mindigit=min(mindigit,x%10);
            if(mindigit==0)
             break;
            x/=10;
        }
        cout<<mindigit<<endl;
    }
}