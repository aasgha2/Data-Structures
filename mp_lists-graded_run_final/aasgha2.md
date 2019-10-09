


## Score: 48/114 (42.11%)


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
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✗ - [0/10] - List::merge

- **Points**: 0 / 10

```
==32504== Memcheck, a memory error detector
==32504== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32504== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32504== Command: ./test -r xml "List::merge"
==32504== 
==32504== 
==32504== HEAP SUMMARY:
==32504==     in use at exit: 48 bytes in 1 blocks
==32504==   total heap usage: 243,291 allocs, 243,290 frees, 79,504,137 bytes allocated
==32504== 
==32504== 48 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32504==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32504==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32504==    by 0x429842: List<cs225::HSLAPixel>::_destroy() (List.hpp:41)
==32504==    by 0x4284C4: List<cs225::HSLAPixel>::~List() (List-given.hpp:68)
==32504==    by 0x425876: ____C_A_T_C_H____T_E_S_T____9() (tests_part2.cpp:91)
==32504==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32504==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32504==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32504==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32504==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32504==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32504==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32504== 
==32504== LEAK SUMMARY:
==32504==    definitely lost: 48 bytes in 1 blocks
==32504==    indirectly lost: 0 bytes in 0 blocks
==32504==      possibly lost: 0 bytes in 0 blocks
==32504==    still reachable: 0 bytes in 0 blocks
==32504==         suppressed: 0 bytes in 0 blocks
==32504== 
==32504== For counts of detected and suppressed errors, rerun with: -v
==32504== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2

```
==32506== Memcheck, a memory error detector
==32506== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32506== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32506== Command: ./test -r xml "List::sort\ simple\ #1"
==32506== 
==32506== 
==32506== HEAP SUMMARY:
==32506==     in use at exit: 24 bytes in 1 blocks
==32506==   total heap usage: 2,184 allocs, 2,183 frees, 262,792 bytes allocated
==32506== 
==32506== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32506==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32506==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32506==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32506==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32506==    by 0x426045: ____C_A_T_C_H____T_E_S_T____12() (tests_part2.cpp:106)
==32506==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32506==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32506==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32506==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32506==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32506==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32506==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32506== 
==32506== LEAK SUMMARY:
==32506==    definitely lost: 24 bytes in 1 blocks
==32506==    indirectly lost: 0 bytes in 0 blocks
==32506==      possibly lost: 0 bytes in 0 blocks
==32506==    still reachable: 0 bytes in 0 blocks
==32506==         suppressed: 0 bytes in 0 blocks
==32506== 
==32506== For counts of detected and suppressed errors, rerun with: -v
==32506== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2

