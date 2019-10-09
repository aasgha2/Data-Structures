#include "../cs225/catch/catch.hpp"
#include "tests_helper.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "../cs225/PNG.h"
#include "../cs225/HSLAPixel.h"

#include "../List.h"

using namespace cs225;


//
// Non-iterator Tests:
//
TEST_CASE("List::insertFront size", "[weight=1][part=1][valgrind]") {
    List<int> list;


    for (unsigned i = 0; i < 10; i++) {
        list.insertFront(i); }

        cout << "finished making list for test case 1" << endl;


    stringstream s;
    list.print(s);
        cout << "finished printing list for test case 1" << endl;


    REQUIRE( 10 == list.size() );

        cout << "finished test case 1 and list size = " << list.size() << endl;
        cout << list << endl;

}

TEST_CASE("List::insertBack size", "[weight=2][part=1][valgrind]") {
    List<int> list;

    cout << "starting test case 2" << endl;


    for (unsigned i = 0; i < 10; i++) { list.insertBack(i); }

    cout << "finished making list for test case 2" << endl;

    REQUIRE( 10 == list.size() );

    cout << "finished test case 2 and list size = " << list.size() << endl;
    cout << list << endl;
}

TEST_CASE("List::insert contents", "[weight=4][part=1][valgrind]") {
    List<int> list;

    cout << "got here 1" << endl;


    list.insertBack(3);
    cout << "got here 2" << endl;

    list.insertBack(2);
    cout << "got here 3" << endl;

    list.insertBack(1);
    cout << "got here 4" << endl;

    list.insertFront(3);
    cout << "got here 5" << endl;

    list.insertFront(2);
    cout << "got here 6" << endl;

    list.insertFront(1);
    cout << "got here 7" << endl;


    stringstream s;
    list.print(s);

    REQUIRE( "< 1 2 3 3 2 1 >" == s.str() );

    cout << "finished test case 3" << endl;
    cout << list << endl;
}


TEST_CASE("List::waterfall", "[weight=15][part=1]") {

    PNG in;        in.readFromFile("tests/alma.png");
    PNG expected;  expected.readFromFile("tests/expected-waterfall.png");

    List<HSLAPixel> list = imageToList(in);
    list.waterfall();
    PNG out = listToImage(list, in.width(), in.height());
    out.writeToFile("actual-waterfall.png");

    INFO("Your output image saved as actual-waterfall.png");
    REQUIRE( expected == out );
}


TEST_CASE("List::split simple", "[weight=5][part=1][valgrind]") {
    List<int> list;

    list.insertBack(1);
    list.insertBack(2);
    list.insertBack(3);
    list.insertBack(4);

    List<int> slist = list.split(2);
    stringstream s1, s2;

    list.print(s1);
    slist.print(s2);

    REQUIRE( "< 1 2 >" == s1.str() );
    REQUIRE( "< 3 4 >" == s2.str() );
}

TEST_CASE("List::split images", "[weight=5][part=1]") {

    PNG in;         in.readFromFile("tests/split.png");
    PNG expected_1; expected_1.readFromFile("tests/expected-split_1.png");
    PNG expected_2; expected_2.readFromFile("tests/expected-split_2.png");
    PNG expected_3; expected_3.readFromFile("tests/expected-split_3.png");

    List<HSLAPixel> list1;
    for (unsigned i = 0; i < in.width(); i++)
        for (unsigned j = 0; j < in.height(); j++)
            list1.insertBack(in.getPixel(i, j));
    List<HSLAPixel> list2 = list1.split(400 * 240);
    List<HSLAPixel> list3 = list2.split(400 * 240);

    vector<HSLAPixel> im1vect(list1.begin(), list1.end());
    vector<HSLAPixel> im2vect(list2.begin(), list2.end());
    vector<HSLAPixel> im3vect(list3.begin(), list3.end());

    PNG out1(400, 240);
    unsigned x = 0;
    for (unsigned i = 0; i < im1vect.size(); i++) {
        unsigned y = i % 240;
        out1.getPixel(x, y) = im1vect[i];
        if (y == 239) { x++; }
    }
    out1.writeToFile("actual-split_1.png");

    INFO("First split output saved as actual-split_1.png");
    REQUIRE(out1 == expected_1);


    PNG out2(400, 240);
    x = 0;
    for (size_t i = 0; i < im2vect.size(); i++) {
        int y = i % 240;
        out2.getPixel(x, y) = im2vect[i];
        if (y == 239)
            x++;
    }
    out2.writeToFile("actual-split_2.png");

    INFO("Second split output saved as actual-split_2.png");
    REQUIRE(out2 == expected_2);


    PNG out3(400, 240);
    x = 0;
    for (size_t i = 0; i < im3vect.size(); i++) {
        int y = i % 240;
        out3.getPixel(x, y) = im3vect[i];
        if (y == 239)
            x++;
    }
    out3.writeToFile("actual-split_3.png");

    INFO("Third split output saved as actual-split_3.png");
    REQUIRE(out3 == expected_3);
}

