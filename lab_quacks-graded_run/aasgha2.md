


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==22497== Memcheck, a memory error detector
==22497== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22497== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22497== Command: ./test -r xml "sumDigits"
==22497== 
==22497== 
==22497== HEAP SUMMARY:
==22497==     in use at exit: 0 bytes in 0 blocks
==22497==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==22497== 
==22497== All heap blocks were freed -- no leaks are possible
==22497== 
==22497== For counts of detected and suppressed errors, rerun with: -v
==22497== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==22500== Memcheck, a memory error detector
==22500== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22500== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22500== Command: ./test -r xml "triangle"
==22500== 
==22500== 
==22500== HEAP SUMMARY:
==22500==     in use at exit: 0 bytes in 0 blocks
==22500==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==22500== 
==22500== All heap blocks were freed -- no leaks are possible
==22500== 
==22500== For counts of detected and suppressed errors, rerun with: -v
==22500== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==22503== Memcheck, a memory error detector
==22503== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22503== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22503== Command: ./test -r xml "sum"
==22503== 
==22503== 
==22503== HEAP SUMMARY:
==22503==     in use at exit: 0 bytes in 0 blocks
==22503==   total heap usage: 1,771 allocs, 1,771 frees, 303,392 bytes allocated
==22503== 
==22503== All heap blocks were freed -- no leaks are possible
==22503== 
==22503== For counts of detected and suppressed errors, rerun with: -v
==22503== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==22510== Memcheck, a memory error detector
==22510== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22510== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22510== Command: ./test -r xml "isBalanced"
==22510== 
==22510== 
==22510== HEAP SUMMARY:
==22510==     in use at exit: 0 bytes in 0 blocks
==22510==   total heap usage: 1,765 allocs, 1,765 frees, 319,368 bytes allocated
==22510== 
==22510== All heap blocks were freed -- no leaks are possible
==22510== 
==22510== For counts of detected and suppressed errors, rerun with: -v
==22510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="14" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="14" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==22514== Memcheck, a memory error detector
==22514== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22514== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22514== Command: ./test -r xml "scramble\ 17"
==22514== 
==22514== 
==22514== HEAP SUMMARY:
==22514==     in use at exit: 0 bytes in 0 blocks
==22514==   total heap usage: 1,712 allocs, 1,712 frees, 232,360 bytes allocated
==22514== 
==22514== All heap blocks were freed -- no leaks are possible
==22514== 
==22514== For counts of detected and suppressed errors, rerun with: -v
==22514== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==22517== Memcheck, a memory error detector
==22517== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22517== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22517== Command: ./test -r xml "scramble\ 9"
==22517== 
==22517== 
==22517== HEAP SUMMARY:
==22517==     in use at exit: 0 bytes in 0 blocks
==22517==   total heap usage: 1,707 allocs, 1,707 frees, 231,688 bytes allocated
==22517== 
==22517== All heap blocks were freed -- no leaks are possible
==22517== 
==22517== For counts of detected and suppressed errors, rerun with: -v
==22517== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0

```
==22520== Memcheck, a memory error detector
==22520== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22520== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22520== Command: ./test -r xml "verifySame\ (EXTRA\ CREDIT)"
==22520== 
==22520== 
==22520== HEAP SUMMARY:
==22520==     in use at exit: 0 bytes in 0 blocks
==22520==   total heap usage: 1,900 allocs, 1,900 frees, 258,976 bytes allocated
==22520== 
==22520== All heap blocks were freed -- no leaks are possible
==22520== 
==22520== For counts of detected and suppressed errors, rerun with: -v
==22520== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aasgha2** using **5b95ea01a2bf08da970d262a373d62fc0e951166** (from **September 30th 2019, 12:15:00 am**)
