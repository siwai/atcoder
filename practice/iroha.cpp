#include <bits/stdc++.h>
using namespace std;
long long n,ans,sum,k=1;
long long f(long long a){
    int s=0;
    while(a)s+=a%10,a/=10;
    return s;
}
main(){
    cin>>n;
    sum=f(n);
    while(1){
        if(sum<10){
            ans+=k*sum;
            break;
        }
        else ans+=k*9,sum-=9;
        k*=10;
    }
    if(ans==n && sum==9)ans+=9*k;
    else if(ans==n && n/10)ans+=9*k/10;
    else if(ans==n)ans+=9;
    cout<<ans<<endl;
}
