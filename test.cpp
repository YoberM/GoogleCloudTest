
// Name of program mainreturn.cpp
#include <iostream>
#include <chrono>
#include <ctime>    
using namespace std;
  
int main(int argc, char** argv)
{
    auto start = std::chrono::system_clock::now();
    cout << "You have entered " << argc
         << " arguments:" << "\n";
    float time = atoi(argv[1]);
    cout << "time " << time <<endl;
    while (true)
    {
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        // cout << elapsed_seconds.count() << endl;
        if(elapsed_seconds.count()>time){
            break;
        }
    }
    
    
    return 0;
}