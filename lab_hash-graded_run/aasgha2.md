


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==21342== Memcheck, a memory error detector
==21342== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21342== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21342== Command: ./test -r xml "DH::testRemoveEASY"
==21342== 
==21342== 
==21342== HEAP SUMMARY:
==21342==     in use at exit: 0 bytes in 0 blocks
==21342==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==21342== 
==21342== All heap blocks were freed -- no leaks are possible
==21342== 
==21342== For counts of detected and suppressed errors, rerun with: -v
==21342== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==21345== Memcheck, a memory error detector
==21345== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21345== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21345== Command: ./test -r xml "DH::testRemoveHard"
==21345== 
==21345== 
==21345== HEAP SUMMARY:
==21345==     in use at exit: 0 bytes in 0 blocks
==21345==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==21345== 
==21345== All heap blocks were freed -- no leaks are possible
==21345== 
==21345== For counts of detected and suppressed errors, rerun with: -v
==21345== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==21347== Memcheck, a memory error detector
==21347== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21347== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21347== Command: ./test -r xml "DH::testResizeOnce"
==21347== 
==21347== 
==21347== HEAP SUMMARY:
==21347==     in use at exit: 0 bytes in 0 blocks
==21347==   total heap usage: 1,975 allocs, 1,975 frees, 245,229 bytes allocated
==21347== 
==21347== All heap blocks were freed -- no leaks are possible
==21347== 
==21347== For counts of detected and suppressed errors, rerun with: -v
==21347== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==21349== Memcheck, a memory error detector
==21349== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21349== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21349== Command: ./test -r xml "DH::testResizeAll"
==21349== 
==21349== 
==21349== HEAP SUMMARY:
==21349==     in use at exit: 0 bytes in 0 blocks
==21349==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==21349== 
==21349== All heap blocks were freed -- no leaks are possible
==21349== 
==21349== For counts of detected and suppressed errors, rerun with: -v
==21349== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==21374== Memcheck, a memory error detector
==21374== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21374== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21374== Command: ./test -r xml "DH::testInsertEasy"
==21374== 
==21374== 
==21374== HEAP SUMMARY:
==21374==     in use at exit: 0 bytes in 0 blocks
==21374==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==21374== 
==21374== All heap blocks were freed -- no leaks are possible
==21374== 
==21374== For counts of detected and suppressed errors, rerun with: -v
==21374== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==21376== Memcheck, a memory error detector
==21376== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21376== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21376== Command: ./test -r xml "DH::testInsertHard"
==21376== 
==21376== 
==21376== HEAP SUMMARY:
==21376==     in use at exit: 0 bytes in 0 blocks
==21376==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==21376== 
==21376== All heap blocks were freed -- no leaks are possible
==21376== 
==21376== For counts of detected and suppressed errors, rerun with: -v
==21376== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==21378== Memcheck, a memory error detector
==21378== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21378== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21378== Command: ./test -r xml "SC::testRemoveEASY"
==21378== 
==21378== 
==21378== HEAP SUMMARY:
==21378==     in use at exit: 0 bytes in 0 blocks
==21378==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==21378== 
==21378== All heap blocks were freed -- no leaks are possible
==21378== 
==21378== For counts of detected and suppressed errors, rerun with: -v
==21378== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==21389== Memcheck, a memory error detector
==21389== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21389== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21389== Command: ./test -r xml "SC::testRemoveHard"
==21389== 
==21389== 
==21389== HEAP SUMMARY:
==21389==     in use at exit: 0 bytes in 0 blocks
==21389==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==21389== 
==21389== All heap blocks were freed -- no leaks are possible
==21389== 
==21389== For counts of detected and suppressed errors, rerun with: -v
==21389== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==21393== Memcheck, a memory error detector
==21393== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21393== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21393== Command: ./test -r xml "SC::testResizeOnce"
==21393== 
==21393== 
==21393== HEAP SUMMARY:
==21393==     in use at exit: 0 bytes in 0 blocks
==21393==   total heap usage: 2,007 allocs, 2,007 frees, 249,664 bytes allocated
==21393== 
==21393== All heap blocks were freed -- no leaks are possible
==21393== 
==21393== For counts of detected and suppressed errors, rerun with: -v
==21393== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==21395== Memcheck, a memory error detector
==21395== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21395== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21395== Command: ./test -r xml "SC::testResizeAll"
==21395== 
==21395== 
==21395== HEAP SUMMARY:
==21395==     in use at exit: 0 bytes in 0 blocks
==21395==   total heap usage: 1,906 allocs, 1,906 frees, 242,848 bytes allocated
==21395== 
==21395== All heap blocks were freed -- no leaks are possible
==21395== 
==21395== For counts of detected and suppressed errors, rerun with: -v
==21395== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==21397== Memcheck, a memory error detector
==21397== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21397== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21397== Command: ./test -r xml "SC::testInsertEasy"
==21397== 
==21397== 
==21397== HEAP SUMMARY:
==21397==     in use at exit: 0 bytes in 0 blocks
==21397==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==21397== 
==21397== All heap blocks were freed -- no leaks are possible
==21397== 
==21397== For counts of detected and suppressed errors, rerun with: -v
==21397== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==21401== Memcheck, a memory error detector
==21401== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21401== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21401== Command: ./test -r xml "SC::testInsertHard"
==21401== 
==21401== 
==21401== HEAP SUMMARY:
==21401==     in use at exit: 0 bytes in 0 blocks
==21401==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==21401== 
==21401== All heap blocks were freed -- no leaks are possible
==21401== 
==21401== For counts of detected and suppressed errors, rerun with: -v
==21401== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==21403== Memcheck, a memory error detector
==21403== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21403== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21403== Command: ./test -r xml "LP::testRemoveEASY"
==21403== 
==21403== 
==21403== HEAP SUMMARY:
==21403==     in use at exit: 0 bytes in 0 blocks
==21403==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==21403== 
==21403== All heap blocks were freed -- no leaks are possible
==21403== 
==21403== For counts of detected and suppressed errors, rerun with: -v
==21403== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==21407== Memcheck, a memory error detector
==21407== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21407== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21407== Command: ./test -r xml "LP::testRemoveHard"
==21407== 
==21407== 
==21407== HEAP SUMMARY:
==21407==     in use at exit: 0 bytes in 0 blocks
==21407==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==21407== 
==21407== All heap blocks were freed -- no leaks are possible
==21407== 
==21407== For counts of detected and suppressed errors, rerun with: -v
==21407== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==21425== Memcheck, a memory error detector
==21425== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21425== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21425== Command: ./test -r xml "LP::testResizeOnce"
==21425== 
==21425== 
==21425== HEAP SUMMARY:
==21425==     in use at exit: 0 bytes in 0 blocks
==21425==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==21425== 
==21425== All heap blocks were freed -- no leaks are possible
==21425== 
==21425== For counts of detected and suppressed errors, rerun with: -v
==21425== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==21434== Memcheck, a memory error detector
==21434== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21434== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21434== Command: ./test -r xml "LP::testResizeAll"
==21434== 
==21434== 
==21434== HEAP SUMMARY:
==21434==     in use at exit: 0 bytes in 0 blocks
==21434==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==21434== 
==21434== All heap blocks were freed -- no leaks are possible
==21434== 
==21434== For counts of detected and suppressed errors, rerun with: -v
==21434== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==21436== Memcheck, a memory error detector
==21436== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21436== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21436== Command: ./test -r xml "LP::testInsertEasy"
==21436== 
==21436== 
==21436== HEAP SUMMARY:
==21436==     in use at exit: 0 bytes in 0 blocks
==21436==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==21436== 
==21436== All heap blocks were freed -- no leaks are possible
==21436== 
==21436== For counts of detected and suppressed errors, rerun with: -v
==21436== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==21439== Memcheck, a memory error detector
==21439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21439== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==21439== Command: ./test -r xml "LP::testInsertHard"
==21439== 
==21439== 
==21439== HEAP SUMMARY:
==21439==     in use at exit: 0 bytes in 0 blocks
==21439==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==21439== 
==21439== All heap blocks were freed -- no leaks are possible
==21439== 
==21439== For counts of detected and suppressed errors, rerun with: -v
==21439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aasgha2** using **71db50a4e6775779543558e24fa00eea19a39aa9** (from **November 4th 2019, 12:15:00 am**)
