#include <stdio.h>
#include <stdlib.h>

void main()
{
	int r = 3, c = 4; //Taking number of Rows and Columns
	int *ptr, count = 0, i;
	ptr = (int *)malloc((r * c) * sizeof(int)); //Dynamically Allocating Memory
	for (i = 0; i < r * c; i++)
	{
		ptr[i] = i + 1; //Giving value to the pointer and simultaneously printing it.
		printf("%d ", ptr[i]);
		if ((i + 1) % c == 0)
		{
			printf("\n");
		}
	}
	free(ptr);
}

////////////////char/////////////

// #include<stdio.h>
// int main()
// {

//   // declaring and initializing 2D String
//   char language[5][10] = {"Java", "Python", "C++", "HTML", "SQL"};


// // char language[5][10] =
// // {
// //   {'J','a','v','a','\0'},
// //   {'P','y','t','h','o','n','\0'},
// //   {'C','+','+','\0'},
// //   {'H','T','M','L','\0'},
// //   {'S','Q','L','\0'}
// // };


//   // Dispaying strings
//   printf("Languages are:\n");
//   for(int i=0;i<5;i++)
//   puts(language[i]);

//   return 0;
// }
