///*************************************************
// * C program to count no of lines, words and 	 *
// * characters in a file.			 *
// *************************************************/
//
//#include <stdio.h>
//
//int main()
//{
// FILE *fp;
// char filename[100];
// char ch;
// unsigned long int linecount, wordcount, charcount;
//
// // Initialize counter variables
// linecount = 0;
// wordcount = 0;
// charcount = 0;
//
//  gets(filename);
//  
//    // Open file in read-only mode
//   fp = fopen(filename,"r");
//
//   // If file opened successfully, then write the string to file
//   if ( fp )
//   {
//	//Repeat until End Of File character is reached.	
//	   while ((ch=getc(fp)) != EOF) {
//	   	  // Increment character count if NOT new line or space
//		    if (ch != ' ' && ch != '\n') { ++charcount; }
//		  
//		  // Increment word count if new line or space character
//		   if (ch == ' ' || ch == '\n') { ++wordcount; }
//		   
//		  // Increment line count if new line character
//		   if (ch == '\n') { ++linecount; }
//		   
//
//
//	   }
//
//	   if (charcount > 0) {
//		++linecount;
//		++wordcount;
//	   }
//    }
//   else
//      {
//         printf("Failed to open the file\n");
//        }
//    printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
//
//
//getchar();
//return(0);
//}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

char ch;                      //current character
unsigned long int line_count = 0;            //Number of lines
unsigned long int char_count;            //Number of characters
unsigned long int word_count;            //Number of Words



while ((ch = getchar()) != EOF)
{
    //Increment character count if NOT new line or space
    if (ch != ' ' && ch != '\n' && ch != '\'') { char_count++; }
		  
    // Increment word count if new line or space character
    if (ch == ' ' || ch == '\n') {
        word_count++; 
    }
		   
    // Increment line count if new line character
    if (ch == '\n') { 
        line_count++; 
    }
		   


}
printf( "%lu %lu %lu\n", char_count, word_count, line_count );

return 0;
}