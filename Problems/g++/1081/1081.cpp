#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

#define MAX 20

vector<int> adj[MAX];
int visited[MAX];
int nvertice,naresta;

void inline DFS(int vertex,int espaco){
	int n,k,next;
	if(visited[vertex] == -1){
		visited[vertex] = 1;
		for(n=0;n<adj[vertex].size();n++){
			for(k=0;k<espaco;k++)
				cout << " ";
			next = adj[vertex].at(n);
			cout << vertex << "-" << next;
			if(visited[next]!=1)
				cout << " pathR(G," << next << ")" << endl;
			else
				cout << endl;
			DFS(adj[vertex].at(n),espaco+2);
		}		
	}
}

int main(void) {
	
	int testcase,i,j,aux,aux1;
	cin >> testcase;	
	for(i=0;i<testcase;i++){
		cout << "Caso " << i+1 << ":" << endl;
		for(j=0;j<MAX;j++)
			adj[j].clear();
		memset(visited,-1,sizeof(visited));

		cin >> nvertice >> naresta;
		for(j=0;j<naresta;j++){
			cin >> aux >> aux1;
			adj[aux].push_back(aux1);
		}

		for(j=0;j<nvertice;j++){
			if(visited[j]== -1 && adj[j].size() > 0){
				DFS(j,2);
				cout <<endl;
			}
		}
	}
	
	return 0;
}
