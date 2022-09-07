//
//  main.cpp
//  enigma
//
//  Created by Gerhard Otto on 2022/09/06.
//

#include <iostream>

using namespace std;

//Function for hedding north pointer is the key here

int goNorth(int *upDownCoor) {
    cout << *upDownCoor;
    *upDownCoor = *upDownCoor - 1;
    return *upDownCoor;
}

int goEast(int *leftRightCoor) {
    cout << *leftRightCoor;
    *leftRightCoor = *leftRightCoor + 1;
    return *leftRightCoor;
}

int goSouth(int *upDownCoor) {
    cout << *upDownCoor;
    *upDownCoor = *upDownCoor + 1;
    return *upDownCoor;
}

int goWest(int *leftRightCoor) {
    cout << *leftRightCoor;
    *leftRightCoor = *leftRightCoor - 1;
    return *leftRightCoor;
}

int main(int argc, const char * argv[]) {
    
    const int lRStart = 9, uDStart = 9, lREnd = 0, uDEnd = 17, lRTP = 18, uDTP = 7;
    
    int leftRightCoor, upDownCoor, moveCounter = 0;
    
    bool trap = true;
    
    string sInput;
    
    leftRightCoor = lRStart;
    upDownCoor = uDStart;
    
    //Maze
    
    int arrMaze[19][19] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0},
                            {0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
                            {0,1,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
                            {0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,0},
                            {0,1,1,1,1,1,1,1,0,1,0,1,0,1,0,0,0,1,0},
                            {0,0,0,0,0,1,0,1,0,1,0,0,1,1,1,1,0,1,0},
                            {0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,1,0,1,0},
                            {0,0,1,1,0,1,0,1,0,1,1,1,1,1,0,1,1,1,1/*TP*/},
                            {0,0,0,1,1,1,0,0,0,1/*Start 9.9*/,0,0,1,0,0,1,0,0,0},
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
    
    cout << "this is your start location : " << arrMaze[leftRightCoor][upDownCoor] << endl;
    
    while (upDownCoor != uDEnd && leftRightCoor != lREnd) {
        cout << "In what direction would you be hedding, ";
        cin >> sInput;
        if (sInput == "North"){
            goNorth(&upDownCoor);
        }
        else if (sInput == "East"){
            goEast(&leftRightCoor);
        }
        else if (sInput == "South"){
            goSouth(&leftRightCoor);
        }
        else if (sInput == "West"){
            goWest(&leftRightCoor);
        }
        if (upDownCoor == uDTP && leftRightCoor == lRTP && trap == true) {
            cout << "OH NO! You fell into a trap \nYou pass out...\nFinally you awaken, and you are back at the starting position.\nYou are sad, but must still carry on!\nSo once again...\n";
            leftRightCoor = lRStart;
            upDownCoor = uDStart;
        }
        moveCounter++;
     }
    cout << "You have exited the maze, it took " << moveCounter << "actions!";
    return 0;
}
