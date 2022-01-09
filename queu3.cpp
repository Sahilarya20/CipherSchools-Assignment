#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int check(vi &a){
    int n=a.size();
    if(a.empty())return 0;
    if(n==1)return a[0];
    int p=a[0];
    int q=max(p,a[1]);
    lp(i,2,n){
        int t=q;
        q=max(a[i]+p,q);
        p=t;
    }
    return q;
}

int main(){
    int n;
    cin>>n;
    vi a(n);
    lp(i,0,n)cin>>a[i];
    int ans=check(a);
    cout<<ans;
    return 0;
}   