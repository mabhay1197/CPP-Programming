#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
     string lap;
     cin>>lap;
     int len=lap.length();
     string l=lap.substr(0, (len)/2);
     string r=lap.substr( (len+1)/2,(len-1));
    sort(l.begin(), l.end()); 
     sort(r.begin(), r.end()); 
     if (l.compare(r)==0)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
    }
    return 0;
    
}
