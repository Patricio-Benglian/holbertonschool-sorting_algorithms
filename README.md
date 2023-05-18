# Sorting Algorithms

## Bubble Sort

Bubble Sort finds an out of place value (an element larger than the one succeeding it, if we assume ascending numerical sorting) and swaps their positions until it has traversed the entire list, putting the largest number at the final position of the array. It then repeats this process to find the number that goes in the penultimate, successively until it has put all numbers in their respective position.

### Unsorted Array
| 19 | 48 | 99 | 71 | 13 | 52 | 96 | 73 | 86 | 7 |
|----|----|----|----|----|----|----|----|----|---|
### First swap 
(99 will swap with 71)

| 19 | 48 | *99* | *71* | 13 | 52 | 96 | 73 | 86 | 7 |
|----|----|----|----|----|----|----|----|----|---|

### Second swap
(99 will swap with 13)
| 19 | 48 | 71 | *99* | *13* | 52 | 96 | 73 | 86 | 7 |
|----|----|----|----|----|----|----|----|----|---|

### Several more iterations
(99 has swapped until it has reached the end of the list)
| 19 | 48 | 71 | 13 | 52 | 96 | 73 | 86 | 7 | 99 |
|----|----|----|----|----|----|----|----|----|---|

## Implementation

We found two ways to implement this into code:

### Boolean Flags
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; We utilized a boolean, which would reset at the beginning of the iteration through the array, and stop if its value remained unchanged until the end. Then, if any element positions were swapped, we would change the variable, ensuring the program would loop once more.

### Recursive
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; We found a way to avoid using a boolean by calling the function recursively. Every time we loop through the entire array and put the right number in the final position, we call the function again with a size one smaller than previously, so that it does not iterate through the positions which have already been set in place. Unfortunately, the online checker requires us to print the entire list after every swap, and this implementation is not capable of printing the entire array while sorting.
