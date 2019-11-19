


## Score: 20/20 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==13687== Memcheck, a memory error detector
==13687== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13687== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13687== Command: ./test -r xml "test_heapify_down_1"
==13687== 
==13687== 
==13687== HEAP SUMMARY:
==13687==     in use at exit: 0 bytes in 0 blocks
==13687==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==13687== 
==13687== All heap blocks were freed -- no leaks are possible
==13687== 
==13687== For counts of detected and suppressed errors, rerun with: -v
==13687== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==13692== Memcheck, a memory error detector
==13692== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13692== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13692== Command: ./test -r xml "test_heapify_down_2"
==13692== 
==13692== 
==13692== HEAP SUMMARY:
==13692==     in use at exit: 0 bytes in 0 blocks
==13692==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==13692== 
==13692== All heap blocks were freed -- no leaks are possible
==13692== 
==13692== For counts of detected and suppressed errors, rerun with: -v
==13692== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==13724== Memcheck, a memory error detector
==13724== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13724== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13724== Command: ./test -r xml "test_heapify_down_3"
==13724== 
==13724== 
==13724== HEAP SUMMARY:
==13724==     in use at exit: 0 bytes in 0 blocks
==13724==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==13724== 
==13724== All heap blocks were freed -- no leaks are possible
==13724== 
==13724== For counts of detected and suppressed errors, rerun with: -v
==13724== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==13751== Memcheck, a memory error detector
==13751== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13751== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13751== Command: ./test -r xml "test_heapify_down_4"
==13751== 
==13751== 
==13751== HEAP SUMMARY:
==13751==     in use at exit: 0 bytes in 0 blocks
==13751==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==13751== 
==13751== All heap blocks were freed -- no leaks are possible
==13751== 
==13751== For counts of detected and suppressed errors, rerun with: -v
==13751== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==13790== Memcheck, a memory error detector
==13790== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13790== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13790== Command: ./test -r xml "test_heapify_down_5"
==13790== 
==13790== 
==13790== HEAP SUMMARY:
==13790==     in use at exit: 0 bytes in 0 blocks
==13790==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==13790== 
==13790== All heap blocks were freed -- no leaks are possible
==13790== 
==13790== For counts of detected and suppressed errors, rerun with: -v
==13790== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==13821== Memcheck, a memory error detector
==13821== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13821== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13821== Command: ./test -r xml "test_heapify_down_6"
==13821== 
==13821== 
==13821== HEAP SUMMARY:
==13821==     in use at exit: 0 bytes in 0 blocks
==13821==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==13821== 
==13821== All heap blocks were freed -- no leaks are possible
==13821== 
==13821== For counts of detected and suppressed errors, rerun with: -v
==13821== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==13879== Memcheck, a memory error detector
==13879== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13879== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13879== Command: ./test -r xml "test_heapify_down_7"
==13879== 
==13879== 
==13879== HEAP SUMMARY:
==13879==     in use at exit: 0 bytes in 0 blocks
==13879==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==13879== 
==13879== All heap blocks were freed -- no leaks are possible
==13879== 
==13879== For counts of detected and suppressed errors, rerun with: -v
==13879== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==13910== Memcheck, a memory error detector
==13910== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13910== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13910== Command: ./test -r xml "test_heapify_down_8"
==13910== 
==13910== 
==13910== HEAP SUMMARY:
==13910==     in use at exit: 0 bytes in 0 blocks
==13910==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==13910== 
==13910== All heap blocks were freed -- no leaks are possible
==13910== 
==13910== For counts of detected and suppressed errors, rerun with: -v
==13910== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==13931== Memcheck, a memory error detector
==13931== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13931== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13931== Command: ./test -r xml "test_heapify_down_9"
==13931== 
==13931== 
==13931== HEAP SUMMARY:
==13931==     in use at exit: 0 bytes in 0 blocks
==13931==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==13931== 
==13931== All heap blocks were freed -- no leaks are possible
==13931== 
==13931== For counts of detected and suppressed errors, rerun with: -v
==13931== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==13937== Memcheck, a memory error detector
==13937== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13937== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13937== Command: ./test -r xml "test_heapify_down_10"
==13937== 
==13937== 
==13937== HEAP SUMMARY:
==13937==     in use at exit: 0 bytes in 0 blocks
==13937==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==13937== 
==13937== All heap blocks were freed -- no leaks are possible
==13937== 
==13937== For counts of detected and suppressed errors, rerun with: -v
==13937== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==13968== Memcheck, a memory error detector
==13968== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13968== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13968== Command: ./test -r xml "test_build_heap_1"
==13968== 
==13968== 
==13968== HEAP SUMMARY:
==13968==     in use at exit: 0 bytes in 0 blocks
==13968==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==13968== 
==13968== All heap blocks were freed -- no leaks are possible
==13968== 
==13968== For counts of detected and suppressed errors, rerun with: -v
==13968== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==13989== Memcheck, a memory error detector
==13989== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13989== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13989== Command: ./test -r xml "test_build_heap_2"
==13989== 
==13989== 
==13989== HEAP SUMMARY:
==13989==     in use at exit: 0 bytes in 0 blocks
==13989==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==13989== 
==13989== All heap blocks were freed -- no leaks are possible
==13989== 
==13989== For counts of detected and suppressed errors, rerun with: -v
==13989== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==14011== Memcheck, a memory error detector
==14011== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14011== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14011== Command: ./test -r xml "test_build_heap_3"
==14011== 
==14011== 
==14011== HEAP SUMMARY:
==14011==     in use at exit: 0 bytes in 0 blocks
==14011==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==14011== 
==14011== All heap blocks were freed -- no leaks are possible
==14011== 
==14011== For counts of detected and suppressed errors, rerun with: -v
==14011== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==14018== Memcheck, a memory error detector
==14018== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14018== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14018== Command: ./test -r xml "test_build_heap_4"
==14018== 
==14018== 
==14018== HEAP SUMMARY:
==14018==     in use at exit: 0 bytes in 0 blocks
==14018==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==14018== 
==14018== All heap blocks were freed -- no leaks are possible
==14018== 
==14018== For counts of detected and suppressed errors, rerun with: -v
==14018== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==14038== Memcheck, a memory error detector
==14038== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14038== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14038== Command: ./test -r xml "test_build_heap_5"
==14038== 
==14038== 
==14038== HEAP SUMMARY:
==14038==     in use at exit: 0 bytes in 0 blocks
==14038==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==14038== 
==14038== All heap blocks were freed -- no leaks are possible
==14038== 
==14038== For counts of detected and suppressed errors, rerun with: -v
==14038== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==14057== Memcheck, a memory error detector
==14057== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14057== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14057== Command: ./test -r xml "test_update_elem_1"
==14057== 
==14057== 
==14057== HEAP SUMMARY:
==14057==     in use at exit: 0 bytes in 0 blocks
==14057==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==14057== 
==14057== All heap blocks were freed -- no leaks are possible
==14057== 
==14057== For counts of detected and suppressed errors, rerun with: -v
==14057== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==14062== Memcheck, a memory error detector
==14062== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14062== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14062== Command: ./test -r xml "test_update_elem_2"
==14062== 
==14062== 
==14062== HEAP SUMMARY:
==14062==     in use at exit: 0 bytes in 0 blocks
==14062==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==14062== 
==14062== All heap blocks were freed -- no leaks are possible
==14062== 
==14062== For counts of detected and suppressed errors, rerun with: -v
==14062== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==14082== Memcheck, a memory error detector
==14082== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14082== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14082== Command: ./test -r xml "test_update_elem_3"
==14082== 
==14082== 
==14082== HEAP SUMMARY:
==14082==     in use at exit: 0 bytes in 0 blocks
==14082==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==14082== 
==14082== All heap blocks were freed -- no leaks are possible
==14082== 
==14082== For counts of detected and suppressed errors, rerun with: -v
==14082== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==14104== Memcheck, a memory error detector
==14104== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14104== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14104== Command: ./test -r xml "test_update_elem_4"
==14104== 
==14104== 
==14104== HEAP SUMMARY:
==14104==     in use at exit: 0 bytes in 0 blocks
==14104==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==14104== 
==14104== All heap blocks were freed -- no leaks are possible
==14104== 
==14104== For counts of detected and suppressed errors, rerun with: -v
==14104== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==14132== Memcheck, a memory error detector
==14132== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14132== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14132== Command: ./test -r xml "test_update_elem_5"
==14132== 
==14132== 
==14132== HEAP SUMMARY:
==14132==     in use at exit: 0 bytes in 0 blocks
==14132==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==14132== 
==14132== All heap blocks were freed -- no leaks are possible
==14132== 
==14132== For counts of detected and suppressed errors, rerun with: -v
==14132== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aasgha2** using **18ed343aa695ca76175f934f82539d6b7f870c8e** (from **November 11th 2019, 12:15:00 am**)
