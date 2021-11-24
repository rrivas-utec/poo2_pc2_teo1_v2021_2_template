//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P3.h"
#include <deque>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

static void test_3_1() {
    int value = 0;
    cin >> value;
    deque<int> dq{istream_iterator<int>(cin), istream_iterator<int>()};
    auto result = find_pair_difference(dq, value);
    for (auto [a, b] : result)
        cout << a << " " << b << endl;
}

static void test_3_2() {
    int value = 0;
    cin >> value;
    list<int> ls{istream_iterator<int>(cin), istream_iterator<int>()};
    auto result = find_pair_difference(ls, value);
    for (auto [a, b] : result)
        cout << a << " " << b << endl;
}

static void test_3_3() {
    int value = 0;
    cin >> value;
    vector<int> vc{istream_iterator<int>(cin), istream_iterator<int>()};
    auto result = find_pair_difference(vc, value);
    for (auto [a, b] : result)
        cout << a << " " << b << endl;
}

TEST_CASE("Question #3.1") {
    execute_test("test_3.in", test_3_1);
}

TEST_CASE("Question #3.2") {
    execute_test("test_3.in", test_3_2);
}

TEST_CASE("Question #3.3") {
    execute_test("test_3.in", test_3_3);
}