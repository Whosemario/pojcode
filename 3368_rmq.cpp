#include<iostream>
#include<string.h>

using namespace std;

#define SIZE 100003
#define DELTA 100005

int val[SIZE];
int num[SIZE];
int index[SIZE*2];
int start[SIZE];
int N;

int main()
{
	while(scanf("%d",&N)&&N){
		int Q;
		scanf("%d",&Q);
		val[0]=0;
		index[0] = 0;
		int tmpN = 0;
		memset(num,0,sizeof(num));
		for(int i=1;i<=N;i++){
			scanf("%d",&val[i]);
			val[i]+=DELTA;
			if(val[i]!=val[i-1]){
				index[val[i]] = ++tmpN;
				start[tmpN]=i;
			}
			num[tmpN]++;
		}
	}
}