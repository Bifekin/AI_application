#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string s[21];
int n;
bool cmp(const string &a, const string &b){
    return a + b > b + a;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> s[i];
    sort(s + 1, s + n + 1, cmp);
    for(int i = 1; i <= n; i++) cout << s[i];
    return 0;
}
/*设有 nn 个正整数 a1…ana1​…an​，将它们联接成一排，相邻数字首尾相接，组成一个最大的整数*/