
/* memcpy function is used to copy a block of data from a source address to a destination address.Below is its prototype.

void* memcpy(void* destination, const void* source, size_t num);
*/


class memoryWork {

public:
    void MyMemcpy(void* des, void* src, size_t size);

    memoryWork();
    ~memoryWork()
    {
       
    }

};





#include <iostream>


// void pointers need to be casted in c++

// this function is not dynamic , which means only copies integers 
// your task is to change this to be dynamic using template class 

void memoryWork::MyMemcpy(void* des, void* src, size_t size)
{
    int* nDes = (int*)des;
    int* nScr = (int*)src;

    // now we copy source to destination 
    for (rsize_t i = 0; i < size; i++) {
        nDes[i] = nScr[i];
    }
}

memoryWork::memoryWork()
{
}


int main()
{
    memoryWork* memo = new memoryWork();
    int sourceArray[10] = { 0,1,2,3,4,5,6,7,8,10 };
    int destinationArray[20];
    int n = sizeof(sourceArray) / sizeof(sourceArray[0]);
    memo->MyMemcpy(destinationArray, sourceArray, n);
    
    for (size_t i = 0; i < n; i++) {
        std::cout << destinationArray[i] << std::endl;
    }


    //  memmove 
    std::cout << "memove  -- >>" << std::endl;
    int arr[10] = { 8,3,11,61,-22,7,-6,2,13,47 };
    int* new_arr = &arr[5];

    memmove(new_arr, arr, sizeof(int) * 5);
    std::cout << "new array " << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << new_arr[i] << std::endl;
    std::cout << "old array " << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << std::endl;


    //  memcpy


    char mychararray[] = "Hello world";
    char destArray[10];

    memcpy(destArray, mychararray + 6, 5*sizeof(char));
    memcpy(destArray+5, mychararray, 5*sizeof(char));
    for (int i = 0; i < 10; i++) {
        std::cout << destArray[i];
    }


}