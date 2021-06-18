#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int paulisgay;

  for (paulisgay = 0 ; paulisgay < 2 ; )
  {
    printf("Paul est-il gay?\n  Oui: 1\n  Non: 2\n");
    scanf("%d",&paulisgay);
    if(paulisgay == 1)
    {
      printf("Paul est gay, ce qui est normal quoi non?");
      paulisgay =3;
    }
    else if(paulisgay == 2)
    {
      printf("Paul est forcement gay, il y un probleme tu peux recommencer jusqu'à avoir le bon résultat \n");
      sleep(5);
      system("clear");
      paulisgay = 3;
      main();
    }
  }
}

