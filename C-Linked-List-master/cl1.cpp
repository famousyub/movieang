#include<iostream>

#include<string>

#include<stdio.h>
#include<stdlib.h>

#include<cstdlib>

#include <cstdarg>


using namespace std ;


int _temp( char *filen ,  float o)
{



    FILE *io_  = fopen(filen , "a+");


    fprintf(io_ , "file me  %f \n" ,  o );

    return 1;


}


template <class T>

T  somme (T a , T b)
{
    return  a + b;
}









int main (int argc ,  const char *argv[])
{


    if(argc > 2){

        _temp((char*)argv[1] , argv[1][0]);
         float _i = somme(atof(argv[2]) , atof(argv[3])) ;
 _temp((char*)argv[1] , _i);
       cout << _i   <<endl;





    }
}