#include "question2.h"

int modifyValues(int valueParam, int& refParam) {
    valueParam *= 2;
    refParam *= 3;
    return valueParam + refParam;
}