#include <stdio.h>

int main() {
 
  int n;
  int count1=0,count2=0;
  scanf("%d",&n);

  char a[n];
    
  for(int i=0;i<n;i++){
    scanf(" %c",&a[i]);
    
  }

  for(int i=0;i<n;i++){
    if (a[i]=='(') count1 ++;
    else if(a[i]==')') count2 ++;
    else count1=-1;
  }

  if(count1==count2) printf("Complte");
  else printf("Incomplte");
  
  return 0;
}
