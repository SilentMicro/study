#include <stdio.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h>
#include <time.h> 


//int main(){
//	
//	srand(time(0));
//	int a=1;
//	int b=0; 
//	int c;
//		
//    a=1+rand()%100;
//    while (a!=b)
//	{
//		
//	scanf("%d",&b);
//	  
//	   if(b<a){
//		 printf("猜小了\n");		 			 	
//	   }
//	   else if(b>a){
//		  printf("猜大了\n");		  
//	   } 
//		if(b==a){
//		  printf("猜对了\n");		  
//	   }
//	}
//
//	return 0;
//}











//int main(){
//		
//	int A[]={1,2,3,4,5,6,7,8,9,10};
//	int s=sizeof(A)/sizeof(A[0]);
//	int l=0;
//	int r=s-1;
//	int i;
//	
//	int k=7;
//	
//	while(l<=r)
//	{
//		
//		i=(l+r)/2;
//		if(A[i]>k){
//			r=i-1;
//		}
//		else if(A[i]<k){
//			l=i+1;
//		}
//		
//	    else if(k==A[i])
//	    {		
//		    printf("下标为%d",i);
//			break; 				
//	    }
//			
//    }
//	if(l>r){
//		printf("不存在"); 
//	}
//	 	
//	return 0;
//}
//




//int main(){
//	
//	int a;
//	int b;	
//	int c;
//	
//	for(a=1;a<10;a++){
//		
//		for(b=1;b<=a;b++){
//			
//			if(b<a){
//				c=a*b;
//				printf("%d*%d=%-2d,",a,b,c);			
//			}
//			else{
//				c=a*b;
//					printf("%d*%d=%-2d\n",a,b,c);
//			}
//						
//		}
//		  		
//	}
//		
//	return 0;
//}



//int main(){
//	
//	int A[10]={1,2,3,4,5,6,7,12,9,10};
//	int i=0;
//	int s=sizeof(A)/sizeof(A[0]);
//	int m=A[0];
//	
//	for(i=0;i<=s-1;i++)
//	{
//	
//	
//	  if(m<A[i])
//	   {
//		m=A[i];				
//	   }
//	   
//    }
//	printf("最大值是%d",m);
//	return 0;
//}





//int main (){
//	
//	double a=1;
//	double b=0;
//	double c=0;
//	
//	
//	
//	
//	while(a<=100){
//		
//		b=(1/a)*pow(-1,a+1);
//		c=b+c;
//		a++;
//	}
//	
//	printf("%f",c);
//	
//	return 0;
//}



//int main (){
//	
//	int i;
//	int a;
//	
//	for(i=1;i<=100;i++){
//	
//	
//	   if (i%10==9){
//		printf("%d\n",i);
//		a++;
//	  }
//	
//  	   else if(i/10==9){
//		printf("%d\n",i);
//		a++;
//	  }
//		
//	
//	}
//	printf("共有%d个数字有九",a);
//	
//	return 0;
//}




//int main(){
//	
//	int a;
//	int b;
//	
//	for(a=100;a<=200;a++){
//		
//		for(b=2;b<a;b++){
//			
//			if (a%b==0){
//				break;				
//			}
//						
//		}
//		
//		if(a==b){			
//			printf("%d\n",a);
//		}
//				
//	}
//		
//	return 0; 
//}






//int main(){
//	
//	int a;
//	int b;
//	int c;
//	
//	for(a=100;a<=200;a++){
//		
//		for (b=2;b<=a;b++){
//			
//			if (a%b!=0){
//				continue;
//			}
//			else if(a==b){			
//			printf("%d\n",a);	
//			c++;
//				break;	
//		    }	
//			else {
//				break;
//			}			
//		}		
//		
//	}
//	
//	printf("100，200之间共有%d个素数",c);
//		
//	return 0;
//}



//
//int main(){
//	
//	int i=1000;	
//     int a=0;
//     
//	while(i<=2000)
//	{
//	
//	   if (i%4==0 && i%100!=0)	
//	   { 
//		 printf("%d\n",i);
//		 a++;		 
//	   }
//	   else if (i%400==0)
//	   {	   
//	   printf("%d\n",i);
//	   a++;	
//	   }
//	   i++;
//	   
//    }
//	printf ("共有%d个闰年",a);
//	
//	return 0;
//}





//int main (){
//
//    int a=0;
//	int b=0;
//	int i=1; 
//	int c;
//	scanf("%d %d",&a,&b);
//		
//	while(i<=a && i<=b)
//	{
//	
//	if (a%b==0)
//	  {		
//		printf("最大公因数为%d",b);
//		break; 
//	 }
//	else
//	  {	
//	   c=a%b;
//		a=b;	
//		b=c;
//		i++;
//	  }
//	  		
//	}
//	
//	if(i>a || i>b)
//	{
//		printf("无最大公因数");
//	}
//   	
//	return 0;
//}







//int main(){
//	int a;
//	int b;
//	int c=1;
//	
//	scanf("%d %d",&a,&b);
//	
//	
//	printf("所有的公因数为"); 
//	while(c<=a && c<=b)
//	{
//	
//	   if(a%c==0 && b%c==0)
//	   {
//		printf("%d\n",c);
//       }
//       c++;
//	}
//	return 0;
//}
//



//int main(){
//	
//	int i=0;
//	int a;
//	
//	
//	for(i=1;i<=100;i++)
//	{
//	
//   	   if(i%3==0)
//	    {		
//		printf ("%d\n",i);		 
//    	}
//		
//	}
//	
//	
//  return 0;
//}



//int main(){
//	
//	char A[20]={0}; 
//	
//	int i=0;
//  
//	
//	while(i<3)
//	{
//	printf("请输入密码\n");
//		scanf("%s",&A);
//		
//	if(strcmp(A,"123456")==0)
//    	{
//    	printf("密码正确\n");	
//    	break;
//    	} 
//       	
//   	else 
//		{
//   		printf("密码错误\n");
//   		
//   	    } 
//	 i++;
//   }
//   if(i==3){
//   	printf ("超过三次"); 
//   }
//   
//	return 0;
//}
