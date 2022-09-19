#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void wordParse(string line, vector<string>* prase){
    // Turn the string into a vector separated by each space for parsing

    // first index for tag or query

    for (int i = 0; i < line.length(); i++) {


    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_of_lines{}, num_of_q{};
    cin >> num_of_lines >> num_of_q;

    // Loop through all the HRML
    bool closed = false;
    for (int i = 0; i < num_of_lines; i++) {
        string readline;
        cin >> readline;

        vector<string> words{};
        vector<string>* p_words = &words;
        wordParse(readline, p_words);



    }

    return 0;
}
