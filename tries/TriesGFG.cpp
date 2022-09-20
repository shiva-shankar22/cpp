
#include "bits/stdc++.h"
using namespace std;

struct TrieNode {


	map<char, TrieNode*> children;

	bool isEndOfWord;


	map<char, int> num;
};

// Declare root node
struct TrieNode* root;

// Function to create New Trie Node
struct TrieNode* getNewTrieNode()
{
	struct TrieNode* pNode = new TrieNode;
	pNode->isEndOfWord = false;
	return pNode;
}

// Function to insert a string in trie
void insertWord(string word)
{
	// To hold the value of root
	struct TrieNode* current = root;

	// To hold letters of the word
	char s;

	// Traverse through strings in list
	for (int i = 0; i < word.length(); i++) {
		s = word[i];

		// If s is not present in the
		// character field of current node
		if (current->children.find(s)
			== current->children.end()) {

			// Get new node
			struct TrieNode* p = getNewTrieNode();

			// Insert s in character
			// field of current node
			// with reference to node p
			(current->children)[s] = p;

			// Insert s in num field
			// of current node with
			// value 1
			(current->num)[s] = 1;
		}
		else {

			// Increment the count
			// corresponding to the
			// character s
			current->num[s] = (current->num)[s] + 1;
		}

		// Go to next node
		current = (current->children)[s];
	}
	current->isEndOfWord = true;
}

// Function to count the number of
// words in trie with given prefix
int countWords(vector<string>& words,
			string prefix)
{
	root = getNewTrieNode();

	// Size of list of string
	int n = words.size();

	// Construct trie containing
	// all the words
	for (int i = 0; i < n; i++) {
		insertWord(words[i]);
	}

	struct TrieNode* current = root;
	char s;

	// Initialize the wordCount = 0
	int wordCount = 0;

	for (int i = 0; prefix[i]; i++) {
		s = prefix[i];

		// If the complete prefix is
		// not present in the trie
		if (current->children.find(s)
			== current->children.end()) {

			// Make wordCount 0 and
			// break out of loop
			wordCount = 0;
			break;
		}

		// Update the wordCount
		wordCount = (current->num)[s];

		// Go to next node
		current = (current->children)[s];
	}

	return wordCount;
}

// Driver Code
int main()
{
	// input list of words
	vector<string> words;
	words = {"abcd"};//{"abc","ab","bc","b"};

	// Given prefix to find
	//string prefix = "a";

	// Print the number of words with
	// given prefix



   for(auto it: words){
       
       string temp="";
       int ans=0;
       for(char ch:it){
            temp+=ch;
            ans+=countWords(words, temp);
         // cout<<countWords(words, temp);
       }
       cout<<ans<<" ";
   }
 
	return 0;
}
