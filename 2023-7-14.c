#include <stdio.h>



void zhiyinshu();

int main(){    //��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5
		
	int g;
	scanf("%d",&g);	
	printf("%d=",g)	;

   zhiyinshu(g);
	
	
	return 0;
}


void zhiyinshu(int m){
//	printf("%d=",m);
	int i;
	int j;
	
	for(i=2;i<=m;i++){		
		for(j=2;j<i;j++){			
			if(i%j==0){
				break;
			}
		}
		if(i==j){
		    if(m%i==0 && m/i!=1){
		    	printf("%d*",i);
		      zhiyinshu(m/i);
			  break ;			    	
			}
			else if(m%i==0 && m/i==1){
				printf("%d",i);
			break;	
			}
		}
		
	}	
//	printf("\n");
	
}






//
//                     //��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
//					 //���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
//int main(){                
//	
//	int i;
//	
//	for(i=100;i<999;i++){
//		int a=i%10;
//		int b=(i/10)%10;
//		int c=(i/100);
//		if((a*a*a)+(b*b*b)+(c*c*c)==i){
//			printf("%d,",i);
//		}		
//	}	
//	return 0;
//}



//int main(){             //�ж� 101 �� 200 ֮�������
//	
//	int i=101;
//	int j;
//	
//	for(i=101;i<=200;i++){
//		
//		for(j=2;j<i;j++){			
//			if(i%j==0){
//				break;
//			}
//		}
//		if(i==j){
//			printf("%d,",i);
//		}
//	}
//
//	return 0;
//}



//            //��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//			//С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ�������ǰ40�µ���������Ϊ���٣�
//int main (){              
//	
//	int i=1;
//	int j=1;
//	int m=1;
//	int a;
//	scanf("%d",&a);
//		int tmp;	
//	while(m<a){
//		tmp=i+j;
//		i=j;
//		j=tmp;
//		m++;
//	}
//	printf("%d",i);
//	
//	return 0;
//}



//int main(){         //Ҫ����������������̡�
//	
//	int i=1;
//	int j=1;
//		
//	for(i=1;i<=8;i++){
//		
//		for(j=1;j<=8;j++){
//		   if(i==1 && j==1){
//		     printf("�� ");
//	        }
//			
//			else if((i==1 || i==5)&& j>1 && j<8){
//				printf("�� ");
//			}
//			else if(i==1 && j==8){
//				printf("��\n");
//			}
//			else if(i>1 && i<8 && j==1){
//				printf("�� ");
//			}
//			else if(i>1 && i<8 && j==8){
//				printf("��\n");
//			}
//			else if(i==8 && j==1){
//				printf("�� ");
//			}
//			else if((i==8 || i==4)&&  j>1 && j<8){
//				printf("�� ");
//			}
//			else if(i==8 && j==8){
//				printf("��\n");
//			}
//			else{
//				printf("�� ");
//			}																			
//	    }
//	}	
//	return 0;
//}

  //�� �� ��
  //�� �� ��
  //�� �� ��




//int main(){                //���9*9�ھ�
//	int i;
//	int j;
//
//	for(i=1;i<=9;i++){
//		for(j=1;j<=i;j++){		
//	      printf("%2d*%2d=%d",i,j,i*j);     
//       }
//       printf("\n");
//	}	
//	return 0;
//}



//int main(){                 //��*�������ĸC��ͼ����          
//	
//printf("  **********\n");
//printf(" **\n");
//printf("**\n");
//printf("*\n");
//printf("*\n");
//printf("**\n");
//printf(" **\n");
//printf("  **********\n");	
//	
//	return 0;
//}




//int main(){               //������������x,y,z���������������С�������
//	
//	int x;
//	int y;
//	int z;
//	int t;
//	
//	scanf("%d %d %d",&x,&y,&z);
//	if(x>y){
//		t=x;
//		x=y;
//		y=t;
//	}
//	if(x>z){
//		t=x;
//		x=z;
//		z=t;		
//	}
//	if(y>z){
//		t=y;
//		y=z;
//		z=t;		
//	}	
//	
//	printf("%d %d %d",x,y,z);
//	
//	return 0;
//}

















