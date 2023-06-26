#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ws(cin);
        string s;
        cin>>s;
        int n=s.size();
        cout<<"size: "<<n<<endl;
        int len=n/3+1;
        cout<<"len: "<<len<<endl;
        if(len<1){
            cout<<"len < 1 : "<<len<<endl;
            len=1;
        }
        string ans;
        while(len<=n/2){
            cout<<"len <= N/2 : "<<len<<endl;
            string tmp=s.substr(n-len,len);
            if(tmp==s.substr(n-2*len,len))
                ans=tmp;
                cout<<"ans tmp : "<<ans<<endl;
            len++;
        }
        for(int i=0;i<8;i++)
            cout<<ans[i%ans.size()];
        cout<<"..."<<endl;
    }
}