```
==32508== Memcheck, a memory error detector
==32508== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32508== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32508== Command: ./test -r xml "List::sort\ simple\ #2"
==32508== 
==32508== 
==32508== HEAP SUMMARY:
==32508==     in use at exit: 40 bytes in 1 blocks
==32508==   total heap usage: 2,184 allocs, 2,183 frees, 262,856 bytes allocated
==32508== 
==32508== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32508==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32508==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32508==    by 0x42EF12: List<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::_destroy() (List.hpp:41)
==32508==    by 0x42DDD4: List<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~List() (List-given.hpp:68)
==32508==    by 0x4269A5: ____C_A_T_C_H____T_E_S_T____14() (tests_part2.cpp:122)
==32508==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32508==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32508==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32508==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32508==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32508==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32508==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32508== 
==32508== LEAK SUMMARY:
==32508==    definitely lost: 40 bytes in 1 blocks
==32508==    indirectly lost: 0 bytes in 0 blocks
==32508==      possibly lost: 0 bytes in 0 blocks
==32508==    still reachable: 0 bytes in 0 blocks
==32508==         suppressed: 0 bytes in 0 blocks
==32508== 
==32508== For counts of detected and suppressed errors, rerun with: -v
==32508== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==32512== Memcheck, a memory error detector
==32512== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32512== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32512== Command: ./test -r xml "List::insertFront\ size"
==32512== 
==32512== 
==32512== HEAP SUMMARY:
==32512==     in use at exit: 24 bytes in 1 blocks
==32512==   total heap usage: 2,329 allocs, 2,328 frees, 267,392 bytes allocated
==32512== 
==32512== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32512==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32512==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32512==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32512==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32512==    by 0x4323AE: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:26)
==32512==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32512==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32512==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32512==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32512==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32512==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32512==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32512== 
==32512== LEAK SUMMARY:
==32512==    definitely lost: 24 bytes in 1 blocks
==32512==    indirectly lost: 0 bytes in 0 blocks
==32512==      possibly lost: 0 bytes in 0 blocks
==32512==    still reachable: 0 bytes in 0 blocks
==32512==         suppressed: 0 bytes in 0 blocks
==32512== 
==32512== For counts of detected and suppressed errors, rerun with: -v
==32512== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==32514== Memcheck, a memory error detector
==32514== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32514== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32514== Command: ./test -r xml "List::insertBack\ size"
==32514== 
==32514== 
==32514== HEAP SUMMARY:
==32514==     in use at exit: 24 bytes in 1 blocks
==32514==   total heap usage: 2,329 allocs, 2,328 frees, 267,392 bytes allocated
==32514== 
==32514== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32514==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32514==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32514==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32514==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32514==    by 0x43265E: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:34)
==32514==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32514==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32514==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32514==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32514==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32514==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32514==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32514== 
==32514== LEAK SUMMARY:
==32514==    definitely lost: 24 bytes in 1 blocks
==32514==    indirectly lost: 0 bytes in 0 blocks
==32514==      possibly lost: 0 bytes in 0 blocks
==32514==    still reachable: 0 bytes in 0 blocks
==32514==         suppressed: 0 bytes in 0 blocks
==32514== 
==32514== For counts of detected and suppressed errors, rerun with: -v
==32514== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4

```
==32516== Memcheck, a memory error detector
==32516== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32516== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32516== Command: ./test -r xml "List::insert\ contents"
==32516== 
==32516== 
==32516== HEAP SUMMARY:
==32516==     in use at exit: 24 bytes in 1 blocks
==32516==   total heap usage: 2,325 allocs, 2,324 frees, 267,296 bytes allocated
==32516== 
==32516== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32516==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32516==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32516==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32516==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32516==    by 0x432DAC: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:50)
==32516==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32516==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32516==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32516==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32516==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32516==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32516==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32516== 
==32516== LEAK SUMMARY:
==32516==    definitely lost: 24 bytes in 1 blocks
==32516==    indirectly lost: 0 bytes in 0 blocks
==32516==      possibly lost: 0 bytes in 0 blocks
==32516==    still reachable: 0 bytes in 0 blocks
==32516==         suppressed: 0 bytes in 0 blocks
==32516== 
==32516== For counts of detected and suppressed errors, rerun with: -v
==32516== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5

