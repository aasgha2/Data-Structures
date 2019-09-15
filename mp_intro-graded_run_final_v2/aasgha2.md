


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
intro.cpp:42:21: error: reference to non-static member function must be called; did you mean to call it with no arguments?
      if ((x < (png.width*(2/3))) {
                ~~~~^~~~~
                         ()
intro.cpp:42:35: error: expected ')'
      if ((x < (png.width*(2/3))) {
                                  ^
intro.cpp:42:10: note: to match this '('
      if ((x < (png.width*(2/3))) {
         ^
intro.cpp:50:5: error: expected statement
    }
    ^
3 errors generated.
make: *** [intro.o] Error 1

```
```
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic main.cpp intro.cpp

```


---

This report was generated for **aasgha2** using **cee68ccc12d143f68181bca11480dd8a14e27a99** (from **September 14th 2019, 12:15:00 am**)
