#include <stdio.h>
int main()
{
    FILE *fp1, *fp2, *fopen();
    int i;
    char c, cnt = 49;
    fp1 = fopen("input.txt", "r");
    // open for reading
    fp2 = fopen("output.txt", "w");
    //open for writing

    if (fp1 == NULL)
    {
        printf("Cannot open input.txt.");
        exit(1);
    }
    else if (fp2 == NULL)
    {
        printf("Cannot open output.txt.");
        exit(1);
    }
    else
    {
        c = getc(fp1);
        while (c != EOF)
        {
            putc(cnt++, fp2);
            fputs(",192.168.1.1,192.168.1.2,", fp2);
            //Logic to track 5 characters
            for (i = 0; i < 5; i++)
            {
                putc(c, fp2); //Write to Output.txt
                c = getc(fp1);
                //putc(10,fp2);
            }
            putc(10, fp2);
        }
        printf("Frames generated in Output.txt file.");
        fclose(fp1); //close files
        fclose(fp2);
    }
    return 0;
}