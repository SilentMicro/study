#include <stdio.h>



void zhiyinshu();

int main(){    //将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
		
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
//                     //打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//					 //例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
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



//int main(){             //判断 101 到 200 之间的素数
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



//            //有一对兔子，从出生后第3个月起每个月都生一对兔子，
//			//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，前40月的兔子总数为多少？
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



//int main(){         //要求输出国际象棋棋盘。
//	
//	int i=1;
//	int j=1;
//		
//	for(i=1;i<=8;i++){
//		
//		for(j=1;j<=8;j++){
//		   if(i==1 && j==1){
//		     printf("┌ ");
//	        }
//			
//			else if((i==1 || i==5)&& j>1 && j<8){
//				printf("┬ ");
//			}
//			else if(i==1 && j==8){
//				printf("┐\n");
//			}
//			else if(i>1 && i<8 && j==1){
//				printf("├ ");
//			}
//			else if(i>1 && i<8 && j==8){
//				printf("┤\n");
//			}
//			else if(i==8 && j==1){
//				printf("└ ");
//			}
//			else if((i==8 || i==4)&&  j>1 && j<8){
//				printf("┴ ");
//			}
//			else if(i==8 && j==8){
//				printf("┘\n");
//			}
//			else{
//				printf("┼ ");
//			}																			
//	    }
//	}	
//	return 0;
//}

  //┌ ┬ ┐
  //├ ┼ ┤
  //└ ┴ ┘




//int main(){                //输出9*9口诀
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



//int main(){                 //用*号输出字母C的图案。          
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




//int main(){               //输入三个整数x,y,z，请把这三个数由小到大输出
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
//int main(){             // 输入某年某月某日，判断这一天是这一年的第几天？
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
//	  	printf("输入错误"); 
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
////			  printf("输入错误");
//		      return 0;
//		}
//	else if(m==4 || m==6 || m==9 || m==11 ) {
//			if(d>30){
////			  printf("输入错误");
//			  return 0;	
//			}			  
//		}
//	else if(m=2){
//			if(d>28){
////			  printf("输入错误");
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





//int main(){            //一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少
//
// int x;
// int n=1;
// int m=1;
// int max;                //m=n+1时，m*m-n*n>68,则m小于这个数 
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






//    //企业发放的奖金根据利润提成。
//    //
//    //利润(I)低于或等于10万元时，奖金可提10%；
//    //利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
//    //20万到40万之间时，高于20万元的部分，可提成5%；
//    //40万到60万之间时高于40万元的部分，可提成3%；
//    //60万到100万之间时，高于60万元的部分，可提成1.5%；
//    //高于100万元时，超过100万元的部分按1%提成。
//    //从键盘输入当月利润I，求应发放奖金总数？
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
	
	




//int main(){                //有一个数组 四个数字，能组成多少个互不相同且无重复数字的三位数？
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
