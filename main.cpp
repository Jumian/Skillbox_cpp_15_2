#include <iostream>
#include "vector"

std::vector<int> arr={2, 7, 11, 15};
int result=9;

void print(std::vector<int> arr){
    for(int i=0;i<arr.size();++i){
        std::cout<<arr[i]<< " ";
    }
    std::cout<<std::endl;
}

void print_pair(std::vector<int> arr,int result){
    for(int i=0;i<arr.size();++i){
        for(int k=i;k<arr.size();++k){
            if(arr[i]+arr[k]==result){
                std::cout<<"Result "<< result<<", first: "<< arr[i] << ", second: "<<arr[k]<<std::endl;
                return;
            }
        }
    }
}

int main() {
    print(arr);
    print_pair(arr,result);
}