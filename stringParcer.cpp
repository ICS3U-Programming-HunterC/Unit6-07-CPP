// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: June, 2022
// This program asks the user to enter a sentence. The program will then call a
// function that accepts the user's sentence as a string and returns a list
// of the words in the sentence. The words will then get displayed, one per
// line without any spaces.


#include <iostream>
#include <list>
#include <string>
#include <iomanip>
#include <cstring>
#include <bits/stdc++.h>


void StringParcer(std::string sentence, std::string del = " ") {
    // splut the sentence into multiple words
    std::string word = "";
    std::cout << "The words in your sentence, without spaces, are: \n";
    std::cout << "\n";
    for (auto x : sentence) {
        if (x == ' ') {
            std::cout << word << "\n";
            word = "";
        } else {
            word = word + x;
        }
    }
    std::cout << word << "\n";
}


main() {
    // declare variables
    std::string sentence;

    // greet the user
    std::cout << "This program will ask the user for a sentence and"
    " then display each word, without spaces, one per line.\n";

    // get the sentence
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    // call the function
    StringParcer(sentence);
}
