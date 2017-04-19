#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	FILE *fp1, *fp2, *fp3;
	char *ch1 = NULL, *ch2 = NULL;
	int flag = 0;
	if (!(fp1 = fopen("file1.txt", "r")))
	{
		printf("open file1 error!\n");
		return 0;
	}
	fscanf(fp1, "%s" ,ch1);
//	fread(ch1, 20, 1, fp1);
	printf("%s\n", ch1);



	//if (fp2 = fopen("file2.txt", "r+"))
	//{
	//	printf("open file2 error!\n");
	//	return 0;
	//}
	//if (fp3 = fopen("file3.txt", "w+"))
	//{
	//	printf("open file3 error!\n");
	//	return 0;
	//}
	//while (!feof(fp1))
	//{
	//	fscanf(fp1, "%s", ch1);
	//	printf("%s\n", ch1);
	//	rewind(fp2);
	//	while(!feof(fp2))
	//	{
	//		flag = 0;
	//		fscanf(fp2, "%s", ch2);
	//		if (strcmp(ch1, ch2) == 0)
	//		{
	//			flag = 1;
	//			break;
	//		}
	//		fprintf(fp3, "%s\n", ch1);
	//	}
	//}
	fclose(fp1);
	system("pause");
	return 0;

}
