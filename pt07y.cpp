#include <cstdio>
#include <list>
#include <vector>
#include <queue>
using namespace std;

struct edge { 
    int from, to, weight;
};

int countEdges(vector<list<edge> > &graph,int n) {
    int edges = 0;
    for(int i = 1; i <= n; ++i) { 
        for(list<edge>::iterator it=graph[i].begin(); it != graph[i].end(); ++it) {
            edge temp = *it;
            if(temp.to > i) {
                ++edges;
            }
        }
    }
    return edges;
}

inline void search(queue<int> &order, vector<list<edge> > &graph, bool *visited, int *parent,int *dist, int v) {
    for(list<edge>::iterator it = graph[v].begin(); it!= graph[v].end(); ++it) {
        edge temp = *it;
        if(!visited[temp.to]) {
            order.push(temp.to);
        }
    }
}

int bfs(vector<list<edge> > &graph, int n) {
    bool *visited = new bool[n+1];
    int *dist = new int[n+1];
    int *parent = new int[n+1];
    
    int numvisited = 0;
    for(int i = 0; i <= n; ++i) visited[i] = false;
    
    queue<int> order;
    order.push(1);
    while(!order.empty()) {
        int curr = order.front();
        order.pop();
        if(!visited[curr]) {
            visited[curr] = true;
            ++numvisited;
            search(order, graph, visited, parent, dist,curr);
        }
    }
    return numvisited;
}

int main() {
    int n, e;
    scanf("%d %d", &n, &e);
    if(n - 1 > e) {
        printf("NO\n");
        return 0;
    }
    vector<list<edge> > graph;
    for(int i = 0; i <= n; ++i) {
        list<edge> t;
        graph.push_back(t);
    }
    int x,y;
    for(int i = 0; i < e; ++i) {
        scanf("%d %d", &x, &y);
        edge t;
        t.from = x;
        t.to = y;
        t.weight = 1;
        graph[x].push_back(t);
        t.to = x;
        t.from = y;
        graph[y].push_back(t);
    }
    
    int numvisited = bfs(graph, n);
    int realEdges = countEdges(graph, n);
    
    if(numvisited == n && realEdges == n-1)
    	printf("YES\n");
    else
    	printf("NO\n");
}
