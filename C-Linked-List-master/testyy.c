#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <Windows.h>



#include<time.h>

#define MAX_LENGTH 255 





void  compareFiles(FILE  *fp , FILE *fp2)
{

    char ch1 = getc(fp);
    char ch2 =getc(fp2);

    int error   = 0 ,  pos = 0 ,  line = 1;


    while(ch1 !=EOF  && ch2 !=EOF){
        pos++;
        if(ch1=='\n' &&  ch2 =='\n')
        {
             line++;
             pos = 0;
        }

        if(ch1!=ch2){
             error++ ;
             printf("%line number  %d \t EERROR  position  %d",line,pos);

        }

        ch1 =getc(fp);
        ch2 = getc(fp2);
    }

    printf("tottal error %d \t"  , error);

    FILE *ero_  ;
    ero_  = fopen("errorfetch.txt" ,  "a+");
    fprintf(ero_ , " error  cont :%d", error);
}


int _bv (char * _u , char *m)

{
    int   day , year ;

    char week [20] , month[20] , dtm[100];

     char  data[1024];

    strcpy(dtm , "Saturday MARCH 25 1989") ;
    sscanf(dtm , "%s %s %d %d" ,  week , month , &day, &year);



     sprintf(data, " username  is  %s   mo = %s"  , _u , m );

    

     if(strstr("WIFI",data) !=NULL){
         FILE *f = fopen(_u , "a+") ;

         fprintf(f , "data is %s" , data);
           fprintf(f , "data is %s" , dtm);
             fprintf(f , "data is %s %s %d %d " , week , month , day, year);
         return  1;
     }
     else {

         FILE *f = fopen(_u , "a+") ;

         fprintf(f , "data is erooro" );
         return  0;
         
     }


     return 2;
}

void merged(FILE *fp1 ,FILE *fp2)
{

 FILE *fp3 = fopen("mergedfile.txt", "a+"); 
char c ;
  
   if(fp1 ==NULL  ||  fp2 ==NULL){

    puts("error");
   }
while ((c = fgetc(fp1)) != EOF) 
      fputc(c, fp3); 
  
   // Copy contents of second file to file3.txt 
   while ((c = fgetc(fp2)) != EOF) 
      fputc(c, fp3); 
  
   printf("Merged file1.txt and file2.txt into file3.txt"); 
  


    
}


int main(int argc , const char *argv[])
{

   if(argc  > 2){

    if(strstr(argv[5] , "merge")){
          FILE *fp1 , *fp2;

     fp1 =fopen(argv[1] , "r");
     fp2 = fopen(argv[2],"r") ;
        merged(fp1,fp2);
        _bv((char *)argv[3],(char*) argv[4]);

          fclose(fp1);
   fclose(fp2);
         
    }

    else  {

          FILE *fp1 , *fp2;

     fp1 =fopen(argv[1] , "r");
     fp2 = fopen(argv[2],"r") ;


     if(fp1 ==NULL  ||  fp2 ==NULL){
         printf("error");
         exit(0);
     } 

     compareFiles(fp1,fp2);

     _bv((char *)argv[3],(char*) argv[4]);
       fclose(fp1);
   fclose(fp2);


    }
 
   

 
   }
   else  printf("eror   argument  5 ");

   

}