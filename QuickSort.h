//
// Created by kuro_ on 3/5/2021.
//

#ifndef QUICKSORT_PERSONAS_QUICKSORT_H
#define QUICKSORT_PERSONAS_QUICKSORT_H

#include <vector>
#include "BurbujaSocial.h"

using namespace std;

class QuickSort {
public:
    static void sort(vector<BurbujaSocial *> &listaBS, int low, int high);

private:
    // quick sort sorting algorithm
    static int partition(vector<BurbujaSocial *> &listaBS, int low, int high);

};


#endif //QUICKSORT_PERSONAS_QUICKSORT_H
