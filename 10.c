#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libs/string/string_.h"

typedef struct WordDescriptor {
    char *begin;
    char *end;
} WordDescriptor;

int getWord(char *beginSearch, WordDescriptor *word) {
    word->begin = findNonSpace(beginSearch);
    if (*word->begin == '\0')
        return 0;
    word->end = findSpace(word->begin);
    return 1;
}

void digitToStart(WordDescriptor word) {
    char *endStringBuffer = copy(word.begin, word.end, _stringBuffer);
    char *recPosition = copyIf(_stringBuffer, endStringBuffer, word.begin, isdigit);
    copyIf(_stringBuffer, endStringBuffer, recPosition, isalpha);
}

void digitToStartInString(char *s) {
    char *beginSearch = s;
    WordDescriptor word;
    while (getWord(beginSearch, &word)) {
        digitToStart(word);
        beginSearch = word.end;
    }
}

void test_digitToStartInString() {
    char s1[] = "";
    digitToStartInString(s1);
    char s11[] = "";
    assert(strcmp_(s1, s11) == 0);
    char s2[] = "q8ik3";
    digitToStartInString(s2);
    char s21[] = "83qik";
    assert(strcmp_(s2, s21) == 0);
    char s3[] = "di 974";
    digitToStartInString(s3);
    char s31[] = "di 974";
    assert(strcmp_(s3, s31) == 0);
    char s4[] = "8te3s 9kick27 12o ";
    digitToStartInString(s4);
    char s41[] = "83tes 927kick 12o ";
    assert(strcmp_(s4, s41) == 0);
}

int main() {

    return 0;
}