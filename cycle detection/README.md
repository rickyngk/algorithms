#Cycle detection

In computer science, cycle detection is the algorithmic problem of finding a cycle in a sequence of iterated function values.

For any function ƒ that maps a finite set S to itself, and any initial value x0 in S, the sequence of iterated function values

 x_0,\ x_1=f(x_0),\ x_2=f(x_1),\ \dots,\ x_i=f(x_{i-1}),\ \dots
must eventually use the same value twice: there must be some i ≠ j such that xi = xj. Once this happens, the sequence must continue periodically, by repeating the same sequence of values from xi to xj−1. Cycle detection is the problem of finding i and j, given ƒ and x0.

http://en.wikipedia.org/wiki/Cycle_detection#Example