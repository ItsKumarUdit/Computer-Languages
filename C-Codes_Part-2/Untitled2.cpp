 // Updating A

#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
 int darkling0;
 cin >> darkling0;
 while (darkling0--)
 {
 int darkling1;
 cin>>darkling1;
 int darkling2[darkling1];
 for(int darkling3=0;darkling3<darkling1;darkling3++)
 {
 cin>>darkling2[darkling3];
 }
 multiset<int> darkling4;
 int darkling5=0;
 for(int darkling6=0;darkling6<darkling1;darkling6++)
 {
 darkling5+=darkling2[darkling6];
 darkling4.insert(darkling5);
 }
 int darkling7=LLONG_MAX;
 darkling5=0;
 for(int darkling6=0;darkling6<darkling1-1;darkling6++)
 {
 darkling5+=darkling2[darkling6];
 auto darkling8 = darkling4.find(darkling5);
 darkling4.erase(darkling8);
 int darkling9=*(darkling4.begin());
 if(darkling6!=0)
 {
 darkling9-=darkling5;
 darkling9+=darkling2[darkling6];
 }

 darkling7=min(darkling7,darkling9);
 }
 darkling5+=darkling2[darkling1-1];
 cout<<darkling5-darkling7+abs(darkling7)<<endl;

 }
}
