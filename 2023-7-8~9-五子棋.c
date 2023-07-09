#include <stdio.h>
#include <stdlib.h>

#define HANG 16
#define LIE 16

void dy_caidan();
int xuanze();
void game();
void dayin_qipan();

 int main(){   //游戏的主体 
	
	dy_caidan();		
    xuanze();
	
	return 0;
}


void dy_caidan(){   //打印菜单 	
	int xuanze;
		
	printf("##############################\n");
	printf("##########1，开始游戏#########\n");
	printf("##########2，退出游戏#########\n");
	printf("##############################\n");	
			
}


int xuanze(){	//菜单的选择 
	int xuanze;
	
	scanf("%d",&xuanze);
	
		switch(xuanze){
	  case 1 :
	   printf("游戏开始\n");
	   game();
	    break;
	    case 2:
	    printf("退出成功");
	    break;
	    default:
	    printf("\a输入错误");
	    	
	}

}


void game(){     //游戏的内容 
	
	int qipan1[HANG][LIE] ={0};

	int x=0;
	int y=0;
	
	
//	              int g;             //检查数组1里的数 
//                int h;
//            	   for(g=0;g<HANG;g++){
//	                   for(h=0;h<LIE;h++){	
//	                       printf("%d",qipan1[g][h]);
//	                    }
//	                  printf("\n");
//                    }		
		
	dayin_qipan(HANG,LIE,qipan1);      //前面数组=0，初始化棋盘 
			
	for(int bushu=1;bushu<=HANG*LIE;bushu++){
		
	     if (bushu%2==1){
		     printf("黑子回合");
           while(1){
		      scanf("%d %d",&x,&y);
		        if( x<1 || y<1 || x>HANG-1 || y>LIE-1){			
		         printf("超出棋盘，请重下\n");
		    	 continue; 
		        }
		        else if(qipan1[x][y]!=0 ){
		         printf("此处已有棋子，请重下\n");
		          continue; 
				}
		      break;		
        	}		
	       	       
	       qipan1[x][y] =1;
	       dayin_qipan(HANG,LIE,qipan1);	       
//	       shuying();
         }
         else{
         	printf("白子回合");
           while(1){
		      scanf("%d %d",&x,&y);
		        if( x<1 || y<1 || x>HANG-1 || y>LIE-1){			
		         printf("超出棋盘，请重下\n");
		    	 continue; 
		        }
		        else if(qipan1[x][y]!=0 ){
		         printf("此处已有棋子，请重下\n");
		          continue; 
				}
		      break;		
        	}  
	        qipan1[x][y] =-1;
	        dayin_qipan(HANG,LIE,qipan1);
//	       shuying();
		 }
		
   }
	
}

void dayin_qipan(int hang,int lie,int qipan2[HANG][LIE]){
					
    int i;
    int j;
    int a;
    int b;
  
//                        int l;        //检查数组2里的数 
//                        int k;
//                          
//                        for(l=0;l<HANG;l++){
//	                        for(k=0;k<LIE;k++){	
//	                          printf("%2d",qipan2[l][k]);
//	                        }
//	                          printf("\n");
//                        }
//		

	for(i=0;i<=hang;i++){

		for(j=0;j<=lie;j++){
			
			if(i==0 && j<lie-1){
				printf("%-2d",j);
			}
			else if(i==0 && j==lie-1){
				printf("%-2d\n",j);
			}
			else if(j==0 && i<=hang-1){
			    printf("%-2d",i);
			}
		    else if(i==1 && j==1){		    	
		    	if (qipan2[i][j]==0){
		    	   printf("┌ ");
		        }
		    	else if(qipan2[i][j]==1){
		    	   printf("○ ");	
				}
				else if(qipan2[i][j]==-1){
		    	   printf("● ");			    	
		        }
		    }	
			else if(i==1 && j>1 && j<lie-1){			    
			       if (qipan2[i][j]==0){
		    	      printf("┬ ");
		           }
		    	   else if(qipan2[i][j]==1){
		    	      printf("○ ");	
			       }
			     	else if(qipan2[i][j]==-1){
		    	      printf("● ");
			     	}			    	
			}			
			else if(i==1 && j==lie-1){
			    if (qipan2[1][j]==0){
		    	   printf("┐\n");
		        }
		    	else if(qipan2[1][j]==1){
		    	   printf("○\n");	
				}
				else if(qipan2[1][j]==-1){
		    	   printf("●\n");	
				}		    	
			}
			else if(i>1 && i<hang-1 && j==1){			
			        if (qipan2[i][j]==0){
		    	      printf("├ ");
		            }
		      	    else if(qipan2[i][j]==1){
		    	      printf("○ ");	
			    	}
				    else if(qipan2[i][j]==-1){
		    	      printf("● ");
				    }			    	
			}
			else if(i>1 && i<hang-1 && j==lie-1){	
			        if (qipan2[i][j]==0){
		    	      printf("┤ \n");
		            }
		        	else if(qipan2[i][j]==1){
		    	      printf("○ \n");	
			    	}
				    else if(qipan2[i][j]==-1){
		    	      printf("● \n");
				    }
			}
			else if(i==hang-1 && j==1){				
				if (qipan2[i][j]==0){
		    	   printf("└ ");
		        }
		    	else if(qipan2[i][j]==1){
		    	   printf("○ ");	
				}
				else if(qipan2[i][j]==-1){
		    	   printf("● ");
				}			    	 
			}
			else if(i==hang-1 && j>1 && j<lie-1){				
			        if (qipan2[i][j]==0){
		    	      printf("┴ ");
		            }
		        	else if(qipan2[i][j]==1){
		    	      printf("○ ");	
				    }
				    else if(qipan2[i][j]==-1){
		    	      printf("● ");	
				    }		    	
			}
			else if(i==hang-1 && j==lie-1){
			   if (qipan2[i][j]==0){
		    	   printf("┘ \n");
		        }
		    	else if(qipan2[i][j]==1){
		    	   printf("○ \n");	
				}
				else if(qipan2[i][j]==-1){
		    	   printf("● \n");
				}			    	
			}						
			else if(i>1 && j>1 && i<hang && j<lie){		
			       if (qipan2[i][j]==0){
		    	     printf("┼ ");
		            }
		        	else if(qipan2[i][j]==1){
		    	     printf("○ ");	
			    	}
				    else if(qipan2[i][j]==-1){
		    	     printf("● ");			    	
			       }
            }
        }	
    }
}




	