```
==32519== Memcheck, a memory error detector
==32519== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32519== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32519== Command: ./test -r xml "List::split\ simple"
==32519== 
==32519== 
==32519== HEAP SUMMARY:
==32519==     in use at exit: 72 bytes in 3 blocks
==32519==   total heap usage: 2,189 allocs, 2,186 frees, 262,912 bytes allocated
==32519== 
==32519== 24 bytes in 1 blocks are definitely lost in loss record 1 of 3
==32519==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32519==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32519==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32519==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32519==    by 0x438615: List<int>::split(int) (List-given.hpp:111)
==32519==    by 0x433630: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:76)
==32519==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32519==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32519==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32519==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32519==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32519==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32519== 
==32519== 24 bytes in 1 blocks are definitely lost in loss record 2 of 3
==32519==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32519==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32519==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32519==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32519==    by 0x4342B6: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:84)
==32519==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32519==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32519==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32519==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32519==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32519==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32519==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32519== 
==32519== 24 bytes in 1 blocks are definitely lost in loss record 3 of 3
==32519==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32519==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32519==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32519==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32519==    by 0x4342C2: ____C_A_T_C_H____T_E_S_T____9() (tests_part1.cpp:84)
==32519==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32519==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32519==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32519==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32519==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32519==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32519==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32519== 
==32519== LEAK SUMMARY:
==32519==    definitely lost: 72 bytes in 3 blocks
==32519==    indirectly lost: 0 bytes in 0 blocks
==32519==      possibly lost: 0 bytes in 0 blocks
==32519==    still reachable: 0 bytes in 0 blocks
==32519==         suppressed: 0 bytes in 0 blocks
==32519== 
==32519== For counts of detected and suppressed errors, rerun with: -v
==32519== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==32522== Memcheck, a memory error detector
==32522== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32522== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32522== Command: ./test -r xml "List::_destroy\ empty\ list"
==32522== 
==32522== 
==32522== HEAP SUMMARY:
==32522==     in use at exit: 0 bytes in 0 blocks
==32522==   total heap usage: 2,337 allocs, 2,337 frees, 268,224 bytes allocated
==32522== 
==32522== All heap blocks were freed -- no leaks are possible
==32522== 
==32522== For counts of detected and suppressed errors, rerun with: -v
==32522== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32524== Memcheck, a memory error detector
==32524== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32524== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32524== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==32524== 
==32524== 
==32524== HEAP SUMMARY:
==32524==     in use at exit: 24 bytes in 1 blocks
==32524==   total heap usage: 2,341 allocs, 2,340 frees, 272,560 bytes allocated
==32524== 
==32524== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32524==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32524==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32524==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32524==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32524==    by 0x43611E: ____C_A_T_C_H____T_E_S_T____18() (tests_part1.cpp:162)
==32524==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32524==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32524==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32524==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32524==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32524==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32524==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32524== 
==32524== LEAK SUMMARY:
==32524==    definitely lost: 24 bytes in 1 blocks
==32524==    indirectly lost: 0 bytes in 0 blocks
==32524==      possibly lost: 0 bytes in 0 blocks
==32524==    still reachable: 0 bytes in 0 blocks
==32524==         suppressed: 0 bytes in 0 blocks
==32524== 
==32524== For counts of detected and suppressed errors, rerun with: -v
==32524== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1

```
==32526== Memcheck, a memory error detector
==32526== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32526== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32526== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==32526== 
==32526== 
==32526== HEAP SUMMARY:
==32526==     in use at exit: 24 bytes in 1 blocks
==32526==   total heap usage: 2,341 allocs, 2,340 frees, 274,960 bytes allocated
==32526== 
==32526== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32526==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32526==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32526==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32526==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32526==    by 0x4363F2: ____C_A_T_C_H____T_E_S_T____20() (tests_part1.cpp:171)
==32526==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32526==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32526==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32526==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32526==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32526==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32526==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32526== 
==32526== LEAK SUMMARY:
==32526==    definitely lost: 24 bytes in 1 blocks
==32526==    indirectly lost: 0 bytes in 0 blocks
==32526==      possibly lost: 0 bytes in 0 blocks
==32526==    still reachable: 0 bytes in 0 blocks
==32526==         suppressed: 0 bytes in 0 blocks
==32526== 
==32526== For counts of detected and suppressed errors, rerun with: -v
==32526== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1

