#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,max_=INT_MIN,r=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int w;
        cin>>w;
        if(w>max_)max_=w;
        r=r+w;
    }
    int A=(r-max_)/m;
    int B=(r-max_)%m;
    if(B*2>m)B=m-B;
    cout<<max_<<" "<<A<<" "<<B<<endl;
    return 0;
}