//int panduan_y();
//int panduan_m();
//int  panduan();
//
//int main(){             // ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//	
//	int y;
//	int m;
//	int d;
//		
//	scanf("%d %d %d",&y,&m,&d);    	
//    int ret=panduan(m,d);
//	int rety=panduan_y(y);
//	int retm=panduan_m(m);
//	
//	  if(ret==0 || retm==1){
//	  	printf("�������"); 
//	  }
//	  else{
//	  	if(m>2){
//	  		printf("%d",rety+retm+d);
//		  }
//	  	else{
//	  		printf("%d",retm+d);
//		  }
//	  }
//	
//	return 0;
//}
//
//
//int  panduan(int m,int d){
//	
//	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
//		     if(d>31){
////			  printf("�������");
//		      return 0;
//		}
//	else if(m==4 || m==6 || m==9 || m==11 ) {
//			if(d>30){
////			  printf("�������");
//			  return 0;	
//			}			  
//		}
//	else if(m=2){
//			if(d>28){
////			  printf("�������");
//			  return 0;	
//			}
//		}
//	}
//	
//}
//
//int panduan_y(int y){
//	if(y%400==0 || (y%4==0 && y%100!=0)){
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int panduan_m(int m){
//	switch(m){	
//	    case 1:return 0;break;
//        case 2:return 31;break;
//        case 3:return 59;break;
//        case 4:return 90;break;
//        case 5:return 120;break;
//        case 6:return 151;break;
//        case 7:return 181;break;
//        case 8:return 212;break;
//        case 9:return 243;break;
//        case 10:return 273;break;
//        case 11:return 304;break;
//        case 12:return 334;break;
//        default:return 1;break;
//    }    
//}





//int main(){            //һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ���
//
// int x;
// int n=1;
// int m=1;
// int max;                //m=n+1ʱ��m*m-n*n>68,��mС������� 
//            
//   while(1){
//   m=n+1;
//   if(m*m-n*n<=168){
//       n++;   	
//   }
//    else{
//    	break;
//	}    
//   }  
//             
//	max=m;
//		
//	for(m=2;m<max;m++){
//	   for(n=1;n<m;n++){			
//		    if(m*m-n*n==168){
//		      printf("%d\n",n*n-100);
//		   }		
//	   }		
//   }
//	return 0;
//}






//    //��ҵ���ŵĽ������������ɡ�
//    //
//    //����(I)���ڻ����10��Ԫʱ���������10%��
//    //�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//    //20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//    //40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//    //60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//    //����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
//    //�Ӽ������뵱������I����Ӧ���Ž���������
//
//int jiangjin();
//
//int main(){             
//	
//	int i;
//	
//	scanf("%d",&i);	
//	int m=jiangjin(i);	
//	printf("%d",m);
//	
//	return 0; 
//} 
//
//
//int jiangjin(int i){
//	
//	if(i<=100000){
//		return i*0.1;
//	}
//	else if(i>100000 && i<=200000){
//		return 10000+(i-100000)*0.075;
//	}
//	else if(i>200000 && i<=400000){
//		return 17500+(i-200000)*0.05;
//   }
//	else if(i>400000 && i<=600000){
//		return 27500+(i-400000)*0.03;
//	}
//	else if(i>600000 && i<=1000000){
//		return 33500+(i-600000)	*0.015;
//	}
//	else if(i>1000000){
//		return 39500+(i-1000000);
//	} 
//}
	
	




//int main(){                //��һ������ �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ����
//	
//	
//	int A[]={2,4,6,8};
//	int s=sizeof(A)/sizeof(A[0]);
//	
//	int a;
//	int b;
//	int c;
//	int i;
//	int j;
//	int m;
//	int n;
//	
//	
//	for(i=0;i<s;i++){		
//      a=A[i];
//		for(j=0;j<s;j++){		
//		  b=A[j];	
//			for(m=0;m<s;m++){		
//		      c=A[m];               
//				if(a!=b && a!=c && b!=c){
//					printf("%d%d%d\n",a,b,c);
//				}   
//		    }
//	    }
//    }
//	
//	return 0;
//}
