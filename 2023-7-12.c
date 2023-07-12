#include <stdio.h>

int main(){

 int a=14;

printf("%d",a);

  return 0;
}










//int main(){
//	
//	char A[5]="abcde";
//	
//	int B[5]={};
//	
//	printf("%s\n",A);
//	
//	printf("%d",B);
//	
//	return 0;	
//}





//typedef struct home{
//	
//	char shen[10];
//	char shi[10];
//	char qu[10];
//	
//}home;
//
//
//typedef struct std{
//
//	char name[20];
//	int age;
//	char sex[5]; 
//	
//	home dizhi	;
//		
//}std;
//
//
//int main(){
//	
// std s1={"zhangsan",20,"nan",{"shandong","heze","mudanqu"}};
// 
// std s2={"lisi",19,"man",{"shandong","heze","caoxian"}};
// 
// printf("%s\n",s1.name);
// printf("%s\n",s1.sex);	
// printf("%s\n",s1.dizhi.shen);
//	return 0;
//	
//} 



//int shulie();
//
//int main(){                   //斐波那契数列，
//	
//	int a;
//	scanf("%d",&a);
//	
//	int jieguo=shulie(a);
//	printf("%d",jieguo);
//	
//	return 0;
//} 
//
//
//int shulie(int x){
//	
//	int i=1;
//	int m=1;
//	int n=1;
//	int h;
//   while(x-1>i){
//    h=m+n;	
//    m=n;
//    n=h;
//    i++;
//   }
//	return h;
//   	
//}





//int shulie();
//
//int main(){                      //斐波那契数列，递归法 
//	
//	int a;
//	
//	scanf("%d",&a);
//	
//	int jieguo=shulie(a);
//	
//	printf("%d",jieguo);
//	
//	
//	return 0;
//}
//
//
//int shulie(int x){
//
//  if(x<=2){
//  	return 1;
//  }
//  else if(x>2){
//  	return shulie(x-1)+shulie(x-2) ;
//  }
//
//
//} 







//float cifang();
//
//int main(){         //递归的n的k次方 
//	
//	int n;
//	int k;
//	
//	scanf("%d %d",&n,&k);
//	
//	float jieguo=cifang(n,k);
//	
//	printf("%f",jieguo);
//	
//	return 0;
//} 
//
//
//float cifang(int x,int y){
//	
//	if(y>1){		
//		return x*cifang(x,y-1);
//	}
//	else if(y==1){
//		return x;
//	}
//	else if(y==0){
//		return 1;
//	}
//	else if(y<0){
//		return x/cifang(x,-y);
//	} 
//	
//}





//int geweijia();
//
//
//int main(){                   //数字个位数相加 
//	
//	int a;
//	
//	scanf("%d",&a);
//	
//	int jieguo=geweijia(a);
//	
//	printf("%d",jieguo);
//	
//	return 0;
//}
//
//
//int geweijia(int x){
//	
//	if(x!=0){
//	return 	x%10+geweijia(x/10);
//	}
//	
//}






//void nixu();
//
//int main(){                    //字符组交换，递归法 
//	
//	char A[]="abcdef";
//	int i;
//	int l=0;
//	int r=strlen(A)-1;
//		
//	nixu(A,l,r);
//	
//	for(i=0;i<=r;i++){	
//	printf("%c",A[i]);
//	}	
//	return 0;
//}
//
//
//void nixu(char A[],int l,int r){
//	
//	char tmp;
//
//	tmp=A[l];
//	A[l]=A[r];
//	A[r]=tmp;
//	l++;
//	r--;
//	
//	if(l<r){
//		nixu(A,l,r);
//	}	
//}


