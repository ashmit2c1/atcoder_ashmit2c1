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

bool isNumber(lint num,set<lint>&st){
    string s=to_string(num);
    forloop(0,s.size()){
        char a=s[i];
        if(st.count(a-'0')!=0){
            return false;
        }
    }
    return true;
}
lint solveFunction(set<lint>&st,lint n){
    lint ans=n;
    while(isNumber(ans,st)==false){
        ans++;
    }
    return ans;
}
void solution(){
    lint n;lint k;
    cin >> n >> k;
    set<lint>st;
    forloop(0,k){lint x;cin >> x;st.insert(x);}
    lint ans=solveFunction(st,n);
    print(ans)

}
int main(){

    solution();
}