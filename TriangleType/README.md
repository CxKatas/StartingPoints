# Triangle Type

This is a warmup exercise based on the self-assessment test from *Myers, G. J. (2004). The Art of Software Testing (2nd ed.)*. The goal is to get you started in the Test-Driven Development cycle using your preferred programming language and testing framework.

> A function takes three integer values as arguments representing the lengths of the sides of a triangle, and states whether the triangle is:
>
> - **INVALID** (the side lengths do not form a triangle), 
> - **SCALENE** (all sides have different lengths), 
> - **ISOSCELES** (two sides have the same length), or 
> - **EQUILATERAL** (all sides have the same length).

Test-drive, **one test at a time**, the development of such a function, based on the following rules: 

1. [ ] The function detects an INVALID triangle when the the *sum of two of the numbers is equal to the third*.  Try all three permutations.
2. [ ] The function detects an INVALID triangle when *the sum of two of the numbers is less than the third*. Try all three permutations.
3. [ ] The function detects a valid *ISOSCELES* triangle.  Try all three permutations.
4. [ ] The function detects a valid *EQUILATERAL* triangle
5. [ ] The function detects a valid *SCALENE* triangle