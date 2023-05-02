#include <string>
#include <vector>
#include<iostream>
#include "SuffixArray.h"
using namespace std;

/**
 * Implement suffix_array() correctly
 */
vector<unsigned int> suffix_array(const string & s) {
    /* YOUR CODE HERE */
    vector<unsigned int> output(s.length());
    for (int i = 0; i<s.length();i++){
        output[i]=i;
    }
    int small= 0;
    int temp = 0;
    int temp2 = 0;
    for(int i = 0; i < s.length()-1; i++){

        for (int j = i+1; j< s.length(); j++){
            if (s.substr(output[j],s.length()).compare(s.substr(output[i],s.length()))<0){

            temp = output[i];
            output[i]=output[j];
            output[j]=temp;

        }
       

        }
    }
return output;
}


