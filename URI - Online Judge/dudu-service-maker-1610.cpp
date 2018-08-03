#include <iostream>
#include <cstring>
#include <map>
#include <stack>
#include <vector>

using namespace std;

int visited[10001];
int scc_count;

map<int, vector<int> > graph;
map<int, vector<int> > transposed_graph;
stack<int> traverse_order;
void scc_counter_dfs(int i);
void order_filler_dfs(int i);

int main(int argc, char** argv)
{
    int t, n, m, a, b;
    map<int, vector<int> >::iterator it;

    cin >> t;

    while (t++)
    {
        cin >> n >> m;

        while (m--)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            transposed_graph[b].push_back(a);
        }

        memset(visited, 0, sizeof(visited));
        for (it = graph.begin(); it != graph.end(); it++)
        {
            if (!visited[it->first]) order_filler_dfs(it->first);
        }

        memset(visited, 0, sizeof(visited));
        scc_count = 0;
        while (!traverse_order.empty())
        {
            if (!visited[traverse_order.top()])
            {
                scc_counter_dfs(traverse_order.top());
            }
            traverse_order.pop();
        }

        if (scc_count)
        {
            cout << "SIM" << endl;
        }
	else
	{
            cout << "NAO" << endl;
        }

        graph.clear();
        transposed_graph.clear();
    }

    return 0;
}

void order_filler_dfs(int i)
{
    vector<int>::iterator it;

    visited[i] = 1;

    for (it = graph[i].begin(); it != graph[i].end(); it++)
    {
        if (!visited[*it])
        {
            order_filler_dfs(*it);
        }
    }

    traverse_order.push(i);
}

void scc_counter_dfs(int i)
{
    vector<int>::iterator it;

    visited[i] = 1;

    for (it = transposed_graph[i].begin(); it != transposed_graph[i].end(); it++)
    {
        if (!visited[*it]) {
            scc_count++;
            scc_counter_dfs(*it);
        }
    }
}

