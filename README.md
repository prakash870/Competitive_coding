1886B - Fear of the Dark
There are only two major cases: both points O
 and P
 lie inside the same circle, or the point O
 lies inside one of the circles and P
 lies inside the other circle.

Let's denote the distance between the points P
 and Q
 as d(P,Q)
.

Let's look at the first case, when the points O
 and P
 lie inside the circle centered at A
. In that case, inequalities d(O,A)≤R
 and d(P,A)≤R
 must be satisfied. Therefore, the minimum possible radius for that case is equal to max(d(O,A),d(P,A))
. Similarly, for the circle centered at B
, the minimum possible radius for that case is equal to max(d(O,B),d(P,B))
.

Let's look at the second case, when the point O
 lies inside the circle centered at A
 and the point P
 lies inside the circle centered at B
. In that case, inequalities d(O,A)≤R
 and d(P,B)≤R
 must be satisfied. But there is one extra constraint: the circles must intersect, because there is should an illuminated path from one circle to another. This adds one more inequality — d(A,B)≤2R
. Therefore, the minimum possible radius for that case is equal to max(d(O,A),d(P,B),d(A,B)2)
. Similarly, when O
 lies inside the circle centered at B
 and P
 lies inside the circle centered at A
, the minimum possible radius for that case is equal to max(d(O,B),d(P,A),d(A,B)2)
.

So the answer to the problem is the minimum among aforementioned cases.










--------------------------------------------------------------------------------
Hint for Binary search

predicate funtion:-
FFFFFFFFFFFFTTTTTTTTTTTT

Problem B — Fear of the Dark

We can solve this problem using binary search as well.

Let's define a function f(w) which will return true or false for a particular radius w. True means for that particular w (w > 0), there is a path from point O to point P which is completely illuminated, and vice versa. If you observe the return of function by increasing the value of w gradually, you will notice this monotonic pattern [0 0 0...0 1... 1 1 1] where 0 means false and 1 means true. Here we can easily apply binary search to find the first 1.

Now how to write the function? Case 1: If both the points O and P lie inside any of the light of radius w, return true. Case 2: If both the circles intersect and the point o and point p lie inside any of the lights, return true, false otherwise.