TEST_CASE("List::_destroy empty list", "[weight=3][part=1][valgrind]") {

    List<int>* list = new List<int>();
    delete list;

    SUCCEED("Didn't crash!");
}

//
// Iterator Tests:
//
TEST_CASE("List::begin() returns an iterator to the front of the list", "[weight=1][part=1][valgrind]") {
    List<int> list;
    for (unsigned i = 0; i < 10; i++) { list.insertFront(i); }

    List<int>::ListIterator iter = list.begin();
    REQUIRE( *iter == 9 );
}

TEST_CASE("List::ListIterator::operator++ advances the iterator (pre-increment)", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    for (unsigned i = 0; i < 10; i++) { list.insertFront(i); }

    List<unsigned>::ListIterator iter = list.begin();
    ++iter;
    REQUIRE( *iter == 8 );
}

TEST_CASE("List::ListIterator::operator++ advances the iterator (post-increment)", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    for (unsigned i = 0; i < 10; i++) { list.insertFront(i); }

    List<unsigned>::ListIterator iter = list.begin();
    iter++;
    iter++;
    REQUIRE( *iter == 7 );
}

TEST_CASE("List::ListIterator::operator++ (post-increment) returns an un-incremented iterator", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    for (unsigned i = 0; i < 10; i++) { list.insertFront(i); }

    List<unsigned>::ListIterator iter = list.begin();
    List<unsigned>::ListIterator pre = iter++;

    REQUIRE( *pre == 9 );
}

TEST_CASE("List::ListIterator::operator-- moves the iterator backwards", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    for (unsigned i = 0; i < 10; i++) { list.insertFront(i); }

    List<unsigned>::ListIterator iter = list.begin();

    iter++;  REQUIRE( *iter == 8 );
    iter++;  REQUIRE( *iter == 7 );
    iter--;  REQUIRE( *iter == 8 );
    iter--;  REQUIRE( *iter == 9 );
}

TEST_CASE("List::ListIterator::operator-- (post-increment) returns an un-incremented iterator", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    for (unsigned i = 0; i < 10; i++) { list.insertFront(i); }

    List<unsigned>::ListIterator iter = list.begin();

    iter++; // 9 --> 8
    iter++; // 8 --> 7
    List<unsigned>::ListIterator seven = iter--;

    REQUIRE( *seven == 7 );
}

TEST_CASE("List::ListIterator::end is reached", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    list.insertFront(1);
    list.insertFront(2);
    list.insertFront(3);

    List<unsigned>::ListIterator iter = list.begin();
    iter++;
    iter++;
    iter++;

    REQUIRE( (bool)(iter == list.end()) );
}

TEST_CASE("List::ListIterator::end is not ::begin in a non-empty list", "[weight=1][part=1][valgrind]") {
    List<unsigned> list;
    list.insertFront(1);
    list.insertFront(2);
    list.insertFront(3);

    REQUIRE( (bool)(list.begin() != list.end()) );
}
