#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define hangshu 10
#define lieshu 10
#define GESHU 10


#define HANG hangshu+2
#define LIE lieshu+2


void caidan();
void xuanze();
void game();
void chushihua();
void buzhidilei();
void dayinqipan();
void jieshouzuobiao();

int main(){
	
	caidan();
	xuanze();
		
	return  0;
} 


void caidan(){
	
	printf("####################\n");
	printf("#####1,开始游戏#####\n");
	printf("#####2.退出游戏#####\n");
	printf("####################\n");	
	
}


void xuanze(){
	int a;
	
	scanf("%d",&a);
	if(a==1){
		printf("游戏开始\n");
    	game();
	}
	else if(a==2){
		
		printf("退出成功\n");
	}
	else{
		printf("输入错误\n"); 
	} 
	
	
}


void game(){
	
	int qipan1[HANG][LIE]={0};
	char qipan0[HANG][LIE]={0};
	
    chushihua(qipan0,HANG,LIE);
	buzhidilei(qipan1,HANG,LIE);
	dayinqipan(qipan0,HANG,LIE);
	jieshouzuobiao(qipan1,qipan0,HANG,LIE);
	
}

void chushihua(char qipan4[][LIE],int hang,int lie){   
	
	int i;
	int j;
	
   for(i=0;i<hang;i++){           
		
       	for(j=0;j<lie;j++){			           		            
	      qipan4[i][j]='*'	;						           
		}	      		
    }	
}


void buzhidilei(int qipan2[][LIE],int hang,int lie){
	
    srand((unsigned int)time(0));
    int i;
    int j;
	int geshu=1;
		
    while(geshu<=GESHU){
    	    
     i= rand() % GESHU + 1;
     j= rand() % GESHU + 1;
    	
        if(qipan2[i][j]!=1){
        	qipan2[i][j]=1;	
		     geshu++;
		}	
		else {
			continue;
		}
				
	}
	                     		
//               for(i=0;i<hang;i++){           //检查数组内容 
//		
//	            	for(j=0;j<lie;j++){
//			           		            
//			           printf("%2d",qipan2[i][j])	;						           
//		           }
//	                   printf("\n");		
//	           }
//	        printf("\n") ;
			   			
}



void dayinqipan(char qipan3[][LIE],int hang,int lie){
	int i;
	int j;
		
	for(i=0;i<hang;i++){
		
		for(j=0;j<lie;j++){
			if(i==0 && j<lie-1){
				printf("%2d",j);
			}
			else if(j==0 && i<hang-1){
				printf("%2d",i);		
			}
			else if(i>=1 && j>=1 && i<hang-1 && j<lie-1){
				printf("%2c",qipan3[i][j]);					
			}					
		}
		printf("\n");		
	}			
}

void jieshouzuobiao(int qipan5[][LIE],char qipan6[][LIE],int hang,int lie){
	
	while(1){
		
		int x;
		int y;
		int shuliang;
		int i;
		int j;
		
		
		printf("请输入搜索坐标"); 
		scanf("%d %d",&x,&y);
		if(x>=1 && y>=1 && y<lie-1 && x<hang-1){
		
		    if (qipan5[x][y]==1){
			
			    printf("踩雷了，游戏结束\n");
			
			    for(i=0;i<hang;i++){           //显示答案 		
	            for(j=0;j<lie;j++){			           		            
			      printf("%2d",qipan5[i][j])	;						           
		        }
	              printf("\n");		
	        }
	        printf("\n") ;
			break;	
		    }		
	    	else {			
			  shuliang=qipan5[x-1][y-1]+
			  qipan5[x][y-1]+
		   	  qipan5[x+1][y-1]+
			  qipan5[x-1][y]+
			  qipan5[x+1][y]+
			  qipan5[x-1][y+1]+
			  qipan5[x][y+1]+
			  qipan5[x+1][y+1];
			
			  qipan6[x][y]=shuliang+'0';
			  dayinqipan(qipan6,HANG,LIE);				
		   } 		
	    }
		else{
			printf("超出棋盘"); 
		}	
	}
	
}






