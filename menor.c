#include <stdio.h>
#include <stdlib.h>

int main(int  argc , char* argv[] )
{
  if( argc < 3 )
  {
    printf("No se ingresaron dos numeros\n");
    return 0;
  }
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if( a > b )
    printf("%d es mayor que %d\n",a,b);
  else if( b > a )
    printf("%d es menor que %d\n",a,b);
  else
    printf("%d es igual a %d\n",a,a);


    return 0;
}
