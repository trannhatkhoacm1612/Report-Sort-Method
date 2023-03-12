#include <iostream>
#include <string.h>
#include <sstream>
#include <time.h>
#include "processing.h"
#include "heapsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include <algorithm>
#define si 10000000

using namespace std;
int main(){
    // Heapsort
    for(int i = 1; i <= 10; i++){
        clock_t start,end;
        stringstream s;
        s <<   "D:\\CTDL _ GT\\data\\array_" << i << ".csv";
        string path = s.str();
        double *arra = new double[si], time_use;
        preprocessData(path,arra);
        start = clock();
        heapSort(arra, si);
        end = clock();
        time_use = double(end - start) / CLOCKS_PER_SEC;
        writeTimeToFile("time_heapsort", time_use);
        delete[] arra;
    }


    //merge sort
    for(int i = 1; i <= 10; i++){
        clock_t start,end;
        stringstream s;
        s <<   "D:\\CTDL _ GT\\data\\array_" << i << ".csv";
        string path = s.str();
        double *arra = new double[si], time_use;
        preprocessData(path,arra);
        start = clock();
        mergeSort(arra,0,si - 1);
        end = clock();
        time_use = double(end - start) / CLOCKS_PER_SEC;
        writeTimeToFile("time_mergesort", time_use);
        delete[] arra;
    }

    // quicksort
    for(int i = 1; i <= 10; i++){
        clock_t start,end;
        stringstream s;
        s <<   "D:\\CTDL _ GT\\data\\array_" << i << ".csv";
        string path = s.str();
        double *arra = new double[si], time_use;
        preprocessData(path,arra);
        start = clock();
        quickSort(arra,0,si - 1);
        end = clock();
        time_use = double(end - start) / CLOCKS_PER_SEC;
        writeTimeToFile("time_quicksort", time_use);
        delete[] arra;
    }



    // Sort
    for(int i = 1; i <= 10; i++){
        clock_t start,end;
        stringstream s;
        s <<   "D:\\CTDL _ GT\\data\\array_" << i << ".csv";
        string path = s.str();
        double *arra = new double[si], time_use;
        preprocessData(path,arra);
        start = clock();
        sort(arra, arra + si);
        end = clock();
        time_use = double(end - start) / CLOCKS_PER_SEC;
        writeTimeToFile("time_sort", time_use);
        delete[] arra;
    }
}