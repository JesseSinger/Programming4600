#include <stdlib.h>
#include <stdio.h>

int main(void)
{
float original[256];
float output[256];
float x;
float y;
for (int n = 0;n<252; n++)
{
	x=0;
	y=0;
	for (int m = 0; m <= 4; m++)
	{	x = x + original[n+m];
		y++;
	}
output[n]= x/y;
}
}