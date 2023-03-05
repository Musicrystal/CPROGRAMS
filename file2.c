#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","w");
      
        fprintf(fptr,"%c",'m');
        fprintf(fptr,"%c",'o');
        fprintf(fptr,"%c",'h');
        fprintf(fptr,"%c",'i');
        fprintf(fptr,"%c",'t');
    

         fclose(fptr);
    
    return 0;
}