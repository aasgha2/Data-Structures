


## Score: 0/55 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/5] - test_insertion_idx_emp

- **Points**: 0 / 5


```
Original: 0 == insertion_idx(v, 0)
Expanded: 0 == 5
```


### ✗ - [0/5] - test_insertion_idx_small

- **Points**: 0 / 5


```
Original: 0 == insertion_idx(data, -1)
Expanded: 0 == 5
```


### ✗ - [0/5] - test_btree3_small

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="93">

```


### ✗ - [0/5] - test_btree3_large_seq

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


### ✗ - [0/5] - test_btree3_large_rand

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


### ✗ - [0/5] - test_btree64_large_seq

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


### ✗ - [0/5] - test_btree64_large_rand

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


### ✗ - [0/5] - test_btree128_med_rand

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="147">

```


### ✗ - [0/5] - test_btree256_med_rand

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree256_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="156">

```


### ✗ - [0/5] - test_btree12_double

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


### ✗ - [0/5] - test_btree12_strings

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


---

This report was generated for **aasgha2** using **fcc2661c899a939caff1e8e6356d07708977b439** (from **October 28th 2019, 12:15:00 am**)
