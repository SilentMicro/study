#include <stdio.h>
#include <stdlib.h>

#define HANG 16
#define LIE 16

void dy_caidan();
int xuanze();
void game();
void dayin_qipan();

 int main(){   //��Ϸ������ 
	
	dy_caidan();		
    xuanze();
	
	return 0;
}


void dy_caidan(){   //��ӡ�˵� 	
	int xuanze;
		
	printf("##############################\n");
	printf("##########1����ʼ��Ϸ#########\n");
	printf("##########2���˳���Ϸ#########\n");
	printf("##############################\n");	
			
}


int xuanze(){	//�˵���ѡ�� 
	int xuanze;
	
	scanf("%d",&xuanze);
	
		switch(xuanze){
	  case 1 :
	   printf("��Ϸ��ʼ\n");
	   game();
	    break;
	    case 2:
	    printf("�˳��ɹ�");
	    break;
	    default:
	    printf("\a�������");
	    	
	}

}


void game(){     //��Ϸ������ 
	
	int qipan1[HANG][LIE] ={0};

	int x=0;
	int y=0;
	
	
//	              int g;             //�������1����� 
//                int h;
//            	   for(g=0;g<HANG;g++){
//	                   for(h=0;h<LIE;h++){	
//	                       printf("%d",qipan1[g][h]);
//	                    }
//	                  printf("\n");
//                    }		
		
	dayin_qipan(HANG,LIE,qipan1);      //ǰ������=0����ʼ������ 
			
	for(int bushu=1;bushu<=HANG*LIE;bushu++){
		
	     if (bushu%2==1){
		     printf("���ӻغ�");
           while(1){
		      scanf("%d %d",&x,&y);
		        if( x<1 || y<1 || x>HANG-1 || y>LIE-1){			
		         printf("�������̣�������\n");
		    	 continue; 
		        }
		        else if(qipan1[x][y]!=0 ){
		         printf("�˴��������ӣ�������\n");
		          continue; 
				}
		      break;		
        	}		
	       	       
	       qipan1[x][y] =1;
	       dayin_qipan(HANG,LIE,qipan1);	       
//	       shuying();
         }
         else{
         	printf("���ӻغ�");
           while(1){
		      scanf("%d %d",&x,&y);
		        if( x<1 || y<1 || x>HANG-1 || y>LIE-1){			
		         printf("�������̣�������\n");
		    	 continue; 
		        }
		        else if(qipan1[x][y]!=0 ){
		         printf("�˴��������ӣ�������\n");
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
  
//                        int l;        //�������2����� 
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
		    	   printf("�� ");
		        }
		    	else if(qipan2[i][j]==1){
		    	   printf("�� ");	
				}
				else if(qipan2[i][j]==-1){
		    	   printf("�� ");			    	
		        }
		    }	
			else if(i==1 && j>1 && j<lie-1){			    
			       if (qipan2[i][j]==0){
		    	      printf("�� ");
		           }
		    	   else if(qipan2[i][j]==1){
		    	      printf("�� ");	
			       }
			     	else if(qipan2[i][j]==-1){
		    	      printf("�� ");
			     	}			    	
			}			
			else if(i==1 && j==lie-1){
			    if (qipan2[1][j]==0){
		    	   printf("��\n");
		        }
		    	else if(qipan2[1][j]==1){
		    	   printf("��\n");	
				}
				else if(qipan2[1][j]==-1){
		    	   printf("��\n");	
				}		    	
			}
			else if(i>1 && i<hang-1 && j==1){			
			        if (qipan2[i][j]==0){
		    	      printf("�� ");
		            }
		      	    else if(qipan2[i][j]==1){
		    	      printf("�� ");	
			    	}
				    else if(qipan2[i][j]==-1){
		    	      printf("�� ");
				    }			    	
			}
			else if(i>1 && i<hang-1 && j==lie-1){	
			        if (qipan2[i][j]==0){
		    	      printf("�� \n");
		            }
		        	else if(qipan2[i][j]==1){
		    	      printf("�� \n");	
			    	}
				    else if(qipan2[i][j]==-1){
		    	      printf("�� \n");
				    }
			}
			else if(i==hang-1 && j==1){				
				if (qipan2[i][j]==0){
		    	   printf("�� ");
		        }
		    	else if(qipan2[i][j]==1){
		    	   printf("�� ");	
				}
				else if(qipan2[i][j]==-1){
		    	   printf("�� ");
				}			    	 
			}
			else if(i==hang-1 && j>1 && j<lie-1){				
			        if (qipan2[i][j]==0){
		    	      printf("�� ");
		            }
		        	else if(qipan2[i][j]==1){
		    	      printf("�� ");	
				    }
				    else if(qipan2[i][j]==-1){
		    	      printf("�� ");	
				    }		    	
			}
			else if(i==hang-1 && j==lie-1){
			   if (qipan2[i][j]==0){
		    	   printf("�� \n");
		        }
		    	else if(qipan2[i][j]==1){
		    	   printf("�� \n");	
				}
				else if(qipan2[i][j]==-1){
		    	   printf("�� \n");
				}			    	
			}						
			else if(i>1 && j>1 && i<hang && j<lie){		
			       if (qipan2[i][j]==0){
		    	     printf("�� ");
		            }
		        	else if(qipan2[i][j]==1){
		    	     printf("�� ");	
			    	}
				    else if(qipan2[i][j]==-1){
		    	     printf("�� ");			    	
			       }
            }
        }	
    }
}




	




