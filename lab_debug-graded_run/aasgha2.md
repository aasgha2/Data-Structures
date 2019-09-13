


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c sketchify.cpp -o .objs/sketchify.o
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/sketchify.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [2/2] - Runs without a seg fault

- **Points**: 2 / 2





### ✓ - [1/1] - Produces an output PNG file

- **Points**: 1 / 1





### ✓ - [2/2] - Pixels that are part of the sketch are your favorite color

- **Points**: 2 / 2





### ✓ - [1/1] - Pixels that are NOT part of the sketch are white

- **Points**: 1 / 1





### ✓ - [2/2] - in_01.png produces a correct sketch

- **Points**: 2 / 2





### ✓ - [1/1] - in_02.png produces a correct sketch

- **Points**: 1 / 1





### ✓ - [1/1] - in_03.png produces a correct sketch

- **Points**: 1 / 1





---

This report was generated for **aasgha2** using **cee68ccc12d143f68181bca11480dd8a14e27a99** (from **September 11th 2019, 12:15:00 am**)
