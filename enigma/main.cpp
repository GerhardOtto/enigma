//
//  main.cpp
//  enigma
//
//  Created by Gerhard Otto on 2022/09/06.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "hello";
    bool arrMaze[19][19] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {},
                            {}
    };
    
    cout << arrMaze[0][0];
    return 0;
}
