#include<iostream>
#include<vector>
#include<cstdio>
#define pb push_back
using namespace std;

int algo(int n, int step);

int main(){
    int T, n, step, i, ans;

    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d %d", &n, &step);
        ans = algo(n, step);
        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}

int algo(int n, int step){
    int j, count = 0, marker = -1, res;
    vector<int>arr;
    for(j=1; j<=n; j++)  arr.pb(j);

    while(!arr.empty()){
        count++;
        marker++;
        if(marker == arr.size())  marker = 0;
        if(count == step){
            count = 0;
            res = arr[marker];
            arr.erase(arr.begin()+marker);
            marker--;
        }
    }
    return res;
}
