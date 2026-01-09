#include<iostream>

#define testCase int t; cin>>t; for(int tc=1; tc<=t; tc++)

using namespace std;

void solve(){
    int a;
    cin>>a;
    cout<<a<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testCase{
        cout<<"Case "<<tc<<": ";
        solve();
    }
    return 0;
}