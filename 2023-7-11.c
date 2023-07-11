#include <stdio.h>
#include <stdlib.h>










//int jiechen();
//
//int main(){               //求阶乘，递归法 
//	
//	int a;
//	scanf("%d",&a);
//	
//	int c=jiechen(a);
//	
//	printf("%d",c);
//	
//	
//	return 0;
//} 
//
//
//
//int jiechen(int x){
//	
//	int i;
//	
//	if(x>1){
//	 return x*jiechen(x-1);		
//	}
//	
//	
//}









//int main(){                //求阶乘 
//	
//	int a;
//	int i;
//	int j;
//	int c=1;
//	
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		
//		c=i*c;
//		
//	}
//	
//	printf("%d",c);
//	
//	return 0;
//} 





//void dayin();
//
//
//int main(){                //逐项打印一串数字，递归法 
//	
//	int a;
//	
//	scanf("%d",&a);
//	
//	dayin(a);
//	
//	
//	return 0;
//} 
//
//
//void dayin(int x){
//	
//	if(x!=0){
//
//		dayin(x/10);
//		printf("%d",x%10);
//		}	
//	
//}
//





//void chengfa();
//
//int main(){               //乘法口诀表 
//	
//	int a;
//	scanf("%d",&a);
//	chengfa(a);
//	
//	return 0;
//} 
//
//
//
//void chengfa(int x){
//	
//	int i;
//	int j;
//	
//	
//	for(i=1;i<=x;i++){
//		for(j=1;j<=i;j++){
//			
//		  printf("%-2d*%-2d=%-2d,,",i,j,i*j);
//		}
//		printf("\n");	
//	}	
//}





//int panduan();
//
//
//int main(){         //闰年 
//	
//	int a;
//	
//	scanf("%d",&a);
//	
//	int n=panduan(a);
//	
//	if(n==1){
//		
//		printf("是");
//		
//	}
//	else if(n==2){
//		printf("不是");
//	}
//	return 0;
//}
//
//
//int panduan(int x){
//	
//	if(x%4==0 && x%100!=0){
//		
//		return 1;
//	}
//	else if(x%400==0){
//		return 1;
//	}
//	else{
//		return 2; 
//	}
//}






//void panduan();           //素数 
//
//
//int main(){
//	
//	int a;
//	scanf("%d",&a);	
//	panduan(a);		
//	return 0;
//}
//
//
//void panduan(int x){	
//	int i;
//	
//	for(i=2;i<x;i++){
//		
//		if(x%i==0){
//			printf("bushi");
//			break;			
//		}		
//	}	
//  if (i==x)
//  	printf("shi"); 
//	
//}





//void jiaohuan();
//
//int main (){         //无临时变量交换参数数值 
//	
//	int a;
//	int b;
//	
//	scanf("%d %d",&a,&b);
//	printf("%d %d",a,b);
//	jiaohuan(&a,&b);
//    printf("%d %d",a,b); 
//	
//	return 0;
//}
//
//
//void jiaohuan(int* pa,int* pb){
//	
//	if(pa!=NULL && pb!=NULL){
//	
//	*(pa)=*(pa)-*(pb);
//	*(pb)=*(pa)+*(pb);
//	*(pa)=*(pb)-*(pa);
//	
//	}
//}



//int geshu();
//
//
//int main(){              //两个数二进制位不同的数 
//	                       //二进制位1的个数 
//	int a;
//	int b;
//	
//	scanf("%d %d",&a,&b);
//	
//	int d=a^b;	
//	int g=geshu(d);	
//	
//	printf("%d",g);	
//	return 0;
//}
//
//
//int geshu(int x){	
//	int c;
//	
//	while(x!=0){				
//		x=x & (x-1);		
//		c++;
//	}	
//	return c;
//}




//int geshu();
//
//int main(){            //二进制位1的个数，位移法 
//	
//	int a;
//		
//	scanf("%d",&a);
//	
//	int shu=geshu(a);
//	
//	printf("%d",shu);
//	return 0;
//	
//}
//
//int geshu(int x){
//
//	int c=0;
//	    while(x!=0){
//	  	    	
//	    	if (x & 1==1){
//	    		 c++;
//			}
//	    	x=(x>>1);
//     	}
//	return c;
//}




//int yidegeshu();
//
//
//int main(){                  //二进制位1的个数模2法 
//	
//	int a;
//	int geshu;
//	
//	scanf("%d",&a);
//	
//	yidegeshu(a);
//	
//	geshu=yidegeshu();
//	
//	printf("%d",geshu);
//	
//	return 0;
//}
//
//
//int yidegeshu(int x){
//	
//	int c=0;
//	
//	while(x!=0){
//		
//		if(x%2==1){
//			c++;
//		}
//		
//		x=x/2;
//	}
//	
//	return c;
//	
//}





//void jiaohuan();
//
//int main(){                          //交换数组里的数 
//	
//	int arr1[5]={1,2,3,4,5};
//	int arr2[5]={6,7,8,9,10};
//	int i;
//	
//	jiaohuan(arr1,arr2);
//		
//	for(i=0;i<5;i++){		
//		printf("%d",arr1[i]);			
//	}
//		printf("\n");
//	
//		for(i=0;i<5;i++){		
//		printf("%d",arr2[i]);			
//	}
//		
//}
//
//
//void jiaohuan(int arr4[5],int arr5[5]){
//	
//	int arr6[5]={0};
//	int i;
//	
//	for(i=0;i<5;i++){		
//		arr6[i]=arr4[i];
//	}
//	
//	for(i=0;i<5;i++){		
//		arr4[i]=arr5[i];
//	}
//	
//	for(i=0;i<5;i++){		
//		arr5[i]=arr6[i];
//	}
//}




//void jiaohuan();
//
//
//int main(){
//	
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};                //数组逆置 
//	int s=sizeof(arr)/sizeof(arr[0]);
//	int i;
//	
//	for(i=0;i<s;i++){
//		printf("%2d",arr[i]);		
//	}
//    printf("\n");
//    
//    jiaohuan(arr,s);
// 	
//	  for(i=0;i<s;i++){
//		printf("%2d",arr[i]);	
//	 }
//	 printf("\n");
//
//	 return 0;
//}
//
//
//void jiaohuan(int arr2[],int sz){
//	
//	int l=0;
//	int r=sz-1;
//	int i;
//			
//	while (l<=r){
//		
//		int tmp=arr2[l];
//		arr2[l]=arr2[r];
//		arr2[r]=tmp;
//		
//		l++;
//		r--;
//	}	
//}



//void paixu();
//
//
//int main(){
//	
//	int A[10]={4,5,3,6,8,7,1,2,9,10};            //数组内排序 
//	int i;
//	int s=sizeof(A)/sizeof(A[0]);
//	
//	
//	paixu(A,s);
//	
//	for(i=0;i<s;i++){	
//	    printf("%2d",A[i]);	
//	}
//	
//	return 0;
//}
//
//
//void paixu(int B[],int sz){
//	
//	int i;
//    int j;
//
//for(j=0;j<sz;j++){
//
//	for(i=0;i<sz;i++){
//	
//    	if(B[i]>B[i+1]){
//		
//		 int tmp=B[i];
//		 B[i]=B[i+1];
//		 B[i+1]=tmp;
//		 
//	   }
//   }
//   }
//}
//










