//
//  main.cpp
//  enigma
//
//  Created by Gerhard Otto on 2022/09/06.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "hello" << endl;
    bool arrMaze[19][19] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0},
                            {0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
                            {0,1,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
                            {0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,0},
                            {0,1,1,1,1,1,1,1,0,1,0,1,0,1,0,0,0,1,0},
                            {0,0,0,0,0,1,0,1,0,1,0,0,1,1,1,1,0,1,0},
                            {0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,1,0,1,0},
                            {0,0,1,1,0,1,0,1,0,1,1,1,1,1,0,1,1,1,1/*TP*/},
                            {0,0,0,1,1,1,0,0,0,1/*Start*/,0,0,1,0,0,1,0,0,0},
                            {0,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
                            {0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0},
                            {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
                            {0,0,0,0,1,0,0,1,0,0,1,0,1,0,1,0,0,0,0},
                            {0,0,0,0,0,0,0,1,1,1,1,0,1,0,1,0,0,0,0},
                            {0,1,1,1,0,1,1,1,0,0,0,0,1,1,1,1,1,0,0},
                            {0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0},
                            {1/*end*/,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };
    
    cout << arrMaze[3][2];
    return 0;
}
