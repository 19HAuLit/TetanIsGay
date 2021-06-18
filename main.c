#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int tetanisgay;

  for (tetanisgay = 0 ; tetanisgay < 2 ; )
  {
    printf("Tetan est-il gay?\n  Oui: 1\n  Non: 2\n");
    scanf("%d",&tetanisgay);
    if(tetanisgay == 1)
    {
      printf("Tetan est gay, ce qui est normal quoi non?");
      tetanisgay =3;
    }
    else if(tetanisgay == 2)
    {
      printf("Tetan est forcement gay, il y un probleme tu peux recommencer jusqu'à avoir le bon résultat \n");
      sleep(5);
      system("clear");
      tetanisgay = 3;
      main();
    }
  }
}

