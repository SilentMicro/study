 #include <stdio.h>
 
int main (){
	
	char A[3]="a,b,c";
	char B[3]={'a'};
//	char C[]='abc';
	char D[3]={'a','b','c'};
	//char E[]='a','b','c';
	char F[3]="abc";
	

	printf("%s\n",A);
	printf("%s\n",B);
//	printf("%s\n",C);
	printf("%s\n",D);
 //   printf("%s\n",E);
    printf("%s\n",F);
    
    
	return 0;
} 







 
// int main(){
// 	
// 	float a=1.1;
// 	int b=2;
// 	
// 	
// 	int* pa=(int*)&a;
// 	float* pb=(float*)&b ;
// 	
// 	
// 	
// 	printf("%d\n",a);    //luan
// 	printf("%f\n",a);     //1.1
// 	printf("%d\n",*pa);    //luan
// 	printf("%f\n",*pa); 	//00
// 	
// 	
// 	printf("%d\n",b);    //2
// 	printf("%f\n",b);    //00
// 	printf("%d\n",*pb);  //00
// 	printf("%f\n",*pb); 	//00
// 	return 0;
// }
// 
 
 
 
 
 
// int main(){                     //查看储存方式   大端或者小端 
// 	
// 	int a=1;
// 	char* p=(char*)&a;
// 	
// 	//printf("%d\n",a);
// //	printf("%d\n",*p);
// 	
// 	if(*p=1){
// 		printf("小端");
//	 }
// 	else {
// 		printf("大端");
//	 }
// 	
// 	return 0;
// 	
// } 
