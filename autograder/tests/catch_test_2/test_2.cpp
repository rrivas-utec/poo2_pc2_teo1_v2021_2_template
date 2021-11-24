//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

static void test_2_1() {
    stack<int> s;
    int n = 0;
    cin >> n;
    while (n-- > 0) {
        int value = 0;
        cin >> value;
        s.push(value);
    }
    for_each_adapter(s, [](auto item) {
        cout << item << " ";
    });
    cout << endl;
}

static void test_2_2() {
    queue<int> q;
    int n = 0;
    cin >> n;
    while (n-- > 0) {
        int value = 0;
        cin >> value;
        q.push(value);
    }
    for_each_adapter(q, [](auto item) {
        cout << item << " ";
    });
    cout << endl;
}

static void test_2_3() {
    queue<double> q;
    int n = 0;
    cin >> n;
    auto i = n;
    while (i-- > 0) {
        int value = 0;
        cin >> value;
        q.push(value);
    }
    double total = 0;
    for_each_adapter(q, [&total](auto item) {
        total += item;
    });
    cout << total / n << endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}