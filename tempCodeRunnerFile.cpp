#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> inTime; vector<int> out;
vector<int> parent;
int timer;

vector<int> values;

void dfs( int i, int p)
{
    parent[i] = p;
    inTime[i] = timer++;
    int k = i;
    for( auto it : v[i])
    {
        if( it != p)
        {
            dfs(it, i);
            k = k ^ values[it];
        }
    }
    out[i] = timer++;
    values[i] = k;
}

bool isAncestor( int a, int b)
{
    if( inTime[a] < inTime[b] && out[a] > out[b])
    return true;
    else 
    return false;
}



int solve (int N, vector<vector<int> > edges) {
   // Write your code here

    v.clear();
    inTime.clear();
    out.clear();
    values.clear();
    parent.clear();
    timer = 0;

    v.resize(N+1);
    inTime.resize(N+1);
    out.resize(N+1);
    values.resize(N+1);
    parent.resize(N+1);

    for( auto it : edges)
    {
        v[it[0]].push_back(it[1]);
        v[it[1]].push_back(it[0]);
    }
    

    dfs(1, 0);

    int ans = 1e9+7;

    int n1 = edges.size();
    for( int i=0; i<n1; i++)
    {
        for( int j=i+1; j<n1; j++)
        {
            int cut1, cut2;
            int a1 = edges[i][0]; int b1 = edges[i][1];
            if( parent[a1] == b1)
                cut1 = a1;
            else 
                cut1 = b1;

            a1 = edges[j][0]; b1 = edges[j][1];
            if( parent[a1] == b1)
                cut2 = a1;
            else 
                cut2 = b1;

            int ans1, ans2,ans3;

            if( isAncestor( cut1,cut2))
            {
                ans1 = values[1] ^ values[cut1];
                ans2 = values[cut1] ^ values[cut2];
                ans3 = values[cut2];
            }
            else if ( isAncestor( cut2, cut1))
            {
                ans1 = values[1] ^ values[cut2];
                ans2 = values[cut2] ^ values[cut1];
                ans3 = values[cut1];
            }
            else {
                ans2 = values[cut1];
                ans3 = values[cut2];
                ans1 = values[1] ^ values[cut1] ^ values[cut2];
            }

            ans = min( ans, max({ans1, ans2, ans3}) - min({ans1, ans2, ans3}));
        }
    }

    return ans;

   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<vector<int> > edges(N-1, vector<int>(2));
        for (int i_edges = 0; i_edges < N-1; i_edges++)
        {
        	for(int j_edges = 0; j_edges < 2; j_edges++)
        	{
        		cin >> edges[i_edges][j_edges];
        	}
        }

        int out_;
        out_ = solve(N, edges);
        cout << out_;
        cout << "\n";
    }
}