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

lint helperFunction(vector<lint>& arr,lint average,lint index, lint size, lint sum, vector<vector<vector<lint>>>& dp) {
    if (index == arr.size()) {
        return (size>0&&sum==average*size) ? 1 : 0;
    }
    if (dp[index][size][sum] != -1) {
        return dp[index][size][sum];
    }
    lint include=helperFunction(arr,average,index+1,size+1,sum+arr[index],dp);
    lint exclude = helperFunction(arr,average,index+1,size,sum,dp);
    dp[index][size][sum] = include + exclude;
    return include + exclude;
}
lint solveFunction(vector<lint>& arr, lint average) {
    lint n = arr.size();
    lint maxSum = average * n;
    vector<vector<vector<lint>>> dp(n + 1, vector<vector<lint>>(n + 1, vector<lint>(maxSum + 1, -1)));
    return helperFunction(arr, average, 0, 0, 0, dp);
}

/*lint helperFunction(vector<lint>&arr,lint average,lint sum,lint index,lint size){
    if(index==arr.size()){
        if(size > 0 && sum == size*average){
            return 1;
        }
        else{
            return 0;
        }
    }
    lint include = helperFunction(arr,average,sum+arr[index],index+1,size+1);
    lint exclude = helperFunction(arr,average,sum,index+1,size);
    return include+exclude;
}
lint solveFunction(vector<lint>&arr,lint average){
    lint ans=helperFunction(arr,average,0,0,0);
    return ans;
}*/

void solution(){
    lint n;lint average;
    cin >> n >> average;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(arr,average);
    print(ans)

}
int main(){

    solution();
}