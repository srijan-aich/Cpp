#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Srijan";
    int len = s.length(); 
    cout << s[len-1] << endl; 
    s[len-1] = 'z';
    cout << s[len-1] << endl;

    return 0;

} 