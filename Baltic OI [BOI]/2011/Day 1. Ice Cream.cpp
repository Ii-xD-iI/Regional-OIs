using namespace std;
#include "bits/stdc++.h"

int32_t main() { cin.tie(nullptr)->sync_with_stdio(false);

   int n, m; 
   cin >> n >> m; 
   if(n < 3) {cout << 0 << '\n';return 0;}

   vector<vector<int>> v(207, vector<int> (207));

   for(int a,b,i {}; i < m; ++i) {
      cin >> a >> b;
      v[a][b] = v[b][a] = true;
   }
   long long res{};
   
   for(int i=1; i <= n-2; ++i) 
      for(int j = i+1; j <=n-1; ++j) 
         for(int k = j+1; k <= n; ++k) 
            if((not v[i][j]) and (not v[j][k]) and (not v[i][k])) ++res;

   cout << res;
}
/*
6/28/2021
*/
