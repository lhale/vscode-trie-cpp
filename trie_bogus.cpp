/*
 * Ref: https://github.com/m-renaud/trie
 * 
 * NOTE: This module is broke (as well as trie.hpp) - DO NOT USE
 */
#include <stdafx.h> 
#include "trie.hpp"
#include <iostream>
#include <string>

using namespace mrr;
// using namespace std;


int main() 
{
using std::cout;
trie<char, int> t;
t.insert(std::make_pair("abc", 1));  // "abc" is of type const char*

std::string key;
std::cin >> key;
auto int i = t.find(key);  // We can also use a std::string as a key.

// Usual way of checking for existance of a value.
if (i != std::end(t))
  std::cout << i->first << ": " << i->second << std::end;
}