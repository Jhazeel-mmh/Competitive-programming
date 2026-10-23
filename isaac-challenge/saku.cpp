#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    
    cin >> t;
    while (t--){

        int a = 0;
    int b = 0;
    cin >> a >> b;
        if(b==0){
        if(a%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }else{
        b = b-(a / b);
        a = a%b;
        if(b>0){
            if(a==1){
                cout<<"NO" << endl;
            }else{
                if(b%2==0){
                    cout<<"NO" << endl;
                }else{
                    cout<<"YES" << endl;
                }
            }
        }else{
            a = (b*(-2) + a);
            if(a%2){
                cout<<"YES" << endl;
            }else{
                cout<<"NO" << endl;
            }
        }
    }
    }

    

}