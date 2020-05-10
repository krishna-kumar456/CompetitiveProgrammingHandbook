## Time Complexity

The time complexity of an algorithm estimates how much time the algorithm will use for some input. The idea is to represent the efficiency as a function
whose parameter is the size of the input. By calculating the time complexity, we
can find out whether the algorithm is fast enough without implementing it.

### Calculation Rules

If there are k nested loops, the time complexity is O(n power k).

A time complexity does not tell us the exact number of times the code inside
a loop is executed, but it only shows the order of magnitude

Sometimes the time complexity depends on several factors. In this case, the time
complexity formula contains several variables.
For example, the time complexity of the following code is O(nm):

```
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        // code
    }
}
```

The time complexity of a recursive function depends on the number of times
the function is called and the time complexity of a single call. The total time
complexity is the product of these values.

O(2 power n) - This time complexity often indicates that the algorithm iterates through
all subsets of the input elements. For example, the subsets of {1,2,3} are ;,
{1}, {2}, {3}, {1,2}, {1,3}, {2,3} and {1,2,3}.


### Estimating efficiency

By calculating the time complexity of an algorithm, it is possible to check, before
implementing the algorithm, that it is efficient enough for the problem. The
starting point for estimations is the fact that a modern computer can perform
some hundreds of millions of operations in a second.

For example, assume that the time limit for a problem is one second and the
input size is n = 105. If the time complexity is O(n power 2), the algorithm will perform about (10 power 5) power 2 = 1010 operations. This should take at least some tens of seconds, so the algorithm seems to be too slow for solving the problem.