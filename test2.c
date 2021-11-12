#include <stdio.h>

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("%s\n", greeting );

   for(int i=0; i<6; i++){
       printf("%c\n",greeting[i]);
   }
   return 0;
}