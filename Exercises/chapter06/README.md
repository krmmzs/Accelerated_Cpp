## Questions and Solutions

### Q0: Compile, execute, and test the programs in this chapter.
The programs in this chapter are compiled and tested. The programs can be found in the book.

### Q1: Reimplement the `frame` and `hcat` operations from §5.8.1/93 and §5.8.3/95 to use iterators.
The program can be found in [01.cpp](./01.cpp). The index loops are changed with `iterator` loops.

### Q2: Write a program to test the `find_urls` function.
The test program can be found in [02.cpp](./02.cpp). The program finds the URLs in the sample text.

### Q3: What does this program fragment do?
```
vector<int> u(10, 100);
vector<int> v;
copy(u.begin(), u.end(), v.begin());
```
### Write a program that contains this fragment, and compile and execute it.
The program fragment first creates a `vector<int>` with ten items, with each being 100. It then tries to copy the firstly created vector to the second one; however, it throws an error as `v.begin()` is invalidated after writing to `v`. The program can be found in [03.cpp](./03.cpp).

### Q4: Correct the program you wrote in the previous exercise to copy from `u` into `v`. There are at least two possible ways to correct the program. Implement both, and describe the relative advantages and disadvantages of each approach.
We can correct the program using `back_inserter` or simply copying the `vector` in the definition of `v`. For 1,000,000 items, `back_inserter` took 0.012 seconds, and copying took 0.001 seconds, so we can analyze that copying when initializing is faster for `vector`s. The program can be found in [04.cpp](./04.cpp).

### Q5: Write an analysis function to call `optimistic_median`.
The `optimistic_median_analysis` function can be found in [analysis.cpp](./analysis.cpp). Similar to the other analysis functions, the `optimistic_median_analysis` function uses `transform` to apply `optimistic_median` to each student and writes each result to a `vector`, then returns the `median` of the results. The function that shows all three analyses can be found in [05.cpp](./05.cpp).

### Q6: Note that the function from the previous exercise and the functions from §6.2.2/113 and §6.2.3/115 do the same task. Merge these three analysis functions into a single function.
The `analysis` function can be found in [analysis.cpp](./analysis.cpp). The `write_analysis` function is also overloaded to support the newly created function. The function that shows all three analyses can be found in [06.cpp](./06.cpp).

### Q7: The portion of the grading analysis program from §6.2.1/110 that read and classified student records depending on whether they did (or did not) do all the homework is similar to the problem we solved in `extract_fails`. Write a function to handle this subproblem.
The function `extract_didnt` can be found in [07.cpp](./07.cpp). The code is similar to the `extract_fails` function, however, it uses the `did_all_hw` function instead of the `fgrade` function.

### Q8: Write a single function that can be used to classify students based on criteria of your choice. Test this function by using it in place of the `extract_fails` program, and use it in the program to analyze student grades.
The modified `fgrade` can be found in [08.cpp](./08.cpp). Instead of calculating the final grade normally, the modified `fgrade` function uses the `optimistic_median` function to calculate the final grade of a student. The `extract_fails` program can be used with the modified `fgrade` function.

### Q9: Use a library algorithm to concatenate all the elements of a `vector<string>`.
The program can be found in [09.cpp](./09.cpp). Using `accumulate` function adds all elements of a `vector<string>`, which results in concatenation. `string()` is used as the initial value, representing an empty `string`.
