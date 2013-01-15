#include<iostream>
#include<string.h>
using namespace std;

#define SIZE 102

int mat[SIZE][SIZE];

int main()
{
	int M;
	scanf("%d",&M);
	while(M--){
		
		memset(mat,0,sizeof(mat));

		int N,K;
		scanf("%d%d",&N,&K);
		for(int i=0;i<K;i++){
			int to,from;
			scanf("%d%d",&to,&from);
			mat[to][from] = mat[from][to] = 1;
		}

		//reverse
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				mat[i][j] ^= 1;


	}
}