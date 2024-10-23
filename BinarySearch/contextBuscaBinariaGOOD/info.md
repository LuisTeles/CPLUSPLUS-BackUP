Given an array of N non-decreasingly ordered integers, Q queries will be performed, each consisting of an integer. Use binary search to return the index of the first occurrence of the requested integer in the array.


# Input

In the first line you will receive an integer N (1 <= N <= 10^5) and an integer Q (1 <= Q <= 10^5).

In the second line there are N integers separated by spaces, each integer takes a value between 1 and 10^9.

Then follow Q lines, each with an integer between 1 and 10^9, representing a query.

# Output

For each query (in the order in which they were received) print a line consisting of an integer, the index of the first occurrence of the queried element, or -1 if not present in the array.