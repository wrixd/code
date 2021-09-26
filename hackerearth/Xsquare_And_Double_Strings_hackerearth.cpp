#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin >> t;
       while (t--) {
       string s;

cin >> s;

string ans = "No";

map < char, int > mp;

for (int i = 0; i < s.size(); i++) {

mp[s[i]]++;

}

for (auto x: mp) {

if (x.second>=2) {

ans = "Yes";

break;

}

}

cout << ans << endl;

}

return 0;

}