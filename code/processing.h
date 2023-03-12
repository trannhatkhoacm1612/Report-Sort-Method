#ifndef PREPROCESSING_H
#define PREPROCESSING_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;
#define si 10000000



void preprocessData(string path_file, double*& arr) {
    string line;
    fstream file(path_file);
    getline(file, line);
    getline(file,line);
        int col = 0;
        string substr;
        stringstream ss(line);

        while(col < si){
            
            getline(ss, substr, ',');
            arr[col] = stod(substr);
            col ++;


    }

}

void writeDataToFile(string path_file, double*& arr) {
    ofstream file(path_file);
    for (int i = 0; i < si; i++) {
        file << arr[i] << ",";
    }
    file << endl;    
}

void writeTimeToFile(string path_file, double time){
    ofstream file;
    file.open(path_file,ios_base::app);
    file << time << " ";
}




#endif