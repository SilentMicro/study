#include <stdio.h>



int main(){
	
	int hang;
	int lei;
	
	for(hang=1;hang<=15;hang++){
		
		for(lei=1;lei<=15;lei++){
			
		    if(hang==1 && lei==1){
			   printf("©° ");
		    }	
			else if(hang==1 && lei!=1 && lei!=15){
				printf("©Ð ");
			}
			else if(hang==1 && lei==15){
				printf("©´\n");
			}
			else if(hang!=1 && hang!=15 && lei==1){
				printf("©À ");
			}
			else if(hang!=1 && hang!=15 && lei==15){
				printf("©È\n");
			}
			else if(hang==15 && lei==1){
				printf("©¸ ");
			}
			else if(hang==15 && lei!=1 && lei!=15){
				printf("©Ø ");
			}
			else if(hang==15 && lei==15){
				printf("©¼\n");
			}
			else {printf("©à ");
			}
			
		}		
		
	}
	  	
}











//void px(int X[],int y){
//	
//	int i;
//    int n; 
//    int k;
//   
//    
//	   for(n=1;n<=y;n++){
//
//       for(i=0;i<y;i++){
// 	
//          if(X[i]>X[i+1]){
//  	
//  	        k=X[i];
//            X[i]=X[i+1];
//  	        X[i+1]=k;
//  	
//           }	       	
//       }
//    }
//	
//}
//
//
//int main(){
//	
//	int A[]={9,8,7,6,1,2,3,4,5};
//	int s=sizeof(A)/sizeof(A[0])-1;	   
//    int h;
//  px(A,s);
//
//  	for(h=0;h<=s;h++)	{  	
//  	printf("%d",A[h]);
//   }
//		
//	return 0;
//} 



//int fb(int x){
//	
//	int b=1;
//	int c=1;
//	int d=b+c;
//	int i;
//	
//	if(x>2){
//	
//    for(i=1;i<x-2;i++){	
//	  b=c;
//	  c=d;
//  	  d=b+c;
//	}
//	return d;
//}
//	return 1;
//}
//
//
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);	
//	fb(a);	
//	printf("%d",fb(a));
//	
//	return 0;
//}



//int fb(int x){
//	
//	if(x>2){		
//		return (fb(x-1)+fb(x-2));
//	}
//	
//	return 1;
//		
//}
//
//
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);	
//	fb(a);	
//	printf("%d",fb(a));
//	
//	return 0;
//}



//int jc(int x){
//		
//	if(x>1){
//	  return jc(x-1)*x;	 	
//	}
//	
//	return 1;
//			
//}
//
//
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);	
//	jc(a);	
//	printf("%d",jc(a));
//	
//	return 0;
//}
  
  

//int len(char* p){
//	
//	   if (*p!='\0'){	
//	      return  1+len(p+1);
//      }
//    
//    return 0;
//        
//}
//
//
//int main(){
//	
//	char A[]="ni";
//	
//	len(A);	
//	printf("%d",len(A));
//	
//	return 0;
//}



//void print(int x){
//		
//	if(x>9){			
//	   print(x/10);	   	   	
//	}
//	printf("%d,",x%10);
//	
//}
//
//
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);	
//	print(a);
//		
//	return 0;
//}
