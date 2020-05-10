#include <bits/stdc++.h> - Loads all libraries

## For effecient reading and writing

ios::sync_with_stdio(0);

cin.tie(0);

## Floating Point Numbers

An easy way to output the answer is to use the printf function and give the
number of decimal places in the formatting string. For example, the following
code prints the value of x with 9 decimal places:

```
printf("%.9f\n", x);
```

A better way to compare floating point numbers is to assume that two
numbers are equal if the difference between them is less than ε, where ε is a
small number.

In practice, the numbers can be compared as follows (ε = 10−9
):

```
if (abs(a-b) < 1e-9) {
// a and b are equal
}
```

## Shortening code

Using the command typedef it is possible to give a shorter name to a datatype.
For example, the name long long is long, so we can define a shorter name ll:

```
typedef long long ll;

ll a = 123456789;
ll b = 987654321;
cout << a*b << "\n";
```

Also

```
typedef vector<int> vi;
typedef pair<int,int> pi;

```

### Macros

Another way to shorten code is to define macros. A macro means that certain
strings in the code will be changed before the compilation. In C++, macros are
defined using the #define keyword.

A macro can also have parameters which makes it possible to shorten loops
and other structures. For example, we can define the following macro:

```
#define REP(i,a,b) for (int i = a; i <= b; i++)
```

After this, the code

```
for (int i = 1; i <= n; i++) {
search(i);
}
```

can be shortened as follows:

```
REP(i,1,n) {
search(i);
}
```


## Mathematics

### Sum formulas

```
Sum of n numbers = n(n+1) / 2
```

```
Sum of square of n numbers = n(n+1)(2n+1) / 6
```

```
Sum of arithimetic progression  = n(a+b) /2
where a is starting number and b is ending number
and n is count of numbers
```

```
Sum of geometric progession = bk -a / k - 1

Example

a + ak + ak power 2 +... + b = above formula

Special Case
1+2+4+8+...+2 power n − 1 = 2 power n − 1.

```

```
A harmonic sum is a sum of the form

Summation 1/ x = 1 + 1/2 + 1/3
1 to n

An upper bound for a harmonic sum is log2(n) + 1

```


### Set theory

A set is a collection of elements. For example, the set
X = {2,4,7}

If each element of A also belongs to S, we say that A is a subset of S, denoted
by A ⊂ S. A set S always has 2|S|
subsets, including the empty set. For example,
the subsets of the set {2,4,7} are
{} , {2}, {4}, {7}, {2,4}, {2,7}, {4,7} and {2,4,7}.


### Logic

Implication - The expression A ⇒ B is true if whenever A is true, also B is true.

Equivalence - The expression A ⇔ B is true if A and B are both true or both false.

A predicate is an expression that is true or false depending on its parameters.

A quantifier connects a logical expression to the elements of a set. The most
important quantifiers are ∀ (for all) and ∃ (there is).


### Logarithms

logk(x) = a

A useful property of logarithms is that logk(x) equals the number of times we
have to divide x by k before we reach the number 1. For example, log2
(32) = 5
because 5 divisions by 2 are needed


## Books

• S. S. Skiena and M. A. Revilla: Programming Challenges: The Programming
Contest Training Manual [59]
• S. Halim and F. Halim: Competitive Programming 3: The New Lower Bound
of Programming Contests [33]
• K. Diks et al.: Looking for a Challenge? The Ultimate Problem Set from the
University of Warsaw Programming Competitions [15]
