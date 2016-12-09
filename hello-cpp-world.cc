
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
 
int main() {
    
    srand(time(NULL));
    
    for(int i=0;i<100;i++){
        
         cout <<  rand() % 100 << endl;  //number between 1 and 10
    }
 
     return 0;
}

