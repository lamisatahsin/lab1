#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int array[size]={1,2,3,4,5};
    int sum =0;
    for (int i=0;i< size; ++i){
        sum+= array[i];
    }
    double average = static_cast<double>(sum)/size;
    std:: cout <<"the average value is :" << average << std :: endl;
    return 0;
}
