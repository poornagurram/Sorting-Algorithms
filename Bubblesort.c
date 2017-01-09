#include<stdio.h> //header files (or) Preprocessor directives
int main()
{
int i = 0,pass = 1,temp = 0;
int list[10] = {1,8,4,6,0,3,5,2,7,9};  //size of array is 10
for (pass = 1; pass < 10 - 1; pass++)   // Loop defines the number of passes for bubble sort here it is (size-1)
        {
                for (i = 0; i <= 10 - pass - 1; i++) //Loop which is used to compare and swap the elements
                {
                     if (list[i]>list[i+1])    // Condition for swapping (can also be done using pointers)
                     {
                        temp = list[i];
                        list[i] = list[i+1];
                        list[i+1] = temp;
                      }
                   }
         }
 for( i = 0 ; i < 10 ; i++)           //To print the array of sorted elements
       {
          printf("%d \n",list[i]);
       }
       
}

               
