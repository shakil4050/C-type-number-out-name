#include <stdio.h>

int main() {


    int x;


  printf("Type a number and press enter: \n");


  scanf("%d", &x);




  switch (x) {
    case 1:
      printf("shakil");
      break;
    case 2:
      printf("hasan");
      break;
    case 3:
      printf("sumi");
      break;
    case 4:
      printf("rubi");
      break;
    case 5:
      printf("rubina");
      break;
    case 6:
      printf("ema");
      break;
    case 7:
      printf("ma");
      break;
      default:
    printf("not matched");
  }

  return 0;
}
