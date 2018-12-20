Video Store Refactoring Kata
============================

*Adapted from Refactoring (Fowler, Martin. 1999).*

*This program calculates and prints out a statement of a customer’s charges at a video store.*

*The program is told which movies a customer rented and for how long. It then calculates the charges, which depend on how long the movie is rented, and identifies the type of movie. There are three kinds of movies: regular, children’s, and new releases.*

*In addition to calculating charges, the statement also computes frequent renter points, which vary depending on whether the film is a new release.* 

*The long statement routine in the Customer does far too much. Many of the things that it does should really be done by the other classes.*

*This is really brought out by a new requirement, just in from the users: they want a similar statement in HTML.*

*As you look at the code you can see that it is impossible to reuse any of the behavior of the current `statement()` method for an `htmlStatement()`. Your only recourse is to write a whole new method that duplicates much of the behavior of statement().* 

*Now, of course, this is not too complicated. You can just copy the `statement()` method and make whatever changes you need. So the lack of design does not do too much to hamper the writing of `htmlStatement()`, (although it might be tricky to figure out exactly where to do the changes).* 

*But what happens when the charging rules change? You have to fix both `statement()` and `htmlStatement()`, and ensure the fixes are consistent. The problem from cut and pasting code comes when you have to change it later.* 

*Thus, if you are writing a program that you don’t expect to change, then cut and paste is fine. If the program is long lived and likely to change, then cut and paste is a menace.* 

*But you still have to write the `htmlStatement()` program. You may feel that you should not touch the existing `statement()` method, after all it works fine. Remember the old engineering adage: “if it ain’t broke, don’t fix it”. `statement()` may not be broke, but it does hurt. It is making your life more difficult to write the `htmlStatement()` method.* 

> When you find you have to add a feature to a program, and the program’s code is not structured in a convenient way to add the feature; then first refactor the program to make it easy to add the feature, then add the feature.

*“Do not change code unless it is covered by tests”* —> the first step is to **build a solid set of tests for that section of code**. 