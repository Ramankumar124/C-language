#include<stdio.h>
int main(){
    int n,m;
    printf("Enter row number :");
    scanf("%d",&n);
    printf("Enter col number :");
    scanf("%d",&m);
        int a[n][m];
        int i,j;
        //pahle wale ka col or dusre wale ka row
        printf("enter element of matrix\n");
        for( i=0;i<n;i++){
            for( j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("our  matric before sprial printing\n");
        for( i=0;i<n;i++){
            for( j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
            }
            printf("\n");
            int minr=0;
            int maxr=n-1;
            int minC=0;
            int maxC=m-1;
            int tne=n*m;
            int count=0;
            while(count<tne){
                // print the minimum row
                for(int j=minC;j<=maxC;j++){
                    printf("%d",a[minr][j]);
                    count++;
                    
                }     minr++;
            if(count>=tne) break;// 3*4 matrix mai extra 6 khatam krne ke lia
                //print the maximum col
                for(int i=minr;i<=maxr;i++){
                    printf("%d ",a[i][maxC]);
                        count++;
                 } maxC--;
                 if(count>=tne) break;
                  // to print maximum row
                for(int j=maxC;j>=minC;j--){
                    printf("%d ",a[maxr][j]);
                        count++;
                  }  maxr--;
             if(count>=tne) break;
                  for(int i=maxr;i>=minr;i--){
                    printf("%d ",a[i][minC]);
                        count++;
                    }
                      minC++;

                

            }
        
        return 0;
}
