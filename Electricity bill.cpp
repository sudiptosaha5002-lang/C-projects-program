#include <stdio.h>
main()
{
	int unit, amt;
	printf ("enter unit amount");
	scanf ("%d", &unit);
	if (unit <=40)
	amt= (unit*5);
	else if (unit >41 && unit <=60)
	amt= (40*5) + (unit-41) * 6;
	else if (unit >61 && unit <=80)
	amt= (40*5) + (19*6) + (unit-61) * 7;
	else 
	amt= (40*5) + (19*6) + (61*7) + (unit-81) * 10;
	printf("amt")
}
