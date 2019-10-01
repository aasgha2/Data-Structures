


## Score: 3/57 (5.26%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==665== Memcheck, a memory error detector
==665== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==665== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==665== Command: ./test -r xml "List::insertFront\ size"
==665== 
==665== Conditional jump or move depends on uninitialised value(s)
==665==    at 0x427C1C: List<int>::insertFront(int const&) (List.hpp:75)
==665==    by 0x421F97: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==665==    by 0x462902: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==665==    by 0x453056: Catch::TestCase::invoke() const (catch.hpp:10793)
==665==    by 0x452F8C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==665==    by 0x44F4E6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==665==    by 0x44DABE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==665==    by 0x456E56: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==665==    by 0x455AF2: Catch::Session::runInternal() (catch.hpp:10149)
==665==    by 0x4557BA: Catch::Session::run() (catch.hpp:10106)
==665==    by 0x455739: Catch::Session::run(int, char**) (catch.hpp:10074)
==665==    by 0x4827B1: main (catch.hpp:13613)
==665== 
==665== Conditional jump or move depends on uninitialised value(s)
==665==    at 0x427C56: List<int>::insertFront(int const&) (List.hpp:78)
==665==    by 0x421F97: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==665==    by 0x462902: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==665==    by 0x453056: Catch::TestCase::invoke() const (catch.hpp:10793)
==665==    by 0x452F8C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==665==    by 0x44F4E6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==665==    by 0x44DABE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==665==    by 0x456E56: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==665==    by 0x455AF2: Catch::Session::runInternal() (catch.hpp:10149)
==665==    by 0x4557BA: Catch::Session::run() (catch.hpp:10106)
==665==    by 0x455739: Catch::Session::run(int, char**) (catch.hpp:10074)
==665==    by 0x4827B1: main (catch.hpp:13613)
==665== 
==665== Conditional jump or move depends on uninitialised value(s)
==665==    at 0x453100: Catch::RunContext::handleExpr(Catch::AssertionInfo const&, Catch::ITransientExpression const&, Catch::AssertionReaction&) (catch.hpp:9683)
==665==    by 0x430FDB: Catch::AssertionHandler::handleExpr(Catch::ITransientExpression const&) (catch.hpp:5467)
==665==    by 0x4220F4: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:25)
==665==    by 0x462902: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==665==    by 0x453056: Catch::TestCase::invoke() const (catch.hpp:10793)
==665==    by 0x452F8C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==665==    by 0x44F4E6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==665==    by 0x44DABE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==665==    by 0x456E56: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==665==    by 0x455AF2: Catch::Session::runInternal() (catch.hpp:10149)
==665==    by 0x4557BA: Catch::Session::run() (catch.hpp:10106)
==665==    by 0x455739: Catch::Session::run(int, char**) (catch.hpp:10074)
==665== 
==665== 
==665== HEAP SUMMARY:
==665==     in use at exit: 240 bytes in 10 blocks
==665==   total heap usage: 2,113 allocs, 2,103 frees, 251,496 bytes allocated
==665== 
==665== 240 bytes in 10 blocks are definitely lost in loss record 1 of 1
==665==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==665==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==665==    by 0x427BD3: List<int>::insertFront(int const&) (List.hpp:71)
==665==    by 0x421F97: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==665==    by 0x462902: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==665==    by 0x453056: Catch::TestCase::invoke() const (catch.hpp:10793)
==665==    by 0x452F8C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==665==    by 0x44F4E6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==665==    by 0x44DABE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==665==    by 0x456E56: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==665==    by 0x455AF2: Catch::Session::runInternal() (catch.hpp:10149)
==665==    by 0x4557BA: Catch::Session::run() (catch.hpp:10106)
==665== 
==665== LEAK SUMMARY:
==665==    definitely lost: 240 bytes in 10 blocks
==665==    indirectly lost: 0 bytes in 0 blocks
==665==      possibly lost: 0 bytes in 0 blocks
==665==    still reachable: 0 bytes in 0 blocks
==665==         suppressed: 0 bytes in 0 blocks
==665== 
==665== For counts of detected and suppressed errors, rerun with: -v
==665== Use --track-origins=yes to see where uninitialised values come from
==665== ERROR SUMMARY: 13 errors from 4 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="33">
        <Original>
          10 == list.size()
        </Original>
        <Expanded>
          10 == 0
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="49">
        <Original>
          "&lt; 1 2 3 3 2 1 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 3 3 2 1 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/15] - List::waterfall

- **Points**: 0 / 15


```
Original: expected == out
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=0)
```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="68">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split images

- **Points**: 0 / 5


```
Original: out1 == expected_1
Expanded: PNG(w=400, h=240, hash=0)
==
PNG(w=400, h=240, hash=7f399ca10baeec7f)
```


### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==680== Memcheck, a memory error detector
==680== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==680== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==680== Command: ./test -r xml "List::_destroy\ empty\ list"
==680== 
==680== 
==680== HEAP SUMMARY:
==680==     in use at exit: 0 bytes in 0 blocks
==680==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==680== 
==680== All heap blocks were freed -- no leaks are possible
==680== 
==680== For counts of detected and suppressed errors, rerun with: -v
==680== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="156">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="164">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="173">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="183">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="193">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="205">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="218">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="238">
        <Original>
          (bool)(list.begin() != list.end())
        </Original>
        <Expanded>
          false
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="27">
        <Original>
          "&lt; 1 2 3 1 2 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 3 1 2 3 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::waterfall simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="62">
        <Original>
          "&lt; 1 3 5 7 2 6 4 8 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 3 5 7 2 6 4 8 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aasgha2** using **5b95ea01a2bf08da970d262a373d62fc0e951166** (from **October 1st 2019, 12:15:00 am**)
