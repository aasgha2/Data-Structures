/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;

void AnagramDict::helper(string word_) {
  string sorted(word_);
  std::sort(sorted.begin(), sorted.end());
  dict[sorted].push_back(word_);
}


/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
  ifstream wordsFile(filename);
  string word;
  if (wordsFile.is_open()) {
    while (getline(wordsFile, word)) {
      helper(word);
    }
  }
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
  for (string word: words) {
    helper(word);
  }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
  string sorted(word);
  std::sort(sorted.begin(), sorted.end());
  if (dict.count(sorted) == 0) return vector<string>();
  return dict.at(sorted);
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
  vector<vector<string>> all;
  for (std::pair<string, vector<std::string>> key_val : dict) {
    vector<string> ana = key_val.second;
      if (!(ana.size() < 2)) {
          all.push_back(ana);
      }
  }
  return all;
}
