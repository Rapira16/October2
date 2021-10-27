#include <iostream>
#include <fstream>
#include "Timer.h"  
char letters[] = {'a', 'e', 'i', 'o', 'u'};
template <class T>
void Swap (T& first_number, T& second_number){
    std::swap(first_number, second_number);
}

//------------------------------------//

void find_and_count_if(){
    std::find(book.begin, book.end, letters);
}

void count_if_and_for(){
    for(letters; letters != book.end; book.end++)
    count_if(book.begin, book.end, find_and_count_if);
}

void for_and_find(){
    for(letters; letters != book.end; book.end++)
    std::find(book.begin, book.end, letters);
}

int main(){
    int first_number = 1;
    int second_number = 2;
    std::cout << first_number << ' ' << second_number << std::endl;
    std::swap(first_number, second_number);
    std::cout << first_number << ' ' << second_number << std::endl;
//------------------------------------//

    std::ifstream book("../War and peace.txt");
    count_if(book.begin, book.end, find_and_count_if);
    return 0;
}