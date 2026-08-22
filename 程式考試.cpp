#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,s=0,max_=INT_MIN,min_=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b>max_){
            min_=a;
            if(a<min_)min_=a;
            max_=b;
        }
        if(b==-1)r++;
        s=max_-n-(r*2);
        if(s<=0)s=0;
    }
    cout<<s<<" "<<min_<<endl;
    return 0;
}
