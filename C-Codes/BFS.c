#include<stdio.h>
#define size 5

void BFS(int Adj[][size], int visited[], int start){
	int Queue[size], rear = -1, front = -1 , i;
	 
	Queue[++rear]=start;
    front++;
	visited[start]=1;
	
	while(rear >= front){
		
	start = Queue[front++];
	printf("%c-", start + 65 );	
	
	for(i=0; i<size; i++){
		if(Adj[start][i] && visited[i] == 0){
			Queue[++rear] = i;
			visited[i] = 1;
		}
	}

	}
}
int main(){
	int  v[size] = {0};
	int  Adj[size][size];
    int i, j;
    printf("Enter Adj Matrix (%d * %d) in the graph: ",size,size);
    for(i = 0; i < size; i++){
    	for( j = 0; j < size; j++){
    		scanf("%d",&Adj[i][j]);
		}
	}
	BFS(Adj,v,0);
}