```
==32528== Memcheck, a memory error detector
==32528== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32528== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32528== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==32528== 
==32528== 
==32528== HEAP SUMMARY:
==32528==     in use at exit: 24 bytes in 1 blocks
==32528==   total heap usage: 2,341 allocs, 2,340 frees, 274,960 bytes allocated
==32528== 
==32528== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32528==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32528==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32528==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32528==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32528==    by 0x4366EC: ____C_A_T_C_H____T_E_S_T____22() (tests_part1.cpp:181)
==32528==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32528==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32528==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32528==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32528==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32528==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32528==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32528== 
==32528== LEAK SUMMARY:
==32528==    definitely lost: 24 bytes in 1 blocks
==32528==    indirectly lost: 0 bytes in 0 blocks
==32528==      possibly lost: 0 bytes in 0 blocks
==32528==    still reachable: 0 bytes in 0 blocks
==32528==         suppressed: 0 bytes in 0 blocks
==32528== 
==32528== For counts of detected and suppressed errors, rerun with: -v
==32528== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==32530== Memcheck, a memory error detector
==32530== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32530== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32530== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32530== 
==32530== 
==32530== HEAP SUMMARY:
==32530==     in use at exit: 24 bytes in 1 blocks
==32530==   total heap usage: 2,341 allocs, 2,340 frees, 277,360 bytes allocated
==32530== 
==32530== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32530==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32530==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32530==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32530==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32530==    by 0x4369CA: ____C_A_T_C_H____T_E_S_T____24() (tests_part1.cpp:191)
==32530==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32530==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32530==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32530==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32530==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32530==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32530==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32530== 
==32530== LEAK SUMMARY:
==32530==    definitely lost: 24 bytes in 1 blocks
==32530==    indirectly lost: 0 bytes in 0 blocks
==32530==      possibly lost: 0 bytes in 0 blocks
==32530==    still reachable: 0 bytes in 0 blocks
==32530==         suppressed: 0 bytes in 0 blocks
==32530== 
==32530== For counts of detected and suppressed errors, rerun with: -v
==32530== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1

```
==32532== Memcheck, a memory error detector
==32532== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32532== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32532== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==32532== 
==32532== 
==32532== HEAP SUMMARY:
==32532==     in use at exit: 24 bytes in 1 blocks
==32532==   total heap usage: 2,341 allocs, 2,340 frees, 272,560 bytes allocated
==32532== 
==32532== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32532==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32532==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32532==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32532==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32532==    by 0x437346: ____C_A_T_C_H____T_E_S_T____26() (tests_part1.cpp:203)
==32532==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32532==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32532==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32532==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32532==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32532==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32532==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32532== 
==32532== LEAK SUMMARY:
==32532==    definitely lost: 24 bytes in 1 blocks
==32532==    indirectly lost: 0 bytes in 0 blocks
==32532==      possibly lost: 0 bytes in 0 blocks
==32532==    still reachable: 0 bytes in 0 blocks
==32532==         suppressed: 0 bytes in 0 blocks
==32532== 
==32532== For counts of detected and suppressed errors, rerun with: -v
==32532== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==32534== Memcheck, a memory error detector
==32534== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32534== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32534== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32534== 
==32534== 
==32534== HEAP SUMMARY:
==32534==     in use at exit: 24 bytes in 1 blocks
==32534==   total heap usage: 2,341 allocs, 2,340 frees, 277,360 bytes allocated
==32534== 
==32534== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32534==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32534==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32534==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32534==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32534==    by 0x43766E: ____C_A_T_C_H____T_E_S_T____28() (tests_part1.cpp:216)
==32534==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32534==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32534==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32534==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32534==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32534==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32534==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32534== 
==32534== LEAK SUMMARY:
==32534==    definitely lost: 24 bytes in 1 blocks
==32534==    indirectly lost: 0 bytes in 0 blocks
==32534==      possibly lost: 0 bytes in 0 blocks
==32534==    still reachable: 0 bytes in 0 blocks
==32534==         suppressed: 0 bytes in 0 blocks
==32534== 
==32534== For counts of detected and suppressed errors, rerun with: -v
==32534== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1

