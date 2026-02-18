#include<stdio.h>
int main()
{
  int i,d,m,y,t=0,days=0;
  printf("enter date in dd mm yy format");
  scanf("%d%d%d", &d,&m,&y);
  t=(y-1)*365+(y-1)/400+d;
  for(i=1; i<m; i++)
  {
    if(i==2)
    {
      days+=28+(y%4==0);
    }
    else if(i==4 || i==6 || i==9 || i==11)
    {
      days+=30;
    }
    else
    {
      days+=31;
    }
  }
  char *day="MondayTuesdayWednesdayThursdayFridaySaturdaySunday";
  printf("%.6s", day+((t-1)%7)*6);
}
