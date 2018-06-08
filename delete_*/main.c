#include <stdio.h>
#include <string.h>


void main()
{
	FILE *fp,*fp1;

	char   line_a[1024];
	char   line_b[1024];
	fp1 = fopen("output.txt","w+");
	fclose(fp1);
	if((fp = fopen("input.txt","r+")) == NULL)
	{
		printf("Not open file!\n");
	}
	if((fp1 = fopen("output.txt","a")) == NULL)
	{
		printf("Not open file1\n");
	}
	// fgets(line_a,1024,fp);
	// printf("line_a ====%s\n",line_a);
	while(fgets(line_a,1024,fp)!=NULL)
	{
		int j = 0;
		for (int i = 0; i < sizeof(line_a);i++)
		{
			
			//line_b[i] = line_a[i];
			if(line_a[i] == '*' || line_a[i] == '\n')
			{
				j++;
			}
			else
			{
				line_b[i-j] = line_a[i];
			}
		}
	//	printf("%s\n",line_a);
		fputs(line_b,fp1);
	}
	// printf("what?\n");
	// fputs(line_a,fp1);
	fclose(fp);
	fclose(fp1);
}
