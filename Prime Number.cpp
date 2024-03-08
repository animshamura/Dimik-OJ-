#include<bits/stdc++.h>
using namespace std;
int prime(int x){
    for(int i=2; i<=sqrt(x); i++) if(x%i==0) return 0;
    return 1;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int cnt=0;
        while(a<=b){
            if(a>1)  cnt+=prime(a);
            a++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
