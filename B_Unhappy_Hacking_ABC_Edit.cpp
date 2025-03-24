#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)

string solveFunction(string s){
    vector<char>character;
    forloop(0,s.size()){
        if(s[i]=='B' && character.size()==0){continue;}
        if(s[i]!='B'){character.push_back(s[i]);}
        if(s[i]=='B'){character.pop_back();}
    }
    string ans="";
    forloop(0,character.size()){
        ans+=character[i];
    }
    return ans;

}
void solution(){
    string s;cin >> s;
    string ans=solveFunction(s);
    print(ans)

}
int main(){

    solution();
}