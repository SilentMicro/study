#include <stdio.h>

void dd(int* px,int* py){
	
	scanf("%d %d",&(*px),&(*py));
	
	
}




int main(){
	int x;
	int y;
	
	dd(&x,&y);
	
	printf("%d %d",x,y);
	
	return 0;
}




















//void tesk(int ts[][4],int row,int col){	
//	int i;
//	int j;
//	
//	for(i=0;i<row;i++){
//	   for(j=0;j<col;j++){	   		
//		  printf("%d",ts[i][j]);
//		}
//		printf("\n");	
//}	
//}
//	
//
//int main(){
//	
//	int arr[4][4]={0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3};
//	
//	tesk(arr,4,4);
//		
//	return 0;
//}
