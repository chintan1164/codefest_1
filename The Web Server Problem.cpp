#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("TWSP_large.txt", "r", stdin);
    freopen("large_output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,temp;
    cin >> t;
    int a[t],b[t],c[t];

    for(int i=0;i<t;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
            if(a[i]>a[j] || (a[i]==a[j] && b[i]<b[j])){
                swap(a[i],a[j]);
                swap(b[i],b[j]);
                swap(c[i],c[j]);
            }
        }
    }

    for(int i=0;i<t;i++){
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }


    return 0;
}
