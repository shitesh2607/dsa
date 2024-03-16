#include <bits/stdc++.h>
using namespace std;
// sr - source row
// sc = source coulumn
// dr - destination row
// dc  - destnation coulumn
vector<string> getMaze(int sr, int sc, int dr, int dc){
    if(sr==dr && sc==dc){
        vector<string> bres;
        bres.push_back(" ");
        return bres;
    }
    vector<string> hPaths;
    vector<string> vPaths;
    if(sc<dc){
        hPaths= getMaze(sr, sc+1, dr, dc);
    }
    if(sr<dr){
        vPaths= getMaze(sr+1, sc, dr, dc);
    }
    vector<string> paths;
    for(auto path:hPaths){
        paths.push_back("h"+path);
    }
    for(auto path:vPaths){
        paths.push_back("v"+path);
    }
    return paths;
}

int main()
{
    vector<string> ans;
    ans = getMaze(1,1,3,3);
    for(auto a: ans){
        cout<<a<<endl;
    }

    return 0;
}
