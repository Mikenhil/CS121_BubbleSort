# CS121_BubbleSort

## Assignment Specifications

Write a program in C that will sort the provided integer array in numerical order using
the bubble sort array algorithm.

    ### Bubble Sort Algorithm
        The bubble sort algorithm will take an array of integers and sort them in
        numerical order by iterating through the list multiple times. Each iteration
        will check each element in the array to see if it is larger than the next. If
        the current element is larger than the next element in the array, they will be
        swapped. This process will continue until all the elements are in numerical order

    ### Goals
        This assignment has a number of goals:
        - Help you get into the CS mindset: experimenting and playing with code
        - Give you some experience with the C language
        - Practice using a compiler
        - Learn about a basic sorting algorithm (we will come back to algorithms later)
        - Help you practice pointers; the most important idea in C
        - Explore the relationship between arrays and pointers

    (Psuedocode is provided in bubblesort.c)

    ### IO Specificationds
        There are no inputs. Data is provided as an array of {7, 3, 9, 4, 6, 1, 2, 8, 5}
        in that order.

        This program will output each swap in the process until the final swap.


    ### Personal Additions
        - Added a cleaner output for the printed values by checking if the current element was the last element and gave a separate output
        - Added additional output to better distinguish which values were swapped and when
