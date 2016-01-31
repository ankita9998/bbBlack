#include “hw1.h”
char reverse_string(char * str, int length){
if((!str)||(length<=0))
 return (1);
   
 int i;
char temp,*start,*finish;
 start = str;
 finish = str;
 for(i=0;i<(length-1);i++)
      finish++;
 for(i=0;i<length/2;i++) 
   {        
      temp = *finish;
      *finish = *start;
      *start = temp;
      start++;
      finish--;
   }
return (0);
}
int string_length(char *pointer)
{
 int c = 0;
 while( *(pointer+c) != '\0' )
  c++;
 return c;
}

int main() 
{
   char strn[]="This is a string";
 
   int len = string_length(strn);
 
   reverse_string(strn,len);
 
   printf("Reverse is \"%s\".\n", strn);
 
   return (0);
}
