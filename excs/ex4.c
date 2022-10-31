#include "stdio.h"
int main() {
int p[5];

for (int i=0;i<5;i++){
  p[i] = i;
}

for (int i=0;i<5;i++){
  printf("%d ",*(p+i));
}
  
return 0;


  
}

