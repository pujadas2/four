#include<iostream>
using namespace std;

int main() {
    int t,n,i,sum;
    cin>>t;
    while(t--){
        cin>>n;
        while(n!=0){
            i=n%10;
            n=n/10;
            if(i==4){
            sum=sum+1;
                i=0;
            }
       }
       cout<<sum<<endl;
       sum=0;
    }
	return 0;
}
