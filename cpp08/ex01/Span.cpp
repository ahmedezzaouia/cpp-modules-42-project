#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int n) : size(n) {
}

Span::Span(Span const &s) {
    *this = s;
}

Span &Span::operator=(Span const &s) {
    arr = s.arr;
    size = s.size;
    return *this;
}

Span::~Span() {
}

void Span::addNumber(int n) {
    if (arr.size() < size)
        arr.push_back(n);
    else
        throw maxsizereached();
}

int Span::shortestSpan() {
    if (arr.size() < 2)
        throw notfound();
    std::sort(arr.begin(), arr.end());
    int shortest = arr[1] - arr[0];
    for (std::vector<int>::size_type i = 2; i < arr.size(); i++) {
        if (arr[i] - arr[i-1] < shortest)
            shortest = arr[i] - arr[i-1];
    }
    return shortest;
}

int Span::longestSpan() {
    if (arr.size() < 2)
        throw notfound();
    std::sort(arr.begin(), arr.end());
    return arr.back() - arr.front();
}
