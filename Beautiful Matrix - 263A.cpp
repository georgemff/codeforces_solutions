#include <iostream>
using namespace std;
int matrix[5][5], i, a, b, c, j;
int main(){
   for(i=0; i<5; i++){
      for(j=0; j<5; j++)
         cin>>matrix[i][j];
   }
   for(i=0; i<5; i++){
     for(j=0; j<5; j++){
        if(matrix[i][j]==1){
            a=i;
            b=j;
        }
     }
   }
   if(a==0){
     if(b<2){c=(2-b)+2;}
     if(b>2){c=(b-2)+2;}
     if(b==2){c=c+2;}
   }
   if(a==1){
     if(b<2){c=(2-b)+1;}
     if(b>2){c=(b-2)+1;}
     if(b==2){c=c+1;}
   }
   if(a==2){
     if(b<2){c=(2-b)+0;}
     if(b>2){c=(b-2)+0;}
     if(b==2){c=c+0;}
   }
   if(a==3){
     if(b<2){c=(2-b)+1;}
     if(b>2){c=(b-2)+1;}
     if(b==2){c=c+1;}
   }
   if(a==4){
     if(b<2){c=(2-b)+2;}
     if(b>2){c=(b-2)+2;}
     if(b==2){c=c+2;}
   }
   cout<<c;
}
