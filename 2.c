#include <stdio.h>
int main()
{
  int n,x=0,y=0;
  
  scanf("%d",&n);
  int a[n];
  
  
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  x=a[0];

  for(int i=0;i<n;i++){
    // if(a[i]==x+i){
    
    //   // printf("No missing");
    // }
    if(a[i]!=x+i) {   //a[0]!=x(a[0]+i)/1!=1+0
    
      // printf("missing %d\n",x+i);
        do{
        
        if(a[i]!=x+i+y){    
          printf("missing %d\n",x+i+y);
          
        }
        else {x=x+y;}

        y++;
        }
        while(x+i+y<a[i]);
      x=x+y;
      
    }
    y=0;
  }

  return 0;
}
