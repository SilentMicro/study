#include <stdio.h>
#include <stdlib.h>
#include <time.h>





//int main(){
//	int A[]={1,2,3,4,5,6,7,8,9,10};
//	int a=sizeof(A)/sizeof(A[0]);
//	
//	printf("%d",a);
//} 







int f_s(int X[],int y,int z){
	   
	
	int l=0;
	int r=z-1;
	int i; 
	
	while(l<=r){
	
	    i=(l+r)/2;
	
	     if(y>X[i]){
		  l=i+1;
	   }
	     else if(y<X[i]){
		  r=i-1;
	   }
	      else{
		   break;
	    }
	    
    }
    
    if(l>r){
    	return -1;    	   	
	}
	 else {
	return i;
	}
}


int main(){
	
	int A[]={1,2,3,4,5,6,7,8,9,10};	
    int k=11;
    int s=sizeof(A)/sizeof(A[0]);
	int ret=f_s(A,k,s);	
		
	f_s(A,k,s);	
		
	if(ret==-1){
		printf("wu");
	}	
	else{
		printf("%d",ret);
	}	
			
	return 0;
}










//int main(){
//	
//	int a;
//	int b;
//	int c;
//	
//	scanf("%d %d",&a,&b);
//	
//	c=a+b;
//	
//	printf("%d",c);
//	
//	return 0;
//}



//int is_K(int x){
//	
//	if((x%4==0 && x%100!=0)||(x%400==0)){
//		return 1;
//	}
//	
//}
//
//
//int main (){
//	
//	int y;
//	
//	for(y=1000;y<=2000;y++){
//		
//		is_K(y);
//		if(is_K(y)==1){
//			printf("%d",y);
//		}
//				
//	}	
//	
//	return 0;
//}






//int _p(int x){
//	
//	int y;
//	
//   for(y=2;y<x;y++){
//	
//	  if (x%y==0){		
//		return 0;
//	  }
//	
//   }
//   if(x==y || x==1){
//   	return 1;
//   }	
//
//   
//}
//
//
// int main(){
// 	
//    int a;
// 	
// 	scanf("%d",&a); 	
// 	_p(a);
// 	
// 	if (_p(a)==1){
// 		printf ("是素数");
//	 }
// 	else if(_p(a)==0){
// 		printf("不是素数");
//	 } 
// 		
//     return 0;
// }




//void game(){	
//	
//	int a;
//	int i=1; 
//	int b;
//	int c;
//	int d;
//				
//	 b=rand()%100+1;
//		
//	printf("请猜数字\n");
//
//while(d<=5){
//		 
//	scanf("%d",&c); 
//		
//	if(c<b){
//		printf("猜小了\n");
//		d++;			
//		if(d>5){		
//	       printf ("机会用完了，答案是%d\n",b);	
//		   d=0;	
//		   break;
//	     }	
//	}
//	else if(c>b){
//		printf("猜大了\n");
//		d++;
//		if(d>5){		
//	        printf ("机会用完了，答案是%d\n",b);
//			d=0;
//			break;		
//	      }
//	}
//	else if(c=b){
//		printf("猜对了\n");
//		d=0;
//		break;
//	} 
//	
//	}
//}
//
//int main(){
//	
//	int a;
//	int i=1; 
//	int b;
//	int c;
//	int d;
//	srand(time(0));
//	
//	while(i<=5){
//	
//	printf("规则\n猜数字，每轮有六次机会，每轮结束后可选择是否继续，可连续进行五轮\n");	
//	printf ("###########################\n");
//	printf ("########1.进入游戏#########\n");
//	printf ("########2.退出游戏#########\n");
//	printf ("###########################\n");
//	
//	scanf("%d",&a);
//	
//	   if(a==1){
//	   	game();
//	   	i++;
//	   }
//	   else if(a==2){		
//		break;		
//	   }
//	   else{
//		printf("输入错误\n");
//	   }
//	
//	}
//		
//	if(a==2){
//		printf("已退出\n");
//	}
//	else if(i>5){
//		printf("请勿沉迷\n");
//	} 
//	
//	return 0;
//}

 
