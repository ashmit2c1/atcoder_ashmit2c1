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


char solveFunction(string SA, string SB, string SC) {
    queue<char> aliceDeck, bobDeck, charlieDeck;
    for (char card : SA) aliceDeck.push(card);
    for (char card : SB) bobDeck.push(card);
    for (char card : SC) charlieDeck.push(card);

    char currentPlayer = 'a';

    while (true) {
        if (currentPlayer == 'a') {
            if (aliceDeck.empty()) return 'A';
            currentPlayer = aliceDeck.front();
            aliceDeck.pop();
        }
        else if (currentPlayer == 'b') {
            if (bobDeck.empty()) return 'B';
            currentPlayer = bobDeck.front();
            bobDeck.pop();
        }
        else if (currentPlayer == 'c') {
            if (charlieDeck.empty()) return 'C';
            currentPlayer = charlieDeck.front();
            charlieDeck.pop();
        }
    }
}
void solution(){
    string a;string b;string c;
    cin >> a >> b >> c;
    char ans=solveFunction(a,b,c);
    print(ans)
}
int main(){

    solution();
}