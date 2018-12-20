Frequent Flyer Qualification Status
====================================
A leading airline determines frequent flyers qualification status based on a combination of flying and spending with the airline throughout the year. Flying is measured on miles or segments (flights) flown. As shown in the table below, to earn **Gold** status, for example, a frequent flyer needs to fly at least 50000 miles **or** 60 segments, **and** spend at least 5000 dollars on airline flights.

| Level    | Miles     | Segments | Dollars  |
| -------- | --------- | -------- | -------- |
| Silver   | 25000     | 30       | 2500     |
| **Gold** | **50000** | **60**   | **5000** |
| Platinum | 75000     | 100      | 7500     |
| Diamond  | 125000    | 140      | 12500    |

The function that determines the qualification status looks like this:

```java
public static Status get(int milesFlown, int segmentsFlown, int dollarsSpent) 
```

Design-By-Contract
------------------

Use *Design-By-Contract* to identify preliminary *equivalence classes* or *domains* for both input and output.

```
-- Pre-conditions
require:





-- Post-conditions
ensure:






```



Decision Table
--------------

*Decision Tables* are powerful to conduct rules analysis and to ensure coverage. In this case, there are three conditions and therefore eight possible combinations. **Create a generic decision table that captures all the combinations**.



















Boundary Value Analysis
-----------------------

Now we need to pick the values for each of the test case scenarios identified in the decision table above. Given the status are defined by specific threshold, Boundary Value Analysis can help us identifying effective test cases. **Write a set of test cases using the boundaries for  Gold status.**