```
==32536== Memcheck, a memory error detector
==32536== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32536== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32536== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==32536== 
==32536== 
==32536== HEAP SUMMARY:
==32536==     in use at exit: 24 bytes in 1 blocks
==32536==   total heap usage: 2,334 allocs, 2,333 frees, 269,992 bytes allocated
==32536== 
==32536== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32536==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32536==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32536==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32536==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32536==    by 0x43798B: ____C_A_T_C_H____T_E_S_T____30() (tests_part1.cpp:230)
==32536==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32536==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32536==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32536==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32536==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32536==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32536==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32536== 
==32536== LEAK SUMMARY:
==32536==    definitely lost: 24 bytes in 1 blocks
==32536==    indirectly lost: 0 bytes in 0 blocks
==32536==      possibly lost: 0 bytes in 0 blocks
==32536==    still reachable: 0 bytes in 0 blocks
==32536==         suppressed: 0 bytes in 0 blocks
==32536== 
==32536== For counts of detected and suppressed errors, rerun with: -v
==32536== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1

```
==32538== Memcheck, a memory error detector
==32538== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32538== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32538== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==32538== 
==32538== 
==32538== HEAP SUMMARY:
==32538==     in use at exit: 24 bytes in 1 blocks
==32538==   total heap usage: 2,334 allocs, 2,333 frees, 272,392 bytes allocated
==32538== 
==32538== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32538==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32538==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32538==    by 0x439942: List<unsigned int>::_destroy() (List.hpp:41)
==32538==    by 0x4396A4: List<unsigned int>::~List() (List-given.hpp:68)
==32538==    by 0x437C50: ____C_A_T_C_H____T_E_S_T____32() (tests_part1.cpp:239)
==32538==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32538==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32538==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32538==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32538==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32538==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32538==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32538== 
==32538== LEAK SUMMARY:
==32538==    definitely lost: 24 bytes in 1 blocks
==32538==    indirectly lost: 0 bytes in 0 blocks
==32538==      possibly lost: 0 bytes in 0 blocks
==32538==    still reachable: 0 bytes in 0 blocks
==32538==         suppressed: 0 bytes in 0 blocks
==32538== 
==32538== For counts of detected and suppressed errors, rerun with: -v
==32538== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4

```
==32540== Memcheck, a memory error detector
==32540== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32540== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32540== Command: ./test -r xml "List::reverse\ simple"
==32540== 
==32540== 
==32540== HEAP SUMMARY:
==32540==     in use at exit: 24 bytes in 1 blocks
==32540==   total heap usage: 2,190 allocs, 2,189 frees, 262,972 bytes allocated
==32540== 
==32540== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32540==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32540==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32540==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32540==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32540==    by 0x43A7FD: ____C_A_T_C_H____T_E_S_T____0() (test_part2_extra.cpp:29)
==32540==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32540==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32540==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32540==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32540==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32540==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32540==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32540== 
==32540== LEAK SUMMARY:
==32540==    definitely lost: 24 bytes in 1 blocks
==32540==    indirectly lost: 0 bytes in 0 blocks
==32540==      possibly lost: 0 bytes in 0 blocks
==32540==    still reachable: 0 bytes in 0 blocks
==32540==         suppressed: 0 bytes in 0 blocks
==32540== 
==32540== For counts of detected and suppressed errors, rerun with: -v
==32540== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::reverse edge cases

- **Points**: 0 / 2

```
==32542== Memcheck, a memory error detector
==32542== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32542== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32542== Command: ./test -r xml "List::reverse\ edge\ cases"
==32542== 
==32542== 
==32542== HEAP SUMMARY:
==32542==     in use at exit: 24 bytes in 1 blocks
==32542==   total heap usage: 2,336 allocs, 2,335 frees, 267,696 bytes allocated
==32542== 
==32542== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32542==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32542==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32542==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32542==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32542==    by 0x43B58B: ____C_A_T_C_H____T_E_S_T____2() (test_part2_extra.cpp:45)
==32542==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32542==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32542==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32542==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32542==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32542==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32542==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32542== 
==32542== LEAK SUMMARY:
==32542==    definitely lost: 24 bytes in 1 blocks
==32542==    indirectly lost: 0 bytes in 0 blocks
==32542==      possibly lost: 0 bytes in 0 blocks
==32542==    still reachable: 0 bytes in 0 blocks
==32542==         suppressed: 0 bytes in 0 blocks
==32542== 
==32542== For counts of detected and suppressed errors, rerun with: -v
==32542== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5

