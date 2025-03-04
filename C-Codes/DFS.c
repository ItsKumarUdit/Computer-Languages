#include<stdio.h>
#define size 5

void DFS(int Adj[][size], int v[], int start){
	int Stack[size], top = -1, i, k;

	Stack[++top] = start;
	v[start] = 1;
	while(top != -1){
		start = Stack[top--];
		printf("%d",start);
		for(i=0; i<size; i++){
		if(Adj[start][i] && v[i] == 0){
			Stack[++top] = i;
			v[i] = 1;
			break;
		}	
		}
	}
}

int main(){
	int visited[size] = {0};
	int Adj[size][size],i, j;
	printf("Enter %d * %d Adj Matrix of any Graph: ",size,size);
	for(i = 0; i<size; i++){
		for(j = 0; j<size; j++){
			scanf("%d",&Adj[i][j]);
		}
	}
	DFS(Adj, visited, 0);
}
