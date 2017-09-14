#include <stdlib.h>
#include <stdio.h>
#include <math.h>




int main(void)
{

	FILE* fp; /* This is the file pointer */
	fp = fopen("afile.dat", "w");
float variablename;

//for(int j=0; j<2*M_PI; j++)

for(int i=0; i<500; i++)
	{
		variablename = sin((float)i*2.0*M_PI/500.0) + (0.2*(float)rand() / (float)RAND_MAX - 0.1);
		 fprintf(fp,"%f\n",variablename);


	}
	fclose(fp);


	float original[500];
	float output[500];
	for(int l = 0; l<500; l++)
	{
		original[l] = 0;
		output[l]= 0;
	}

fp = fopen("afile.dat", "r");
	char line[32];
	for(int j=0; j<500; j++)
	{
		fgets(line, sizeof line, fp);
		original[j] = atof(line);

	}



	fclose(fp);

	
	float x;
	float y;
	for (int n = 0;n<450; n++)
	{
		x=0;
		y=0;	
		for (int m = 0; m <= 50; m++)
			{	
			x = x + original[n+m];
			y++;
			}
		output[n]= x/y;
	}




	FILE* fp1;
fp1 = fopen("afile1.dat", "w");
for(int i=0; i<500; i++)
 {
 	fprintf (fp1,"%f\n", output[i]); 
}
fclose(fp1);

}


