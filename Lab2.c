#include<stdio.h>
#include<math.h>


                        //Q1 part 1
// int main(){
//     int n;printf("enter an integer:");scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//       if(i%2!=0){
//         sum+=i;
//         printf("%d\n",i);
//        }
//     }printf("sum is :%d",sum);
//     return 0;
// }
                            //Q1 part 2
// int main(){
//     int n;printf("enter an integer:");scanf("%d",&n);
//     int i=1, sum=0;
//     while(i<=n){
//       if(i%2!=0){
//         sum+=i;
//         printf("%d\n",i);
//         i++;
//        }i++;
//     }printf("sum is :%d",sum);
//     return 0;
// }
              //Q1 part 3
// int main(){
//     int n;printf("enter an integer:");scanf("%d",&n);
//     int i=1, sum=0;
//     do{
//        if(i%2!=0){
//         sum+=i;
//         printf("%d\n",i);
//         i++;
//        }i++;
//     }
//     while(i<=n);
//     printf("sum is :%d",sum);
//     return 0;
// }
                          //Q2 
// int main(){
//     int n;printf("enter an integer:");scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int k=n-1;k>=(i-1);k--){
//             printf(" ");
//         }
    
//        for (int j=1;j<=i;j++){
//         printf("* ");
//        }printf("\n");
//     }
    
//     return 0;
// }                          
         //Q3
// int comparestring(char str1[],char str2[]){
//     for(int i=0;str1[i]!='\0';i++){
       
//            if(str1[i]!=str2[i]){
//              return 1;

//            }
//         }return 0;
//     }

// int main(){
//    char str1[50];
//    char str2[50];
//    printf("%d",comparestring("hello","hello"));
//     return 0;

// }

//Q4
// void swapCase(char sentence[]){
// for(int i=0;sentence[i]!='\0';i++){
//   if (sentence[i]>='a' && sentence[i]<='z'){
//     sentence[i]-=32;
//   }
//   else if(sentence[i]>='A' && sentence[i]<='Z'){
//     sentence[i]+=32;
//   }
//   else{
//     continue;
//   }
// }
// }
// int main(){
//   char sentence[50]="IAmA girL";
//   swapCase(sentence);
//   printf("%s",sentence);
//   return 0;
// }
//Q5
// void printUniqe(int arr[],int n){
//   for(int i=0;i<n;i++){
//     int Unique=1;
//     for(int j=0;j<n;j++){
//       if(arr[i]==arr[j] && i!=j){
//         Unique=0;
//         break; 
//        }
//     }
//     if(Unique){
//       printf("%d \t",arr[i]);
//     }
//   }
// }
// int main(){
//   int arr[]={0,7,4,3,5,1,3,4,5};
//   printUniqe(arr,9);
//   return 0;
// }
//Q6
// struct  Distance{
//   int feet;
//   float inches;
// };
// int main(){
//   struct Distance d1,d2,sum;
//   printf("enter 1st distance:\n");
//   printf("enter feet:\n");
//   scanf("%d",&d1.feet);
//   printf("enter inch:\n");
//   scanf("%f",&d1.inches);
  
//   printf("enter 2nd distance:\n");
//   printf("enter feet:\n");
//   scanf("%d",&d2.feet);
//   printf("enter inch:\n");
//   scanf("%f",&d2.inches);

//   sum.feet=d1.feet+d2.feet;
//   sum.inches=d1.inches+d2.inches;
//   if(sum.inches>12.0){
//     sum.inches-=12.0;
//     sum.feet++;
//   }
//   printf("\nSum of distances = %d feet and %.2f inch",sum.feet,sum.inches);
//   return 0;
// }
