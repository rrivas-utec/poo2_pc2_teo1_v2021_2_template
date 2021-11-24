//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
#include <iostream>
#include <iterator>
#include <deque>
#include <utility>
using namespace std;

static void test_1 () {
    int n = 0;
    cin >> n;
    deque<int> dq{istream_iterator<int>(cin), istream_iterator<int>()};
    auto result = replace_less_greater(begin(dq), end(dq));
    for (auto item : result)
        cout << item << " ";
    cout << endl;
}

TEST_CASE("Question #1") {
    execute_test("test_1.in", test_1);
}