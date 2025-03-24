#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d\n",&a);
  scanf("%d\n",&b);
  if(a>b){
    printf("MAGA!");
  }elseif(a<b){
    printf("FAKE NEWS!");
  }else{
    printf("WORLD WAR 3!");
  }
}