```
==32544== Memcheck, a memory error detector
==32544== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32544== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32544== Command: ./test -r xml "List::reverseNth\ #3"
==32544== 
==32544== 
==32544== HEAP SUMMARY:
==32544==     in use at exit: 24 bytes in 1 blocks
==32544==   total heap usage: 2,196 allocs, 2,195 frees, 263,152 bytes allocated
==32544== 
==32544== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32544==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32544==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32544==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32544==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32544==    by 0x43BC94: ____C_A_T_C_H____T_E_S_T____4() (test_part2_extra.cpp:60)
==32544==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32544==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32544==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32544==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32544==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32544==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32544==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32544== 
==32544== LEAK SUMMARY:
==32544==    definitely lost: 24 bytes in 1 blocks
==32544==    indirectly lost: 0 bytes in 0 blocks
==32544==      possibly lost: 0 bytes in 0 blocks
==32544==    still reachable: 0 bytes in 0 blocks
==32544==         suppressed: 0 bytes in 0 blocks
==32544== 
==32544== For counts of detected and suppressed errors, rerun with: -v
==32544== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5

```
==32546== Memcheck, a memory error detector
==32546== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32546== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32546== Command: ./test -r xml "List::merge\ #2"
==32546== 
==32546== 
==32546== HEAP SUMMARY:
==32546==     in use at exit: 24 bytes in 1 blocks
==32546==   total heap usage: 2,226 allocs, 2,225 frees, 264,952 bytes allocated
==32546== 
==32546== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32546==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32546==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32546==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32546==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32546==    by 0x43D693: ____C_A_T_C_H____T_E_S_T____6() (test_part2_extra.cpp:85)
==32546==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32546==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32546==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32546==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32546==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32546==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32546==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32546== 
==32546== LEAK SUMMARY:
==32546==    definitely lost: 24 bytes in 1 blocks
==32546==    indirectly lost: 0 bytes in 0 blocks
==32546==      possibly lost: 0 bytes in 0 blocks
==32546==    still reachable: 0 bytes in 0 blocks
==32546==         suppressed: 0 bytes in 0 blocks
==32546== 
==32546== For counts of detected and suppressed errors, rerun with: -v
==32546== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2

```
==32548== Memcheck, a memory error detector
==32548== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32548== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32548== Command: ./test -r xml "List::sort\ simple\ #3"
==32548== 
==32548== 
==32548== HEAP SUMMARY:
==32548==     in use at exit: 24 bytes in 1 blocks
==32548==   total heap usage: 2,187 allocs, 2,186 frees, 262,904 bytes allocated
==32548== 
==32548== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32548==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32548==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32548==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32548==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32548==    by 0x43DE05: ____C_A_T_C_H____T_E_S_T____10() (test_part2_extra.cpp:101)
==32548==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32548==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32548==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32548==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32548==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32548==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32548==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32548== 
==32548== LEAK SUMMARY:
==32548==    definitely lost: 24 bytes in 1 blocks
==32548==    indirectly lost: 0 bytes in 0 blocks
==32548==      possibly lost: 0 bytes in 0 blocks
==32548==    still reachable: 0 bytes in 0 blocks
==32548==         suppressed: 0 bytes in 0 blocks
==32548== 
==32548== For counts of detected and suppressed errors, rerun with: -v
==32548== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4

```
==32550== Memcheck, a memory error detector
==32550== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32550== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32550== Command: ./test -r xml "List::insert\ contents\ #2"
==32550== 
==32550== 
==32550== HEAP SUMMARY:
==32550==     in use at exit: 24 bytes in 1 blocks
==32550==   total heap usage: 2,340 allocs, 2,339 frees, 267,792 bytes allocated
==32550== 
==32550== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32550==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32550==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32550==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32550==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32550==    by 0x44050C: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:28)
==32550==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32550==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32550==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32550==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32550==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32550==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32550==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32550== 
==32550== LEAK SUMMARY:
==32550==    definitely lost: 24 bytes in 1 blocks
==32550==    indirectly lost: 0 bytes in 0 blocks
==32550==      possibly lost: 0 bytes in 0 blocks
==32550==    still reachable: 0 bytes in 0 blocks
==32550==         suppressed: 0 bytes in 0 blocks
==32550== 
==32550== For counts of detected and suppressed errors, rerun with: -v
==32550== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5

