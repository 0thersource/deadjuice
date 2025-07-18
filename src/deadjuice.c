#include <stdio.h>

int main() {
  unsigned long long num = 0;
  while(1){
    char input = ' ';
    printf(">> ");
    while (input != '\n') {
      scanf("%c", &input);
      switch (input) {
      case 'i':num++;break;
      case 'd':num--;break;
      case 's':num = num * num;break;
      case 'o':printf("%llu\n", num);break;
      case '\n':break;
      default:printf("Error: didn't recognize input\n");
      }
    }
  }
  return 0;
}
