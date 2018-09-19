#include <stdio.h>
#include <stdlib.h>

void main(int argc, char** argv)
{
	FILE *fileptr;
   int lines = 0;
   char filechar[40], chr;
 	if(argv[1][1]=='l')
   	fileptr = fopen(argv[3], "r");
	else
		fileptr = fopen(argv[1], "r");

    chr = getc(fileptr);
    while (chr != EOF) {
        if (chr == '\n')
            lines = lines + 1;
        chr = getc(fileptr);
    }

	int split_num;
	if(argv[1[1]=='l')
		split_num=argv[2][0] - '0';
	else
		split_num=lines;
		
   int i,z;
   char s[lines+1];
   FILE *ptr_file,*ptr_file2;
	if(argv[1][1]=='l')
		ptr_file = fopen(argv[3], "r");
	else
		ptr_file = fopen(argv[1], "r");
   char buf[1000];
	int c;
	c=0;								

   while(fgets(buf,1000,ptr_file)!=NULL) {
	if(c==split_num || c==0) {
		c=0;
       		for( i = 0; i < lines; ++i) 
			s[i] = "filename"+i;
        }
 	s[lines] = 0;
	ptr_file2 =fopen(s, "w");
    }
fprintf(ptr_file2,"%s",buf);
c+=1;
			if(c==split_num)					//Condition for closing already open file 	
        		fclose(ptr_file2);
    }
    fclose(ptr_file);
	


}
