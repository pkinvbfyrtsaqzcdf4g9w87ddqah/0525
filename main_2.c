#include <stdio.h>
#define SIZE 10

void bubblesort(int *array,size_t size);

int main(void)
{
//initialize array a
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
	size_t i; //counter
	puts("data items in original order");
	//loop through array a
	for(i=0;i<SIZE;++i){
		
		printf("%4d",a[i]);
		
	}//end for

bubbleSort(a,SIZE); // sort the array

puts ("\nData items in ascending order");

//loop through array a
for (i=0; i<SIZE; ++i){
	printf("%4d",a[i]);
}// end for

puts ("");
}//end main

//sort an array of integers using bubble sort algorithm
void bubbleSort(int*const array,size_t size)
{
	void swap(int *element1Ptr,int*element2Ptr); //prototype
	unsigned int pass;// pass counter
	size_t j; //comparison counter
			for( pass = 0; pass < size - 1; ++pass){	//for°j°é±±¨î
		for( j =0; j < size - 1; ++j ){		//loop to control comparisons during each pass
			if( array[j] > array[j+1] ){	//swap adjacent elements if theyre out of order
				swap( &array[ j ], &array[j+1] );
			}	//end if		
		}//end inner for
	}//end outer for
}//end finction bubbleSort

//swap values at memora locations to which element1Ptr and
//element2Ptr point
void swap( int*element1Ptr, int*element2Ptr )
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
