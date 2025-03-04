 #include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin>>arr[i];
     //  int n = permutation.size();
        int op = 0;
        int cs = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i]==i+1){
                cs++;
                
            }
            else{
                // op += floor(cs/2);
                if(cs%2==1) op += 1+ cs/2;
                else op += cs/2;
                cs = 0;
            }
        }
        if(cs>=0){
            if(cs%2==1) op += 1+ cs/2;
            else op += cs/2;
        }
        cout<<op<<endl;
  }
}
