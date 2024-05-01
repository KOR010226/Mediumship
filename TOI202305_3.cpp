// Pick up
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char exist[123] = {0};
    string s;
    cin >> s;
    int d[500] = {0};
    int len = s.size();
    vector<int> v;
    v.push_back(0);
    
    for(int i = 1, j = 0; i <= s.size(); i ++, j ++){
      d[s[j]] = i;
      v.push_back(i);
    }
    
    for(int i = 1; i <= len ; i ++){
      for(int j = 65; j <= 122; j ++){
        if(v[i] == d[j]){
          d[j] = i;
          break;
        }
      }
    }
    
    vector<int> v2;
    
    for(int i = 65; i <= 122; i ++){
      if(d[i] > 0){
        v2.push_back(d[i]);    
      }
    }
    
    for(int i = 0 ;i < v2.size(); i ++){
      int min = 1;
      for(int j = 0;j < v2.size(); j ++){
        if(v2[i] > v2[j]){
          min ++;
        }
      }
      cout << min;
    }
    return 0;
}
