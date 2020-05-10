## Sorting

The efficient general sorting algorithms work in O(nlogn) time, and many algorithms that use sorting as a subroutine also have this time complexity

### Sorting in C++

In this section we will see how to use the C++ sort function. The following
code sorts a vector in increasing order:

```
vector<int> v = {4,2,5,3,5,8,3};
sort(v.begin(),v.end());
```


## Binary Search

However, if the array is sorted, the situation is different. In this case it is
possible to perform the search much faster, because the order of the elements in
the array guides the search. The following binary search algorithm efficiently
searches for an element in a sorted array in O(logn) time.


The C++ standard library contains the following functions that are based on
binary search and work in logarithmic time:

• lower_bound returns a pointer to the first array element whose value is at
least x.

• upper_bound returns a pointer to the first array element whose value is
larger than x.

• equal_range returns both above pointers.

The functions assume that the array is sorted. If there is no such element,
the pointer points to the element after the last array element. For example, the
following code finds out whether an array contains an element with value x:

```
sort(array.begin(), array.end())
```

```
auto k = lower_bound(array,array+n,x)-array;
if (k < n && array[k] == x) {
// x found at index k
}
```
Then, the following code counts the number of elements whose value is x:

```
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
cout << b-a << "\n";
```

Using equal_range, the code becomes shorter:

```
auto r = equal_range(array, array+n, x);
cout << r.second-r.first << "\n";
```