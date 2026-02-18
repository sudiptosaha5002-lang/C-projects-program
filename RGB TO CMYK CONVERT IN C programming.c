#include<stdio.h>
int main()
{
  int R,G,B;
  float cyan,magenta,yellow,black;
  float Red,Green,Blue,White;
  printf("\n enter value of Red(0-255)");
  scanf("%d",&R);
  printf("\n enter value of Green(0-255)");
  scanf("%d",&G);
  printf("\n enter value of Blue(0-255)");
  scanf("%d",&B);
  if(R==0 && G==0 && B==0)
  {
    cyan=0.0;
    magenta=0.0;
    yellow=0.0;
    black=1.0;
  }
  else
  {
    Red=R/255.0;
    Green=G/255.0;
    Blue=B/255.0;
    White=(Red > Green) ? ((Red > Blue) ? Red : Blue) : ((Green > Blue) ? Green : Blue);
    cyan=(White-Red)/White;
    magenta=(White-Green)/White;
    yellow=(White-Blue)/White;
    black=1.0-White;
  }
  
  printf("\n cyan: %.2f",cyan);
  printf("\n magenta: %.2f",magenta);
  printf("\n yellow: %.2f",yellow);
  printf("\n black: %.2f",black);
  
}

    