#include<stdio.h>
int main()
{
  int n,m,row=0;
  int max=0;

  scanf("%d %d",&n,&m);
  int a[n][m];
  int sum[n];

  for(int i=0;i<n;i++){
    sum[i]=0;
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
      sum[i]=sum[i]+a[i][j];
    }
  }

  printf("\n");
  
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d ",a[i][j]);
    } printf("\n");
  }
  max=sum[0];

  for(int i=0;i<n;i++){
    if(max<sum[i]){
      max=sum[i];
      row=i;
    }
  }

  printf("Row: %d\n",row+1);



  return 0;
}
