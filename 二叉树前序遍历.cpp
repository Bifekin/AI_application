#include<bits/stdc++.h>
using namespace std;
void beford(string in, string after){
    if(in.size() > 0){
        char ch = after[after.size() - 1];
        cout << ch;
        int k = in.find(ch);
        cout<<"\nk:"<<k<<endl;
        beford(in.substr(0, k), after.substr(0, k));
        beford(in.substr(k + 1), after.substr(k, in.size() -k -1));
    }
}
int main(){
    string inord,aftord;
     cin >> inord; cin >> aftord;
     beford(inord, aftord); cout << endl;
     return 0;
}
//给出一棵二叉树的中序与后序排列。求出它的先序排列