```
==32552== Memcheck, a memory error detector
==32552== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32552== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32552== Command: ./test -r xml "List::split\ edge\ cases"
==32552== 
==32552== 
==32552== HEAP SUMMARY:
==32552==     in use at exit: 48 bytes in 2 blocks
==32552==   total heap usage: 2,332 allocs, 2,330 frees, 267,504 bytes allocated
==32552== 
==32552== 24 bytes in 1 blocks are definitely lost in loss record 1 of 2
==32552==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32552==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32552==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32552==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32552==    by 0x438615: List<int>::split(int) (List-given.hpp:111)
==32552==    by 0x44064D: ____C_A_T_C_H____T_E_S_T____2() (tests_part1_extra.cpp:38)
==32552==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32552==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32552==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32552==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32552==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32552==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32552== 
==32552== 24 bytes in 1 blocks are definitely lost in loss record 2 of 2
==32552==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32552==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32552==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32552==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32552==    by 0x441759: ____C_A_T_C_H____T_E_S_T____2() (tests_part1_extra.cpp:48)
==32552==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32552==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32552==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32552==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32552==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32552==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32552==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32552== 
==32552== LEAK SUMMARY:
==32552==    definitely lost: 48 bytes in 2 blocks
==32552==    indirectly lost: 0 bytes in 0 blocks
==32552==      possibly lost: 0 bytes in 0 blocks
==32552==    still reachable: 0 bytes in 0 blocks
==32552==         suppressed: 0 bytes in 0 blocks
==32552== 
==32552== For counts of detected and suppressed errors, rerun with: -v
==32552== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::waterfall simple

- **Points**: 0 / 5

```
==32554== Memcheck, a memory error detector
==32554== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32554== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32554== Command: ./test -r xml "List::waterfall\ simple"
==32554== 
==32554== 
==32554== HEAP SUMMARY:
==32554==     in use at exit: 24 bytes in 1 blocks
==32554==   total heap usage: 2,331 allocs, 2,330 frees, 267,648 bytes allocated
==32554== 
==32554== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==32554==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==32554==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==32554==    by 0x42DA52: List<int>::_destroy() (List.hpp:41)
==32554==    by 0x42B434: List<int>::~List() (List-given.hpp:68)
==32554==    by 0x441E6F: ____C_A_T_C_H____T_E_S_T____4() (tests_part1_extra.cpp:63)
==32554==    by 0x474D42: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==32554==    by 0x465496: Catch::TestCase::invoke() const (catch.hpp:10793)
==32554==    by 0x4653CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==32554==    by 0x461926: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==32554==    by 0x45FEFE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==32554==    by 0x469296: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==32554==    by 0x467F32: Catch::Session::runInternal() (catch.hpp:10149)
==32554== 
==32554== LEAK SUMMARY:
==32554==    definitely lost: 24 bytes in 1 blocks
==32554==    indirectly lost: 0 bytes in 0 blocks
==32554==      possibly lost: 0 bytes in 0 blocks
==32554==    still reachable: 0 bytes in 0 blocks
==32554==         suppressed: 0 bytes in 0 blocks
==32554== 
==32554== For counts of detected and suppressed errors, rerun with: -v
==32554== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true">
        <StdOut>
reached waterfall 1
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aasgha2** using **3083ce0a6f4d72b7b5a567bc6ae88e2ece61f90a** (from **October 9th 2019, 12:15:00 am**)
