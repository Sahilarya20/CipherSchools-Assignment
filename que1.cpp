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

 int que_one(vector<int>& nums) {
        int n=nums.size();
        int i=0;
    while(i<n){
        int correct=nums[i];
        if(nums[i]<n and nums[i]!=nums[correct]){
            int temp=nums[i];
            nums[i]=nums[correct];
            nums[correct]=temp ;

        }
        else i++;
    }
        for(int index=0;index<n;index++){
            if(nums[index]!=index)return index;
        }
        return n;
    }

int main(){
    int n;
    cin>>n;
    vi a(n);
    lp(i,0,n)cin>>a[i];
    int ans=que_one(a);
    cout<<"Missiong no is: "<<ans;
    return 0;
}