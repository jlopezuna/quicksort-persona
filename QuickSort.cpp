//
// Created by kuro_ on 3/5/2021.
//

#include "QuickSort.h"

// quick sort sorting algorithm

void QuickSort::sort(vector<BurbujaSocial *> &listaBS, int low, int high) {
    if(low < high)
    {
        int p = partition(listaBS,low, high);
        sort(listaBS, low, (p-1));  // recursive QS call for left partition
        sort(listaBS, (p+1), high);  // recursive QS call for right partition
    }
}

int QuickSort::partition(vector<BurbujaSocial *> &listaBS, int low, int high){

    BurbujaSocial * pivot = listaBS[high];
    int pIndex = low;

    for(int i = low; i < high; i++)
    {
        if(listaBS[i]->tamano() > pivot->tamano())
        {
            BurbujaSocial * temp = listaBS[i];
            listaBS[i] = listaBS[pIndex];
            listaBS[pIndex] = temp;
            pIndex++;
        }
    }

    BurbujaSocial * temp = listaBS[high];
    listaBS[high] = listaBS[pIndex];
    listaBS[pIndex] = temp;

    return pIndex;
}
