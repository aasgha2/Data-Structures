


## Score: 39/61 (63.93%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/StickerSheet.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✗ - [0/3] - Image doesn't have any memory erorrs

- **Points**: 0 / 3

```
==16333== Memcheck, a memory error detector
==16333== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16333== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16333== Command: ./test -r xml "Image\ doesn't\ have\ any\ memory\ erorrs"
==16333== 
==16333== 
==16333== HEAP SUMMARY:
==16333==     in use at exit: 19,248 bytes in 6 blocks
==16333==   total heap usage: 2,592 allocs, 2,586 frees, 333,528 bytes allocated
==16333== 
==16333== 3,216 (16 direct, 3,200 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 6
==16333==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==16333==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==16333==    by 0x409017: Image::scale(double) (Image.cpp:155)
==16333==    by 0x42A3C8: ____C_A_T_C_H____T_E_S_T____42() (tests-part1.cpp:239)
==16333==    by 0x46AD22: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==16333==    by 0x45B476: Catch::TestCase::invoke() const (catch.hpp:10793)
==16333==    by 0x45B3AC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==16333==    by 0x457906: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==16333==    by 0x455EDE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==16333==    by 0x45F276: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==16333==    by 0x45DF12: Catch::Session::runInternal() (catch.hpp:10149)
==16333==    by 0x45DBDA: Catch::Session::run() (catch.hpp:10106)
==16333== 
==16333== 3,216 (16 direct, 3,200 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 6
==16333==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==16333==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==16333==    by 0x409017: Image::scale(double) (Image.cpp:155)
==16333==    by 0x40926E: Image::scale(unsigned int, unsigned int) (Image.cpp:172)
==16333==    by 0x42A3F5: ____C_A_T_C_H____T_E_S_T____42() (tests-part1.cpp:241)
==16333==    by 0x46AD22: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==16333==    by 0x45B476: Catch::TestCase::invoke() const (catch.hpp:10793)
==16333==    by 0x45B3AC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==16333==    by 0x457906: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==16333==    by 0x455EDE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==16333==    by 0x45F276: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==16333==    by 0x45DF12: Catch::Session::runInternal() (catch.hpp:10149)
==16333== 
==16333== 12,816 (16 direct, 12,800 indirect) bytes in 1 blocks are definitely lost in loss record 6 of 6
==16333==    at 0x4C29BE3: malloc (vg_replace_malloc.c:299)
==16333==    by 0x4E5A9C4: operator new(unsigned long) (in /clang+llvm-6.0.1-x86_64-linux-sles11.3/lib/libc++abi.so.1.0)
==16333==    by 0x409017: Image::scale(double) (Image.cpp:155)
==16333==    by 0x42A3DE: ____C_A_T_C_H____T_E_S_T____42() (tests-part1.cpp:240)
==16333==    by 0x46AD22: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==16333==    by 0x45B476: Catch::TestCase::invoke() const (catch.hpp:10793)
==16333==    by 0x45B3AC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==16333==    by 0x457906: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==16333==    by 0x455EDE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==16333==    by 0x45F276: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==16333==    by 0x45DF12: Catch::Session::runInternal() (catch.hpp:10149)
==16333==    by 0x45DBDA: Catch::Session::run() (catch.hpp:10106)
==16333== 
==16333== LEAK SUMMARY:
==16333==    definitely lost: 48 bytes in 3 blocks
==16333==    indirectly lost: 19,200 bytes in 3 blocks
==16333==      possibly lost: 0 bytes in 0 blocks
==16333==    still reachable: 0 bytes in 0 blocks
==16333==         suppressed: 0 bytes in 0 blocks
==16333== 
==16333== For counts of detected and suppressed errors, rerun with: -v
==16333== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Image doesn't have any memory erorrs" tags="[part=1][valgrind][weight=3]" filename="tests/tests-part1.cpp" line="231">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - A basic StickerSheet works

- **Points**: 5 / 5





### ✗ - [0/1] - StickerSheet::changeMaxStickers() does not discard stickers when resized larger

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard original stickers when resized smaller

- **Points**: 1 / 1





### ✗ - [0/1] - StickerSheet::changeMaxStickers() can increase the number of stickers on an image

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - StickerSheet::changeMaxStickers() discards stickers beyond the end of a smaller StickerSheet

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/1] - StickerSheet::removeSticker() can remove the last sticker

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/1] - StickerSheet::removeSticker() can remove the first sticker

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/1] - StickerSheet::removeSticker() can remove all stickers

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✓ - [1/1] - StickerSheet::getSticker() returns the sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a non-existant sticker

- **Points**: 1 / 1





### ✗ - [0/1] - StickerSheet::getSticker() returns NULL for a removed sticker

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✓ - [1/1] - StickerSheet::translate() translates a sticker's location

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() returns false for a non-existant sticker

- **Points**: 1 / 1





### ✗ - [0/5] - A complex StickerSheet is correct

- **Points**: 0 / 5


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/2] - StickerSheet's copy constructor makes an independent copy

- **Points**: 0 / 2


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/2] - StickerSheet's assignment operator makes an independent copy

- **Points**: 0 / 2


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/3] - StickerSheet doesn't have any memory errors

- **Points**: 0 / 3


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="StickerSheet doesn't have any memory errors" tags="[part=2][timeout=20000][valgrind][weight=3]" filename="tests/tests-part2.cpp" line="279">
      <FatalErrorCondition filename="tests/tests-part2.cpp" line="279">
        SIGABRT - Abort (abnormal termination) signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - myImage.png exists and contains stickers

- **Points**: 10 / 10





---

This report was generated for **aasgha2** using **b3e668c6d10b02f5c811ce8c8d20accc7d3906c9** (from **September 25th 2019, 12:15:00 am**)
