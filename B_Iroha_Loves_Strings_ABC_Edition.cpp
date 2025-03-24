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

string solveFunction(vector<string>&arr){
    sort(arr.begin(),arr.end());
    string ans="";
    forloop(0,arr.size()){
        ans+=arr[i];
    }
    return ans;
}
void solution(){
    lint n;lint l;
    cin >> n >> l;
    vector<string>arr;
    forloop(0,n){
        string x;cin >> x;arr.push_back(x);
    }
    string ans=solveFunction(arr);
    print(ans)
}
int main(){

    solution();
}