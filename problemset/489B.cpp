// A C++ program to find maximal
// Bipartite matching.
#include <bits/stdc++.h>
using namespace std;

int n, m;

// A DFS based recursive function
// that returns true if a matching
// for vertex u is possible
bool bpm(vector<vector<bool>> bpGraph, int u,
         vector<bool> &seen, vector<int> &matchR)
{
    // Try every job one by one
    for (int v = 0; v < m; v++)
    {
        // If applicant u is interested in
        // job v and v is not visited
        if (bpGraph[u][v] && !seen[v])
        {
            // Mark v as visited
            seen[v] = true;

            // If job 'v' is not assigned to an
            // applicant OR previously assigned
            // applicant for job v (which is matchR[v])
            // has an alternate job available.
            // Since v is marked as visited in
            // the above line, matchR[v] in the following
            // recursive call will not get job 'v' again
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v],
                                     seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}

// Returns maximum number
// of matching from M to N
int maxBPM(vector<vector<bool>> bpGraph)
{
    // An array to keep track of the
    // applicants assigned to jobs.
    // The value of matchR[i] is the
    // applicant number assigned to job i,
    // the value -1 indicates nobody is
    // assigned.
    vector<int> matchR(m, -1);
    // Initially all jobs are available

    // Count of jobs assigned to applicants
    int result = 0;
    for (int u = 0; u < n; u++)
    {
        // Mark all jobs as not seen
        // for next applicant.
        vector<bool> seen(m);

        // Find if the applicant 'u' can get a job
        if (bpm(bpGraph, u, seen, matchR))
            result++;
    }
    return result;
}

// Driver Code
int main()
{
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    cin >> m;
    vector<int> b(m);
    for (auto &x : b)
    {
        cin >> x;
    }

    // Let us create a bpGraph
    // shown in the above example
    vector<vector<bool>> bpGraph(n, vector<bool>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = a[i], v = b[j];
            if (abs(u - v) <= 1)
            {
                bpGraph[i][j] = 1;
            }
        }
    }

    cout << maxBPM(bpGraph) << endl;

    return 0;
}
