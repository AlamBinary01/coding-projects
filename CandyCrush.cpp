  #include <Windows.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <fstream>
using namespace std;

//The function printalgo prints the entire board in easy mode with a border and Guidelines across the row and column

void printalgo(char easyboard[8][8]) {

    int i = 0;
    int j = 0;
    int k = 0;
    system("cls");
    cout << "\t\t";
    for (i = 0; i < 81; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl;
    for (k = 0; k < 2; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    cout << "\t\t" << static_cast<char>(219) << "\t";
    for (i = 65; i < 73; i++) {
        cout << "\t" << static_cast<char>(i);
    }
    cout << "\t" << static_cast<char>(219) << endl;
    for (k = 0; k < 3; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    for (i = 0; i < 8; i++) {
        cout << "\t\t" << static_cast<char>(219) << "\t" << i + 1 << "\t";
        for (j = 0; j < 8; j++) {
            cout << easyboard[i][j] << "\t";
        }
        cout << static_cast<char>(219) << endl;
        for (k = 0; k < 3; k++) {
            cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
        }
    }
    cout << "\t\t";
    for (i = 0; i < 81; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl << endl << endl;

}

//The function printalgo2 prints the entire board in easy mode with a border and Guidelines across the row and column. This function also prints an arrow nexxt to the selected candy

void printalgo2(int& row, int& col, char easyboard[8][8]) {

    int i = 0;
    int  j = 0;
    int k = 0;
    system("cls");
    cout << "\t\t";
    for (i = 0; i < 81; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl;
    for (k = 0; k < 2; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    cout << "\t\t" << static_cast<char>(219) << "\t";
    for (i = 65; i < 73; i++) {
        cout << "\t" << static_cast<char>(i);
    }
    cout << "\t" << static_cast<char>(219) << endl;
    for (k = 0; k < 3; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    for (i = 0; i < 8; i++) {
        cout << "\t\t" << static_cast<char>(219) << "\t" << i + 1 << "\t";
        for (j = 0; j < 8; j++) {
            if (j == col && i == row) {
                cout << easyboard[i][j] << " <--   ";
            }
            else {
                cout << easyboard[i][j] << "\t";
            }
        }
        cout << static_cast<char>(219) << endl;
        for (k = 0; k < 3; k++) {
            cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
        }
    }
    cout << "\t\t";
    for (i = 0; i < 81; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl << endl << endl;

}

//The function hardprintalgo prints the entire board in hard mode with a border and Guidelines across the row and column

void hardprintalgo(char hardboard[12][12]) {

    int i = 0;
    int j = 0;
    int k = 0;
    system("cls");
    cout << "\t\t";
    for (i = 0; i < 113; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl;
    for (k = 0; k < 2; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    cout << "\t\t" << static_cast<char>(219) << "\t";
    for (i = 65; i < 77; i++) {
        cout << "\t" << static_cast<char>(i);
    }
    cout << "\t" << static_cast<char>(219) << endl;
    for (k = 0; k < 3; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    for (i = 0; i < 12; i++) {
        if (i + 1 < 10) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << i + 1 << "\t";
        }
        else if (i + 1 == 10) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << "A" << "\t";
        }
        else if (i + 1 == 11) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << "B" << "\t";
        }
        else if (i + 1 == 12) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << "C" << "\t";
        }
        for (j = 0; j < 12; j++) {
            cout << hardboard[i][j] << "\t";
        }
        cout << static_cast<char>(219) << endl;
        for (k = 0; k < 3; k++) {
            cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
        }
    }
    cout << "\t\t";
    for (i = 0; i < 113; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl << endl << endl;

}

//The function hardprintalgo2 prints the entire board in hard mode with a border and Guidelines across the row and column. This function also prints an arrow nexxt to the selected candy

void hardprintalgo2(int& row, int& col, char hardboard[12][12]) {

    int i = 0;
    int  j = 0;
    int k = 0;
    system("cls");
    cout << "\t\t";
    for (i = 0; i < 113; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl;
    for (k = 0; k < 2; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    cout << "\t\t" << static_cast<char>(219) << "\t";
    for (i = 65; i < 77; i++) {
        cout << "\t" << static_cast<char>(i);
    }
    cout << "\t" << static_cast<char>(219) << endl;
    for (k = 0; k < 3; k++) {
        cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
    }
    for (i = 0; i < 12; i++) {
        if (i + 1 < 10) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << i + 1 << "\t";
        }
        else if (i + 1 == 10) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << "A" << "\t";
        }
        else if (i + 1 == 11) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << "B" << "\t";
        }
        else if (i + 1 == 12) {
            cout << "\t\t" << static_cast<char>(219) << "\t" << "C" << "\t";
        }
        for (j = 0; j < 12; j++) {
            if (j == col && i == row) {
                cout << hardboard[i][j] << " <--   ";
            }
            else {
                cout << hardboard[i][j] << "\t";
            }
        }
        cout << static_cast<char>(219) << endl;
        for (k = 0; k < 3; k++) {
            cout << "\t\t" << static_cast<char>(219) << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << static_cast<char>(219) << endl;
        }
    }
    cout << "\t\t";
    for (i = 0; i < 113; i++) {
        cout << static_cast<char>(219);
    }
    cout << endl << endl << endl;

}

//The function rnd3 scans the whole board in easy mode repeatedly for any possible matches (3 in a row). This function also shows the matches by a blinking animation and indicates through bool if a match is found or not.

void rnd3(int& rndcap, int& random, int& points, bool& match, char easycandy[6], char easyboard[8][8]) {
    
    int i, j;
    char temp1, temp2, temp3;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((easyboard[i][j] == easyboard[i + 1][j]) && (easyboard[i][j] == easyboard[i + 2][j])) {
                temp1 = easyboard[i][j];
                temp2 = easyboard[i + 1][j];
                temp3 = easyboard[i + 2][j];
                for (int k = 2; k > 0; k--) {
                    easyboard[i][j] = static_cast<char>(219);
                    easyboard[i + 1][j] = static_cast<char>(219);
                    easyboard[i + 2][j] = static_cast<char>(219);
                    printalgo(easyboard);
                    cout << "\t\tSweet\n";
                    Sleep(600);
                    easyboard[i][j] = temp1;
                    easyboard[i + 1][j] = temp2;
                    easyboard[i + 2][j] = temp3;
                    printalgo(easyboard);
                    cout << "\t\tSweet\n";
                    Sleep(600);
                }
                random = rand() % rndcap;
                easyboard[i][j] = easycandy[random];
                random = rand() % rndcap;
                easyboard[i + 1][j] = easycandy[random];
                do {
                    random = rand() % rndcap;
                    easyboard[i + 2][j] = easycandy[random];
                } while ((easyboard[i][j] == easyboard[i + 1][j]) && (easyboard[i][j] == easyboard[i + 2][j]));
                match = true;
                points = points + 10;
                i = 0; j = 0;
            }
            else {
                if (j < 6) {
                    if ((easyboard[i][j] == easyboard[i][j + 1]) && (easyboard[i][j] == easyboard[i][j + 2])) {
                        temp1 = easyboard[i][j];
                        temp2 = easyboard[i][j + 1];
                        temp3 = easyboard[i][j + 2];
                        for (int k = 2; k > 0; k--) {
                            easyboard[i][j] = static_cast<char>(219);
                            easyboard[i][j + 1] = static_cast<char>(219);
                            easyboard[i][j + 2] = static_cast<char>(219);
                            printalgo(easyboard);
                            cout << "\t\tSweet\n";
                            Sleep(600);
                            easyboard[i][j] = temp1;
                            easyboard[i][j + 1] = temp2;
                            easyboard[i][j + 2] = temp3;
                            printalgo(easyboard);
                            cout << "\t\tSweet\n";
                            Sleep(600);
                        }
                        random = rand() % rndcap;
                        easyboard[i][j] = easycandy[random];
                        random = rand() % rndcap;
                        easyboard[i][j + 1] = easycandy[random];
                        do {
                            random = rand() % rndcap;
                            easyboard[i][j + 2] = easycandy[random];
                        } while ((easyboard[i][j] == easyboard[i][j + 1]) && (easyboard[i][j] == easyboard[i][j + 2]));
                        match = true;
                        points = points + 10;
                        i = 0; j = 0;
                    }
                }
            }
        }
    }
}

//The function rnd4 scans the whole board in easy mode repeatedly for any possible matches (4 in a row). This function also shows the matches by a blinking animation and indicates through bool if a match is found or not. If a match is found, the Bomb(B) is printed in the place of the last move.

void rnd4(int& rndcap, int& random, int& points, int& row, int& col, bool& match, char easycandy[6], char easyboard[8][8]) {

    int i, j;
    char temp1, temp2, temp3, temp4;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((easyboard[i][j] == easyboard[i + 1][j]) && (easyboard[i][j] == easyboard[i + 2][j]) && (easyboard[i][j] == easyboard[i + 3][j])) {
                temp1 = easyboard[i][j];
                temp2 = easyboard[i + 1][j];
                temp3 = easyboard[i + 2][j];
                temp4 = easyboard[i + 3][j];
                for (int k = 2; k > 0; k--) {
                    easyboard[i][j] = static_cast<char>(219);
                    easyboard[i + 1][j] = static_cast<char>(219);
                    easyboard[i + 2][j] = static_cast<char>(219);
                    easyboard[i + 3][j] = static_cast<char>(219);
                    printalgo(easyboard);
                    cout << "\t\tDelicious\n";
                    Sleep(600);
                    easyboard[i][j] = temp1;
                    easyboard[i + 1][j] = temp2;
                    easyboard[i + 2][j] = temp3;
                    easyboard[i + 3][j] = temp4;
                    printalgo(easyboard);
                    cout << "\t\tDelicious\n";
                    Sleep(600);
                }
                random = rand() % rndcap;
                easyboard[i][j] = easycandy[random];
                random = rand() % rndcap;
                easyboard[i + 1][j] = easycandy[random];
                do {
                    random = rand() % rndcap;
                    easyboard[i + 2][j] = easycandy[random];
                } while ((easyboard[i][j] == easyboard[i + 1][j]) && (easyboard[i][j] == easyboard[i + 2][j]));
                do {
                    random = rand() % rndcap;
                    easyboard[i + 3][j] = easycandy[random];
                } while ((easyboard[i + 1][j] == easyboard[i + 2][j]) && (easyboard[i + 1][j] == easyboard[i + 3][j]));
                easyboard[row][col] = 'B';
                match = true;
                points = points + 20;

                i = 0; j = 0;
            }
            else {
                if (j < 5) {
                    if ((easyboard[i][j] == easyboard[i][j + 1]) && (easyboard[i][j] == easyboard[i][j + 2]) && (easyboard[i][j] == easyboard[i][j + 3])) {
                        temp1 = easyboard[i][j];
                        temp2 = easyboard[i][j + 1];
                        temp3 = easyboard[i][j + 2];
                        temp4 = easyboard[i][j + 3];
                        for (int k = 2; k > 0; k--) {
                            easyboard[i][j] = static_cast<char>(219);
                            easyboard[i][j + 1] = static_cast<char>(219);
                            easyboard[i][j + 2] = static_cast<char>(219);
                            easyboard[i][j + 3] = static_cast<char>(219);
                            printalgo(easyboard);
                            cout << "\t\tDelicious\n";
                            Sleep(600);
                            easyboard[i][j] = temp1;
                            easyboard[i][j + 1] = temp2;
                            easyboard[i][j + 2] = temp3;
                            easyboard[i][j + 3] = temp3;
                            printalgo(easyboard);
                            cout << "\t\tDelicious\n";
                            Sleep(600);
                        }
                        random = rand() % rndcap;
                        easyboard[i][j] = easycandy[random];
                        random = rand() % rndcap;
                        easyboard[i][j + 1] = easycandy[random];
                        do {
                            random = rand() % rndcap;
                            easyboard[i][j + 2] = easycandy[random];
                        } while ((easyboard[i][j] == easyboard[i][j + 1]) && (easyboard[i][j] == easyboard[i][j + 2]));
                        do {
                            random = rand() % rndcap;
                            easyboard[i][j + 2] = easycandy[random];
                        } while ((easyboard[i][j + 1] == easyboard[i][j + 2]) && (easyboard[i][j + 1] == easyboard[i][j + 3]));
                        easyboard[row][col] = 'B';
                        match = true;
                        points = points + 20;
                        i = 0; j = 0;
                    }
                }
            }
        }
    }
}

//The function randomizer generates the entire board in easy mode where candies are not 3 in a row by default

void randomizer(int& random, int& rndcap, int& count, char easycandy[6], char easyboard[8][8]) {

    int i = 0;
    int j = 0;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            random = rand() % rndcap;
            if ((easycandy[random] != easyboard[i - 2][j]) && (easycandy[random] != easyboard[i][j - 2])) {
                easyboard[i][j] = easycandy[random];
                if (random == 4) {
                    count++;
                }
                if (count >= 5) {
                    rndcap = 4;
                }
            }
            else {
                j--;
            }
        }
    }
}

//The function noswap checks to see if there are any possible moves in easy mode and shuffles the entire board if there are no moves possible.

void noswap(int& random, int& rndcap, int& count, char easycandy[6], char easyboard[8][8]) {

    bool possibility = false;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    char temp;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i - 1][j];
            easyboard[i - 1][j] = temp;
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    if ((easyboard[k][l] == easyboard[k + 1][l]) && (easyboard[k][l] == easyboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 6) {
                            if ((easyboard[k][l] == easyboard[k][l + 1]) && (easyboard[k][l] == easyboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i - 1][j];
            easyboard[i - 1][j] = temp;
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i + 1][j];
            easyboard[i + 1][j] = temp;
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    if ((easyboard[k][l] == easyboard[k + 1][l]) && (easyboard[k][l] == easyboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 6) {
                            if ((easyboard[k][l] == easyboard[k][l + 1]) && (easyboard[k][l] == easyboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i + 1][j];
            easyboard[i + 1][j] = temp;
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i][j - 1];
            easyboard[i][j - 1] = temp;
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    if ((easyboard[k][l] == easyboard[k + 1][l]) && (easyboard[k][l] == easyboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 6) {
                            if ((easyboard[k][l] == easyboard[k][l + 1]) && (easyboard[k][l] == easyboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i][j - 1];
            easyboard[i][j - 1] = temp;
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i][j + 1];
            easyboard[i][j + 1] = temp;
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    if ((easyboard[k][l] == easyboard[k + 1][l]) && (easyboard[k][l] == easyboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 6) {
                            if ((easyboard[k][l] == easyboard[k][l + 1]) && (easyboard[k][l] == easyboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = easyboard[i][j];
            easyboard[i][j] = easyboard[i][j + 1];
            easyboard[i][j + 1] = temp;
        }
    }
    if (possibility == false) {
        cout << "No more possible switchs...\nShuffling";
        Sleep(1500);
        randomizer(random, rndcap, count, easycandy, easyboard);
    }
}

//The function hardrnd3 scans the whole board in hard mode repeatedly for any possible matches (3 in a row). This function also shows the matches by a blinking animation and indicates through bool if a match is found or not.

void hardrnd3(int& rndcap2, int& random, int& points, bool& match, char hardcandy[9], char hardboard[12][12]) {

    int i, j;
    char temp1, temp2, temp3;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if ((hardboard[i][j] == hardboard[i + 1][j]) && (hardboard[i][j] == hardboard[i + 2][j])) {
                temp1 = hardboard[i][j];
                temp2 = hardboard[i + 1][j];
                temp3 = hardboard[i + 2][j];
                for (int k = 2; k > 0; k--) {
                    hardboard[i][j] = static_cast<char>(219);
                    hardboard[i + 1][j] = static_cast<char>(219);
                    hardboard[i + 2][j] = static_cast<char>(219);
                    hardprintalgo(hardboard);
                    cout << "\t\tSweet\n";
                    Sleep(600);
                    hardboard[i][j] = temp1;
                    hardboard[i + 1][j] = temp2;
                    hardboard[i + 2][j] = temp3;
                    hardprintalgo(hardboard);
                    cout << "\t\tSweet\n";
                    Sleep(600);
                }
                random = rand() % rndcap2;
                hardboard[i][j] = hardcandy[random];
                random = rand() % rndcap2;
                hardboard[i + 1][j] = hardcandy[random];
                do {
                    random = rand() % rndcap2;
                    hardboard[i + 2][j] = hardcandy[random];
                } while ((hardboard[i][j] == hardboard[i + 1][j]) && (hardboard[i][j] == hardboard[i + 2][j]));
                match = true;
                points = points + 10;
                i = 0; j = 0;
            }
            else {
                if (j < 10) {
                    if ((hardboard[i][j] == hardboard[i][j + 1]) && (hardboard[i][j] == hardboard[i][j + 2])) {
                        temp1 = hardboard[i][j];
                        temp2 = hardboard[i][j + 1];
                        temp3 = hardboard[i][j + 2];
                        for (int k = 2; k > 0; k--) {
                            hardboard[i][j] = static_cast<char>(219);
                            hardboard[i][j + 1] = static_cast<char>(219);
                            hardboard[i][j + 2] = static_cast<char>(219);
                            hardprintalgo(hardboard);
                            cout << "\t\tSweet\n";
                            Sleep(600);
                            hardboard[i][j] = temp1;
                            hardboard[i][j + 1] = temp2;
                            hardboard[i][j + 2] = temp3;
                            hardprintalgo(hardboard);
                            cout << "\t\tSweet\n";
                            Sleep(600);
                        }
                        random = rand() % rndcap2;
                        hardboard[i][j] = hardcandy[random];
                        random = rand() % rndcap2;
                        hardboard[i][j + 1] = hardcandy[random];
                        do {
                            random = rand() % rndcap2;
                            hardboard[i][j + 2] = hardcandy[random];
                        } while ((hardboard[i][j] == hardboard[i][j + 1]) && (hardboard[i][j] == hardboard[i][j + 2]));
                        match = true;
                        points = points + 10;
                        i = 0; j = 0;
                    }
                }
            }
        }
    }
}

//The function hardrnd4 scans the whole board in hard mode repeatedly for any possible matches (4 in a row). This function also shows the matches by a blinking animation and indicates through bool if a match is found or not. If a match is found, the Bomb(B) is printed in the place of the last move.

void hardrnd4(int& rndcap2, int& random, int& points, int& row, int& col, bool& match, char hardcandy[9], char hardboard[12][12]) {

    int i, j;
    char temp1, temp2, temp3, temp4;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {

            if ((hardboard[i][j] == hardboard[i + 1][j]) && (hardboard[i][j] == hardboard[i + 2][j]) && (hardboard[i][j] == hardboard[i + 3][j])) {
                temp1 = hardboard[i][j];
                temp2 = hardboard[i + 1][j];
                temp3 = hardboard[i + 2][j];
                temp4 = hardboard[i + 3][j];
                for (int k = 2; k > 0; k--) {
                    hardboard[i][j] = static_cast<char>(219);
                    hardboard[i + 1][j] = static_cast<char>(219);
                    hardboard[i + 2][j] = static_cast<char>(219);
                    hardboard[i + 3][j] = static_cast<char>(219);
                    hardprintalgo(hardboard);
                    cout << "\t\tDelicious\n";
                    Sleep(600);
                    hardboard[i][j] = temp1;
                    hardboard[i + 1][j] = temp2;
                    hardboard[i + 2][j] = temp3;
                    hardboard[i + 3][j] = temp4;
                    hardprintalgo(hardboard);
                    cout << "\t\tDelicious\n";
                    Sleep(600);
                }
                random = rand() % rndcap2;
                hardboard[i][j] = hardcandy[random];
                random = rand() % rndcap2;
                hardboard[i + 1][j] = hardcandy[random];
                do {
                    random = rand() % rndcap2;
                    hardboard[i + 2][j] = hardcandy[random];
                } while ((hardboard[i][j] == hardboard[i + 1][j]) && (hardboard[i][j] == hardboard[i + 2][j]));
                do {
                    random = rand() % rndcap2;
                    hardboard[i + 3][j] = hardcandy[random];
                } while ((hardboard[i + 1][j] == hardboard[i + 2][j]) && (hardboard[i + 1][j] == hardboard[i + 3][j]));
                hardboard[row][col] = 'B';
                match = true;
                points = points + 20;

                i = 0; j = 0;
            }
            else {
                if (j < 9) {
                    if ((hardboard[i][j] == hardboard[i][j + 1]) && (hardboard[i][j] == hardboard[i][j + 2]) && (hardboard[i][j] == hardboard[i][j + 3])) {
                        temp1 = hardboard[i][j];
                        temp2 = hardboard[i][j + 1];
                        temp3 = hardboard[i][j + 2];
                        temp4 = hardboard[i][j + 3];
                        for (int k = 2; k > 0; k--) {
                            hardboard[i][j] = static_cast<char>(219);
                            hardboard[i][j + 1] = static_cast<char>(219);
                            hardboard[i][j + 2] = static_cast<char>(219);
                            hardboard[i][j + 3] = static_cast<char>(219);
                            hardprintalgo(hardboard);
                            cout << "\t\tDelicious\n";
                            Sleep(600);
                            hardboard[i][j] = temp1;
                            hardboard[i][j + 1] = temp2;
                            hardboard[i][j + 2] = temp3;
                            hardboard[i][j + 3] = temp3;
                            hardprintalgo(hardboard);
                            cout << "\t\tDelicious\n";
                            Sleep(600);
                        }
                        random = rand() % rndcap2;
                        hardboard[i][j] = hardcandy[random];
                        random = rand() % rndcap2;
                        hardboard[i][j + 1] = hardcandy[random];
                        do {
                            random = rand() % rndcap2;
                            hardboard[i][j + 2] = hardcandy[random];
                        } while ((hardboard[i][j] == hardboard[i][j + 1]) && (hardboard[i][j] == hardboard[i][j + 2]));
                        do {
                            random = rand() % rndcap2;
                            hardboard[i][j + 2] = hardcandy[random];
                        } while ((hardboard[i][j + 1] == hardboard[i][j + 2]) && (hardboard[i][j + 1] == hardboard[i][j + 3]));
                        hardboard[row][col] = 'B';
                        match = true;
                        points = points + 20;
                        i = 0; j = 0;
                    }
                }
            }
        }
    }
}

//The function randomizer generates the entire board in hard mode where candies are not 3 in a row by default

void randomizerhard(int& random, int& rndcap2, int& count, char hardcandy[9], char hardboard[12][12]) {

    int i = 0;
    int j = 0;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            random = rand() % rndcap2;
            if ((hardcandy[random] != hardboard[i - 2][j]) && (hardcandy[random] != hardboard[i][j - 2])) {
                hardboard[i][j] = hardcandy[random];
                if (random == 7) {
                    count++;
                }
                if (count >= 10) {
                    rndcap2 = 6;
                }
            }
            else {
                j--;
            }
        }
    }
}

//The function noswap checks to see if there are any possible moves in hard mode and shuffles the entire board if there are no moves possible.

void hardnoswap(int& random, int& rndcap2, int& count, char hardcandy[9], char hardboard[12][12]) {

    bool possibility = false;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    char temp;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i - 1][j];
            hardboard[i - 1][j] = temp;
            for (k = 0; k < 12; k++) {
                for (l = 0; l < 12; l++) {
                    if ((hardboard[k][l] == hardboard[k + 1][l]) && (hardboard[k][l] == hardboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 9) {
                            if ((hardboard[k][l] == hardboard[k][l + 1]) && (hardboard[k][l] == hardboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i - 1][j];
            hardboard[i - 1][j] = temp;
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i + 1][j];
            hardboard[i + 1][j] = temp;
            for (k = 0; k < 12; k++) {
                for (l = 0; l < 12; l++) {
                    if ((hardboard[k][l] == hardboard[k + 1][l]) && (hardboard[k][l] == hardboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 9) {
                            if ((hardboard[k][l] == hardboard[k][l + 1]) && (hardboard[k][l] == hardboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i + 1][j];
            hardboard[i + 1][j] = temp;
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i][j - 1];
            hardboard[i][j - 1] = temp;
            for (k = 0; k < 12; k++) {
                for (l = 0; l < 12; l++) {
                    if ((hardboard[k][l] == hardboard[k + 1][l]) && (hardboard[k][l] == hardboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 9) {
                            if ((hardboard[k][l] == hardboard[k][l + 1]) && (hardboard[k][l] == hardboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i][j - 1];
            hardboard[i][j - 1] = temp;
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i][j + 1];
            hardboard[i][j + 1] = temp;
            for (k = 0; k < 12; k++) {
                for (l = 0; l < 12; l++) {
                    if ((hardboard[k][l] == hardboard[k + 1][l]) && (hardboard[k][l] == hardboard[k + 2][l])) {
                        possibility = true;
                    }
                    else {
                        if (l < 9) {
                            if ((hardboard[k][l] == hardboard[k][l + 1]) && (hardboard[k][l] == hardboard[k][l + 2])) {
                                possibility = true;
                            }
                        }
                    }
                }
            }
            temp = hardboard[i][j];
            hardboard[i][j] = hardboard[i][j + 1];
            hardboard[i][j + 1] = temp;
        }
    }
    if (possibility == false) {
        cout << "No more possible switchs...\nShuffling";
        Sleep(1500);
        randomizerhard(random, rndcap2, count, hardcandy, hardboard);
    }
}

int main() {

    int menuaddress, menu, menu2, menu3;
    int random, i, j, k, rndcap = 5, count = 0, row, col, timer = 0, direc, points = 0, moves = 15, choiceconf;
    char temp, charcol, tempeasyboard[8][8], easyboard[8][8], graphiceasyboard[8][8], easycandy[6] = { '#', '@', '&', '$', 'H', '\0' };
    bool match = false;
    int  rndcap2 = 8;
    char temphardboard[12][12], hardboard[12][12], graphichardboard[12][12], hardcandy[9] = { '#', '@', '&', '$','~','%','=', 'H', '\0' };
    string playername, line;
    fstream scoreeasy, scorehard;

    // The main program is in an infinite loop so that the program always returns to the main page and doesn't end until the exit option is selected.

    while (1) {

        //The entire game is menu driven and is controlled by the _getch() function which allows the user to interact only with arrow keys and confirm using the enter key.

        system("cls");
        cout << "\n\t\t\t   _____                _          _____                _     " << endl;
        cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
        cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
        cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
        cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
        cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
        cout << "\t\t\t                           __/ |                              " << endl;
        cout << "\t\t\t                          |___/                               " << endl;
        cout << "\n\n\n\t\t\t                           -> Play" << endl;
        cout << "\n\t\t\t                              Credits" << endl;
        cout << "\n\t\t\t                              Rules" << endl;
        cout << "\n\t\t\t                              Scores" << endl;
        cout << "\n\t\t\t                              Exit" << endl;
        menu = 1;

        do {
            menuaddress = _getch();
            if (menuaddress == 224 && menu == 1) {
                switch (_getch()) {
                case 72:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                           -> Exit" << endl;
                    menu = 5;
                    break;
                case 80:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                           -> Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 2;
                    break;
                }
            }
            else if (menuaddress == 224 && menu == 2) {
                switch (_getch()) {
                case 72:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                           -> Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 1;
                    break;
                case 80:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                           -> Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 3;
                    break;
                }
            }
            else if (menuaddress == 224 && menu == 3) {
                switch (_getch()) {
                case 72:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                           -> Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 2;
                    break;
                case 80:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                           -> Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 4;
                    break;
                }
            }
            else if (menuaddress == 224 && menu == 4) {
                switch (_getch()) {
                case 72:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                           -> Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 3;
                    break;
                case 80:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                           -> Exit" << endl;
                    menu = 5;
                    break;
                }
            }
            else if (menuaddress == 224 && menu == 5) {
                switch (_getch()) {
                case 72:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                              Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                           -> Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 4;
                    break;
                case 80:
                    system("cls");
                    cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                    cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                    cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                    cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                    cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                    cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                    cout << "\t\t\t                           __/ |                              " << endl;
                    cout << "\t\t\t                          |___/                               " << endl;
                    cout << "\n\n\n\t\t\t                           -> Play" << endl;
                    cout << "\n\t\t\t                              Credits" << endl;
                    cout << "\n\t\t\t                              Rules" << endl;
                    cout << "\n\t\t\t                              Scores" << endl;
                    cout << "\n\t\t\t                              Exit" << endl;
                    menu = 1;
                    break;
                }
            }
        } while (menuaddress != 13);//The main page will be looped until the enter key is pressed which will select the hhighlighted option


        
        switch (menu) {

            //This switch will be applied on the selected option

        case 1:

            //This case is the play option which will then ask the user to choose from either the easy mode or the hard mode

            system("cls");
            cout << "\n\t\t\t   _____                _          _____                _     " << endl;
            cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
            cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
            cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
            cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
            cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
            cout << "\t\t\t                           __/ |                              " << endl;
            cout << "\t\t\t                          |___/                               " << endl;
            cout << "\n\n\n\t\t\t                           -> Easy mode" << endl;
            cout << "\n\t\t\t                              Hard mode" << endl;
            menu2 = 1;

            do {
                menuaddress = _getch();
                if (menuaddress == 224 && menu2 == 1) {
                    switch (_getch()) {
                    case 72:
                        system("cls");
                        cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                        cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                        cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                        cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                        cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                        cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                        cout << "\t\t\t                           __/ |                              " << endl;
                        cout << "\t\t\t                          |___/                               " << endl;
                        cout << "\n\n\n\t\t\t                              Easy mode" << endl;
                        cout << "\n\t\t\t                           -> Hard mode" << endl;
                        menu2 = 2;
                        break;
                    case 80:
                        system("cls");
                        cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                        cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                        cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                        cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                        cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                        cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                        cout << "\t\t\t                           __/ |                              " << endl;
                        cout << "\t\t\t                          |___/                               " << endl;
                        cout << "\n\n\n\t\t\t                              Easy mode" << endl;
                        cout << "\n\t\t\t                           -> Hard mode" << endl;
                        menu2 = 2;
                        break;
                    }
                }
                else if (menuaddress == 224 && menu2 == 2) {
                    switch (_getch()) {
                    case 72:
                        system("cls");
                        cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                        cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                        cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                        cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                        cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                        cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                        cout << "\t\t\t                           __/ |                              " << endl;
                        cout << "\t\t\t                          |___/                               " << endl;
                        cout << "\n\n\n\t\t\t                           -> Easy mode" << endl;
                        cout << "\n\t\t\t                              Hard mode" << endl;
                        menu2 = 1;
                        break;
                    case 80:
                        system("cls");
                        cout << "\n\t\t\t   _____                _          _____                _     " << endl;
                        cout << "\t\t\t  / ____|              | |        / ____|              | |    " << endl;
                        cout << "\t\t\t | |     __ _ _ __   __| |_   _  | |     _ __ _   _ ___| |__  " << endl;
                        cout << "\t\t\t | |    / _` | '_ \\ / _` | | | | | |    | '__| | | / __| '_ \\ " << endl;
                        cout << "\t\t\t | |___| (_| | | | | (_| | |_| | | |____| |  | |_| \\__ \\ | | |" << endl;
                        cout << "\t\t\t  \\_____\\__,_|_| |_|\\__,_|\\__, |  \\_____|_|   \\__,_|___/_| |_|" << endl;
                        cout << "\t\t\t                           __/ |                              " << endl;
                        cout << "\t\t\t                          |___/                               " << endl;
                        cout << "\n\n\n\t\t\t                           -> Easy mode" << endl;
                        cout << "\n\t\t\t                              Hard mode" << endl;
                        menu2 = 1;
                        break;
                    }

                }
            } while (menuaddress != 13);

            //This switch is applied on the selected game mode.

            switch (menu2) {
            case 1:

                //This case is the beginning of the easy mode

                //Asking the player to enter the name

                srand(time(0));
                cout << "\t\t\t  _____  _                                                     " << endl;
                cout << "\t\t\t |  __ \\| |                                                    " << endl;
                cout << "\t\t\t | |__) | | __ _ _   _  ___ _ __   _ __   __ _ _ __ ___   ___  " << endl;
                cout << "\t\t\t |  ___/| |/ _` | | | |/ _ \\ '__| | '_ \\ / _` | '_ ` _ \\ / _ \\ " << endl;
                cout << "\t\t\t | |    | | (_| | |_| |  __/ |    | | | | (_| | | | | | |  __/ " << endl;
                cout << "\t\t\t |_|    |_|\\__,_|\\__, |\\___|_|    |_| |_|\\__,_|_| |_| |_|\\___| " << endl;
                cout << "\t\t\t                  __/ |                                        " << endl;
                cout << "\t\t\t                 |___/ " << endl;
                cout << "\n\n\n\t\t\t\t\t\tEnter Player name: ";
                getline(cin, playername);

                //5 second countdown timer for before the game starts

                for (k = 5; k > 0; k--) {
                    system("cls");
                    cout << "\n\n\n\n\n\t\t\t\t\t\tGame starts in: " << k << endl << endl;
                    cout << "\n\n\n\t\t\t     It is recommended that you play the game in fullscreen\n";
                    cout << "\n\t\t\t     Hurdles (H) Cannot be swapped\n";
                    cout << "\n\t\t\t     You have a total of 15 moves and 60 seconds\n";
                    Sleep(1000);
                }
                system("cls");

                //Randomizing the candies

                randomizer(random, rndcap, count, easycandy, easyboard);

                
                do {//asks player to enter a cand until the time runs out or the moves run out
                    do {//asks player to enter a candy until he confirms the selected candy
                        do {//asks player to enter a candy until the selected candy is not a hurdle

                            noswap(random, rndcap, count, easycandy, easyboard);

                            rnd3(rndcap, random, points, match, easycandy, easyboard);

                            match = false;//sets the match bool to false, This will be used to determine an invalid move

                            printalgo(easyboard);

                            cout << "\t\tSelect the candy to swap it...\n";
                            do {
                                cout << "\t\tPlease select a column (A-H) \n";
                                while (_kbhit() == false) {//This is the timer which keeps on running until a key is pressed on the keyboard
                                    Sleep(1000);
                                    ++timer;
                                }
                                col = _getch();//The pressed key is taken as input instantly
                            } while (col != 65 && col != 66 && col != 67 && col != 68 && col != 69 && col != 70 && col != 71 && col != 72);
                            do {
                                cout << "\t\tPlease select a row (1-8) \n";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }
                                row = _getch();//Input
                            } while (row != 49 && row != 50 && row != 51 && row != 52 && row != 53 && row != 54 && row != 55 && row != 56);
                            row = row - 49;
                            col = col - 65;
                            if (easyboard[row][col] == 'H') {
                                cout << "\n\t\tHurdle selected!\nPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }
                            }
                        } while (easyboard[row][col] == 'H');

                        printalgo2(row, col, easyboard);

                        do {
                            cout << "\t\tIs this the selected candy? (Y/N)\n";
                            while (_kbhit() == false) {//Timer
                                Sleep(1000);
                                ++timer;
                            }
                            choiceconf = _getch();
                        } while (choiceconf != 78 && choiceconf != 89);
                    } while (choiceconf == 78);
                    
                    printalgo2(row, col, easyboard);
                    
                    //This nested for loop saved the board in another temporary 2D-Array in case we need to revert a move.

                    for (i = 0; i < 8; i++) {
                        for (j = 0; j < 8; j++) {
                            tempeasyboard[i][j] = easyboard[i][j];
                        }

                    }

                    printalgo2(row, col, easyboard);

                    do {
                        cout << "\t\tPress any directional key to swap candy...\n\t\t(Up, Down, Left, Right)\n";
                        while (_kbhit() == false) {//Timer
                            Sleep(1000);
                            ++timer;
                        }
                        direc = _getch();//Input
                    } while (direc != 0 && direc != 224);

                    switch (_getch()) {
                    case 72://The pressed key is "UP"
                        if ((easyboard[row - 1][col] != 'H') && (easyboard[row][col] != 'B') && (easyboard[row - 1][col] != 'B')) {
                            
                            //Swaps the candy using a third temp variable
                            
                            temp = easyboard[row][col];
                            easyboard[row][col] = easyboard[row - 1][col];
                            easyboard[row - 1][col] = temp;
                            row = row - 1;

                            printalgo(easyboard);

                            rnd4(rndcap, random, points, row, col, match, easycandy, easyboard);

                            rnd3(rndcap, random, points, match, easycandy, easyboard);

                            //condition for an invalid move

                            if (match == false) {

                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";

                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 8; i++) {
                                    for (j = 0; j < 8; j++) {
                                        easyboard[i][j] = tempeasyboard[i][j];
                                    }
                                }

                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle
                       
                        else {
                            if (easyboard[row - 1][col] == 'H') {

                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";

                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                            }
                            
                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (easyboard[row - 1][col] == 'B') {
                                    for (i = 0; i < 8; i++) {
                                        easyboard[i][col] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 8; j++) {
                                        easyboard[row - 1][j] = static_cast<char>(177);
                                    }

                                    printalgo(easyboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 8; i++) {
                                        random = rand() % rndcap;
                                        easyboard[i][col] = easycandy[random];
                                    }
                                    for (j = 0; j < 8; j++) {
                                        random = rand() % rndcap;
                                        easyboard[row - 1][j] = easycandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (easyboard[row][col] == 'B') {
                                        for (i = 0; i < 8; i++) {
                                            easyboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 8; j++) {
                                            easyboard[row][j] = static_cast<char>(177);
                                        }

                                        printalgo(easyboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 8; i++) {
                                            random = rand() % rndcap;
                                            easyboard[i][col] = easycandy[random];
                                        }
                                        for (j = 0; j < 8; j++) {
                                            random = rand() % rndcap;
                                            easyboard[row][j] = easycandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    case 80://The pressed key is "DOWN"
                        if ((easyboard[row + 1][col] != 'H') && (easyboard[row + 1][col] != 'B') && (easyboard[row][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = easyboard[row][col];
                            easyboard[row][col] = easyboard[row + 1][col];
                            easyboard[row + 1][col] = temp;
                            row = row + 1;

                            printalgo(easyboard);

                            rnd4(rndcap, random, points, row, col, match, easycandy, easyboard);

                            rnd3(rndcap, random, points, match, easycandy, easyboard);

                            //condition for an invalid move

                            if (match == false) {
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 8; i++) {
                                    for (j = 0; j < 8; j++) {
                                        easyboard[i][j] = tempeasyboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (easyboard[row + 1][col] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {
                                    Sleep(1000);
                                    ++timer;
                                }

                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (easyboard[row + 1][col] == 'B') {
                                    for (i = 0; i < 8; i++) {
                                        easyboard[i][col] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 8; j++) {
                                        easyboard[row + 1][j] = static_cast<char>(177);
                                    }

                                    printalgo(easyboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 8; i++) {
                                        random = rand() % rndcap;
                                        easyboard[i][col] = easycandy[random];
                                    }
                                    for (j = 0; j < 8; j++) {
                                        random = rand() % rndcap;
                                        easyboard[row + 1][j] = easycandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (easyboard[row][col] == 'B') {
                                        for (i = 0; i < 8; i++) {
                                            easyboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 8; j++) {
                                            easyboard[row][j] = static_cast<char>(177);
                                        }

                                        printalgo(easyboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 8; i++) {
                                            random = rand() % rndcap;
                                            easyboard[i][col] = easycandy[random];
                                        }
                                        for (j = 0; j < 8; j++) {
                                            random = rand() % rndcap;
                                            easyboard[row][j] = easycandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    case 77://The pressed key is "RIGHT"
                        if ((easyboard[row][col + 1] != 'H') && (easyboard[row][col + 1] != 'B') && (easyboard[row][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = easyboard[row][col];
                            easyboard[row][col] = easyboard[row][col + 1];
                            easyboard[row][col + 1] = temp;
                            col = col + 1;

                            printalgo(easyboard);

                            rnd4(rndcap, random, points, row, col, match, easycandy, easyboard);

                            rnd3(rndcap, random, points, match, easycandy, easyboard);

                            //condition for an invalid move

                            if (match == false) {
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//tIMER
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 8; i++) {
                                    for (j = 0; j < 8; j++) {
                                        easyboard[i][j] = tempeasyboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (easyboard[row][col + 1] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {
                                    Sleep(1000);
                                    ++timer;
                                }
                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (easyboard[row][col + 1] == 'B') {
                                    for (i = 0; i < 8; i++) {
                                        easyboard[i][col + 1] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 8; j++) {
                                        easyboard[row][j] = static_cast<char>(177);
                                    }

                                    printalgo(easyboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 8; i++) {
                                        random = rand() % rndcap;
                                        easyboard[i][col + 1] = easycandy[random];
                                    }
                                    for (j = 0; j < 8; j++) {
                                        random = rand() % rndcap;
                                        easyboard[row][j] = easycandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (easyboard[row][col] == 'B') {
                                        for (i = 0; i < 8; i++) {
                                            easyboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 8; j++) {
                                            easyboard[row][j] = static_cast<char>(177);
                                        }

                                        printalgo(easyboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 8; i++) {
                                            random = rand() % rndcap;
                                            easyboard[i][col] = easycandy[random];
                                        }
                                        for (j = 0; j < 8; j++) {
                                            random = rand() % rndcap;
                                            easyboard[row][j] = easycandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    case 75://The pressed key is "LEFT"
                        if ((easyboard[row][col - 1] != 'H') && (easyboard[row][col - 1] != 'B') && (easyboard[row][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = easyboard[row][col];
                            easyboard[row][col] = easyboard[row][col - 1];
                            easyboard[row][col - 1] = temp;
                            col = col - 1;

                            printalgo(easyboard);

                            rnd4(rndcap, random, points, row, col, match, easycandy, easyboard);

                            rnd3(rndcap, random, points, match, easycandy, easyboard);

                            //CONDITION FOR AN INVALID MOVE

                            if (match == false) {
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 8; i++) {
                                    for (j = 0; j < 8; j++) {
                                        easyboard[i][j] = tempeasyboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (easyboard[row][col - 1] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                };
                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (easyboard[row][col - 1] == 'B') {
                                    for (i = 0; i < 8; i++) {
                                        easyboard[i][col - 1] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 8; j++) {
                                        easyboard[row][j] = static_cast<char>(177);
                                    }

                                    printalgo(easyboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 8; i++) {
                                        random = rand() % rndcap;
                                        easyboard[i][col - 1] = easycandy[random];
                                    }
                                    for (j = 0; j < 8; j++) {
                                        random = rand() % rndcap;
                                        easyboard[row][j] = easycandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (easyboard[row][col] == 'B') {
                                        for (i = 0; i < 8; i++) {
                                            easyboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 8; j++) {
                                            easyboard[row][j] = static_cast<char>(177);
                                        }

                                        printalgo(easyboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 8; i++) {
                                            random = rand() % rndcap;
                                            easyboard[i][col] = easycandy[random];
                                        }
                                        for (j = 0; j < 8; j++) {
                                            random = rand() % rndcap;
                                            easyboard[row][j] = easycandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    }
                    moves = moves - 1;

                    //Condition if moves or time runs out

                } while (moves > 0 && timer < 60);

                //Condition to print if moves run out first

                if (moves == 0 && timer < 60) {
                    system("cls");
                    cout << "\n\t\t\t   _____                          ____                ";
                    cout << "\n\t\t\t  / ____|                        / __ \\                ";
                    cout << "\n\t\t\t | |  __  __ _ _ __ ___   ___   | |  | |_   _____ _ __ ";
                    cout << "\n\t\t\t | | |_ |/ _` | '_ ` _ \\ / _ \\  | |  | \\ \\ / / _ \\ '__|";
                    cout << "\n\t\t\t | |__| | (_| | | | | | |  __/  | |__| |\\ \V /  __/ |   ";
                    cout << "\n\t\t\t  \\_____|\\__,_|_| |_| |_|\\___|   \\____/  \\_/ \\___|_|";
                    cout << "\n\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\t\t  Player name : " << playername;
                    cout << "\n\n\t\t\t\t\t  Total Points : " << points;
                    cout << "\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\tPress any key to return to the main page\n";
                    system("pause>nul");
                }

                //Condition to print if time runs out first

                else if (moves > 0 && timer >= 60) {
                    system("cls");
                    cout << "\n\t\t\t   _______ _                                   ";
                    cout << "\n\t\t\t  |__   __(_)                                  ";
                    cout << "\n\t\t\t     | |   _ _ __ ___   ___  ___   _   _ _ __  ";
                    cout << "\n\t\t\t     | |  | | '_ ` _ \\ / _ \\/ __| | | | | '_ \\ ";
                    cout << "\n\t\t\t     | |  | | | | | | |  __/\\__ \\ | |_| | |_) |";
                    cout << "\n\t\t\t     |_|  |_|_| |_| |_|\\___||___/  \\__,_| .__/ ";
                    cout << "\n\t\t\t                                        | |    ";
                    cout << "\n\t\t\t                                        |_|";
                    cout << "\n\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\t\t  Player name : " << playername;
                    cout << "\n\n\t\t\t\t\t  Total Points : " << points;
                    cout << "\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\tPress any key to return to the main page\n";
                    system("pause>nul");
                }
                //printing the score in file
                scoreeasy.open("points_easy.txt", fstream::app);
                if (scoreeasy.is_open() == true) {
                    scoreeasy << "\t\t\tName: " << playername << "\t\tScore: " << points << endl;
                    scoreeasy.close();
                }
                break;
            case 2:

                //This case is the beginning of the easy mode

                //Asking the player to enter the name

                srand(time(0));
                cout << "\t\t\t  _____  _                                                     " << endl;
                cout << "\t\t\t |  __ \\| |                                                    " << endl;
                cout << "\t\t\t | |__) | | __ _ _   _  ___ _ __   _ __   __ _ _ __ ___   ___  " << endl;
                cout << "\t\t\t |  ___/| |/ _` | | | |/ _ \\ '__| | '_ \\ / _` | '_ ` _ \\ / _ \\ " << endl;
                cout << "\t\t\t | |    | | (_| | |_| |  __/ |    | | | | (_| | | | | | |  __/ " << endl;
                cout << "\t\t\t |_|    |_|\\__,_|\\__, |\\___|_|    |_| |_|\\__,_|_| |_| |_|\\___| " << endl;
                cout << "\t\t\t                  __/ |                                        " << endl;
                cout << "\t\t\t                 |___/ " << endl;
                cout << "\n\n\n\t\t\t\t\t\tEnter Player name: ";
                getline(cin, playername);

                //5 second countdown timer for before the game starts

                for (k = 5; k > 0; k--) {
                    system("cls");
                    cout << "\n\n\n\n\n\t\t\t\t\t\tGame starts in: " << k << endl << endl;
                    cout << "\n\n\n\t\t\t     It is recommended that you play the game in fullscreen\n";
                    cout << "\n\t\t\t     Hurdles (H) Cannot be swapped\n";
                    cout << "\n\t\t\t     You have a total of 15 moves and 40 seconds\n";
                    Sleep(1000);
                }
                system("cls");

                //Randomizing the candies

                randomizerhard(random, rndcap2, count, hardcandy, hardboard);

                do {//asks player to enter a cand until the time runs out or the moves run out
                    do {//asks player to enter a candy until he confirms the selected candy
                        do {//asks player to enter a candy until the selected candy is not a hurdle

                            hardnoswap(random, rndcap2, count, hardcandy, hardboard);

                            hardrnd3(rndcap2, random, points, match, hardcandy, hardboard);

                            match = false;//sets the match bool to false, This will be used to determine an invalid move

                            hardprintalgo(hardboard);

                            cout << "\t\tSelect the candy to swap it...\n";
                            do {
                                cout << "\t\tPress any key to select a column (A-L) \n";
                                while (_kbhit() == false) {//This is the timer which keeps on running until a key is pressed on the keyboard
                                    Sleep(1000);
                                    ++timer;
                                }
                                col = _getch();//The pressed key is taken as input instantly
                            } while (col != 65 && col != 66 && col != 67 && col != 68 && col != 69 && col != 70 && col != 71 && col != 72 && col != 73 && col != 74 && col != 75 && col != 76);
                            do {
                                cout << "\t\tPress any key to select a row (1-9) & (A-C) \n";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }
                                row = _getch();//Input
                            } while (row != 49 && row != 50 && row != 51 && row != 52 && row != 53 && row != 54 && row != 55 && row != 56 && row != 57 && row != 65 && row != 66 && row != 67);

                            if (row >= 49 && row <= 57) {
                                row = row - 49;
                            }
                            else if (row == 65 || row == 66 || row == 67) {
                                row = row - 56;
                            }
                            col = col - 65;
                            if (hardboard[row][col] == 'H') {
                                cout << "\n\t\tHurdle selected!\nPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }
                            }
                        } while (hardboard[row][col] == 'H');

                        hardprintalgo2(row, col, hardboard);

                        do {
                            cout << "\t\tIs this the selected candy?\nPress one of the following keys (Y/N)\n";
                            while (_kbhit() == false) {//Timer
                                Sleep(1000);
                                ++timer;
                            }
                            choiceconf = _getch();//Input
                        } while (choiceconf != 78 && choiceconf != 89);
                    } while (choiceconf == 78);

                    hardprintalgo2(row, col, hardboard);
                    
                    //This nested for loop saved the board in another temporary 2D-Array in case we need to revert a move.

                    for (i = 0; i < 12; i++) {
                        for (j = 0; j < 12; j++) {
                            temphardboard[i][j] = hardboard[i][j];
                        }
                    }

                    hardprintalgo2(row, col, hardboard);

                    do {
                        cout << "\t\tPress any directional key to swap candy...\n\t\t(Up, Down, Left, Right)\n";
                        while (_kbhit() == false) {
                            Sleep(1000);
                            ++timer;
                        }
                        direc = _getch();//Input
                    } while (direc != 0 && direc != 224);
                    switch (_getch()) {
                    case 72://The pressed key is "UP"
                        if ((hardboard[row - 1][col] != 'H') && (hardboard[row][col] != 'B') && (hardboard[row - 1][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = hardboard[row][col];
                            hardboard[row][col] = hardboard[row - 1][col];
                            hardboard[row - 1][col] = temp;
                            row = row - 1;

                            hardprintalgo(hardboard);

                            hardrnd4(rndcap2, random, points, row, col, match, hardcandy, hardboard);

                            hardrnd3(rndcap2, random, points, match, hardcandy, hardboard);

                            if (match == false) {//condition for an invalid move
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 12; i++) {
                                    for (j = 0; j < 12; j++) {
                                        hardboard[i][j] = temphardboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (hardboard[row - 1][col] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {
                                    Sleep(1000);
                                    ++timer;
                                }
                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (hardboard[row - 1][col] == 'B') {
                                    for (i = 0; i < 12; i++) {
                                        hardboard[i][col] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 12; j++) {
                                        hardboard[row - 1][j] = static_cast<char>(177);
                                    }

                                    hardprintalgo(hardboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 12; i++) {
                                        random = rand() % rndcap2;
                                        hardboard[i][col] = hardcandy[random];
                                    }
                                    for (j = 0; j < 12; j++) {
                                        random = rand() % rndcap2;
                                        hardboard[row - 1][j] = hardcandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (hardboard[row][col] == 'B') {
                                        for (i = 0; i < 12; i++) {
                                            hardboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 12; j++) {
                                            hardboard[row][j] = static_cast<char>(177);
                                        }

                                        hardprintalgo(hardboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 12; i++) {
                                            random = rand() % rndcap2;
                                            hardboard[i][col] = hardcandy[random];
                                        }
                                        for (j = 0; j < 12; j++) {
                                            random = rand() % rndcap2;
                                            hardboard[row][j] = hardcandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    case 80://The pressed key is "DOWN"
                        if ((hardboard[row + 1][col] != 'H') && (hardboard[row + 1][col] != 'B') && (hardboard[row][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = hardboard[row][col];
                            hardboard[row][col] = hardboard[row + 1][col];
                            hardboard[row + 1][col] = temp;
                            row = row + 1;

                            hardprintalgo(hardboard);

                            hardrnd4(rndcap2, random, points, row, col, match, hardcandy, hardboard);

                            hardrnd3(rndcap2, random, points, match, hardcandy, hardboard);

                            if (match == false) {//condition for an invalid move
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 12; i++) {
                                    for (j = 0; j < 12; j++) {
                                        hardboard[i][j] = temphardboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (hardboard[row + 1][col] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (hardboard[row + 1][col] == 'B') {
                                    for (i = 0; i < 12; i++) {
                                        hardboard[i][col] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 12; j++) {
                                        hardboard[row + 1][j] = static_cast<char>(177);
                                    }

                                    hardprintalgo(hardboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 12; i++) {
                                        random = rand() % rndcap2;
                                        hardboard[i][col] = hardcandy[random];
                                    }
                                    for (j = 0; j < 12; j++) {
                                        random = rand() % rndcap2;
                                        hardboard[row + 1][j] = hardcandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (hardboard[row][col] == 'B') {
                                        for (i = 0; i < 12; i++) {
                                            hardboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 12; j++) {
                                            hardboard[row][j] = static_cast<char>(177);
                                        }

                                        hardprintalgo(hardboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 12; i++) {
                                            random = rand() % rndcap2;
                                            hardboard[i][col] = hardcandy[random];
                                        }
                                        for (j = 0; j < 12; j++) {
                                            random = rand() % rndcap2;
                                            hardboard[row][j] = hardcandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;

                    case 77://The pressed key is "RIGHT"
                        if ((hardboard[row][col + 1] != 'H') && (hardboard[row][col + 1] != 'B') && (hardboard[row][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = hardboard[row][col];
                            hardboard[row][col] = hardboard[row][col + 1];
                            hardboard[row][col + 1] = temp;
                            col = col + 1;

                            hardprintalgo(hardboard);

                            hardrnd4(rndcap2, random, points, row, col, match, hardcandy, hardboard);

                            hardrnd3(rndcap2, random, points, match, hardcandy, hardboard);

                            if (match == false) {//condition for an invalid move
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 12; i++) {
                                    for (j = 0; j < 12; j++) {
                                        hardboard[i][j] = temphardboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (hardboard[row][col + 1] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }
                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (hardboard[row][col + 1] == 'B') {
                                    for (i = 0; i < 12; i++) {
                                        hardboard[i][col + 1] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 12; j++) {
                                        hardboard[row][j] = static_cast<char>(177);
                                    }

                                    hardprintalgo(hardboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 12; i++) {
                                        random = rand() % rndcap2;
                                        hardboard[i][col + 1] = hardcandy[random];
                                    }
                                    for (j = 0; j < 12; j++) {
                                        random = rand() % rndcap2;
                                        hardboard[row][j] = hardcandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (hardboard[row][col] == 'B') {
                                        for (i = 0; i < 12; i++) {
                                            hardboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 12; j++) {
                                            hardboard[row][j] = static_cast<char>(177);
                                        }

                                        hardprintalgo(hardboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 12; i++) {
                                            random = rand() % rndcap2;
                                            hardboard[i][col] = hardcandy[random];
                                        }
                                        for (j = 0; j < 12; j++) {
                                            random = rand() % rndcap2;
                                            hardboard[row][j] = hardcandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    case 75://The pressed key is "LEFT"
                        if ((hardboard[row][col - 1] != 'H') && (hardboard[row][col - 1] != 'B') && (hardboard[row][col] != 'B')) {

                            //Swaps the candy using a third temp variable

                            temp = hardboard[row][col];
                            hardboard[row][col] = hardboard[row][col - 1];
                            hardboard[row][col - 1] = temp;
                            col = col - 1;

                            hardprintalgo(hardboard);

                            hardrnd4(rndcap2, random, points, row, col, match, hardcandy, hardboard);

                            hardrnd3(rndcap2, random, points, match, hardcandy, hardboard);

                            if (match == false) {//condition for an invalid move
                                cout << "\t\tInvalid move\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                }

                                //This nested for loop reverts the board to the original board that is saved in the temporary 2D-Array incase of an invalid move

                                for (i = 0; i < 12; i++) {
                                    for (j = 0; j < 12; j++) {
                                        hardboard[i][j] = temphardboard[i][j];
                                    }
                                }
                            }
                        }

                        //Condition if the user tries to swap a candy with a hurdle

                        else {
                            if (hardboard[row][col - 1] == 'H') {
                                cout << "\t\tHurdle cannot be swapped!\n\t\tPress any key to continue...";
                                while (_kbhit() == false) {//Timer
                                    Sleep(1000);
                                    ++timer;
                                };
                            }

                            //Condition if the selected candy is a bomb or the user has swapped the candy with a bomb

                            else {
                                if (hardboard[row][col - 1] == 'B') {
                                    for (i = 0; i < 12; i++) {
                                        hardboard[i][col - 1] = static_cast<char>(177);
                                    }
                                    for (j = 0; j < 12; j++) {
                                        hardboard[row][j] = static_cast<char>(177);
                                    }

                                    hardprintalgo(hardboard);

                                    cout << "\t\tDivine";
                                    Sleep(1500);
                                    for (i = 0; i < 12; i++) {
                                        random = rand() % rndcap2;
                                        hardboard[i][col - 1] = hardcandy[random];
                                    }
                                    for (j = 0; j < 12; j++) {
                                        random = rand() % rndcap2;
                                        hardboard[row][j] = hardcandy[random];
                                    }
                                    points = points + 30;
                                }
                                else {
                                    if (hardboard[row][col] == 'B') {
                                        for (i = 0; i < 12; i++) {
                                            hardboard[i][col] = static_cast<char>(177);
                                        }
                                        for (j = 0; j < 12; j++) {
                                            hardboard[row][j] = static_cast<char>(177);
                                        }

                                        hardprintalgo(hardboard);

                                        cout << "\t\tDivine";
                                        Sleep(1500);
                                        for (i = 0; i < 12; i++) {
                                            random = rand() % rndcap2;
                                            hardboard[i][col] = hardcandy[random];
                                        }
                                        for (j = 0; j < 12; j++) {
                                            random = rand() % rndcap2;
                                            hardboard[row][j] = hardcandy[random];
                                        }
                                        points = points + 30;
                                    }
                                }
                            }
                        }
                        break;
                    }
                    moves = moves - 1;

                    //If the timer or moves run out

                } while (moves > 0 && timer < 40);

                //Condition to print if moves run out first

                if (moves == 0 && timer < 40) {
                    system("cls");
                    cout << "\n\t\t\t   _____                          ____                ";
                    cout << "\n\t\t\t  / ____|                        / __ \\                ";
                    cout << "\n\t\t\t | |  __  __ _ _ __ ___   ___   | |  | |_   _____ _ __ ";
                    cout << "\n\t\t\t | | |_ |/ _` | '_ ` _ \\ / _ \\  | |  | \\ \\ / / _ \\ '__|";
                    cout << "\n\t\t\t | |__| | (_| | | | | | |  __/  | |__| |\\ \V /  __/ |   ";
                    cout << "\n\t\t\t  \\_____|\\__,_|_| |_| |_|\\___|   \\____/  \\_/ \\___|_|";
                    cout << "\n\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\t\t  Player name : " << playername;
                    cout << "\n\n\t\t\t\t\t  Total Points : " << points;
                    cout << "\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\tPress any key to return to the main page\n";
                    system("pause>nul");
                }

                //Condition to print if time runs out first

                else if (moves > 0 && timer >= 40) {
                    system("cls");
                    cout << "\n\t\t\t   _______ _                                   ";
                    cout << "\n\t\t\t  |__   __(_)                                  ";
                    cout << "\n\t\t\t     | |   _ _ __ ___   ___  ___   _   _ _ __  ";
                    cout << "\n\t\t\t     | |  | | '_ ` _ \\ / _ \\/ __| | | | | '_ \\ ";
                    cout << "\n\t\t\t     | |  | | | | | | |  __/\\__ \\ | |_| | |_) |";
                    cout << "\n\t\t\t     |_|  |_|_| |_| |_|\\___||___/  \\__,_| .__/ ";
                    cout << "\n\t\t\t                                        | |    ";
                    cout << "\n\t\t\t                                        |_|";
                    cout << "\n\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\t\t  Player name : " << playername;
                    cout << "\n\n\t\t\t\t\t  Total Points : " << points;
                    cout << "\n\n\t\t\t########################################################";
                    cout << "\n\n\t\t\t\tPress any key to return to the main page\n";
                    system("pause>nul");
                }

                //printing score in file

                scorehard.open("points_hard.txt", fstream::app);
                if (scorehard.is_open() == true) {
                    scorehard << "\t\t\tName: " << playername << "\t\tScore: " << points << endl;
                    scorehard.close();
                }
                break;
            }
            break;
        case 2:

            
        case 3:
            //rules go here
            system("cls");
            cout << "\n\t\t\t\t\t  _____       _           " << endl;
            cout << "\t\t\t\t\t |  __ \\     | |          " << endl;
            cout << "\t\t\t\t\t | |__) |   _| | ___  ___ " << endl;
            cout << "\t\t\t\t\t |  _  / | | | |/ _ \\/ __|" << endl;
            cout << "\t\t\t\t\t | | \\ \\ |_| | |  __/\\__ \\" << endl;
            cout << "\t\t\t\t\t |_|  \\_\\__,_|_|\\___||___/" << endl;
            cout << "\n\n\n\t\t\tSelect the option from the main menu by UP and DOWN button.Press Enter on the selected option. " << endl << endl << endl;
            cout << "\t\t\tChoose from Easy mode and Hard mode. It is recommended to use full screen not to disturb\n\t\t\tthe graphics of the game." << endl << endl << endl;
            cout << "\t\t\tEnter your name as required by the game." << endl << endl << endl;
            cout << "\t\t\tYou will have 15 moves or 60 seconds to play the game (40 seconds for hard mode). The game \n\t\t\twill be automatically end when either the timer runs out or the player is out of moves. " << endl << endl << endl;
            cout << "\t\t\tAs soon as the game starts the timer will also start automatically. Each move will deduct one\n\t\t\tmove from the total given moves." << endl << endl << endl;
            cout << "\t\t\tThe animations of the game will pause the timer temporarily so the player can avail maximum \n\t\t\ttime to play." << endl << endl << endl;
            cout << "\t\t\tPress the Column from A-H for easy mode and A-L for hard mode. Keep the caps lock on or else \n\t\t\tthe game will not recognize your key word. Similarly, choose row from 1-8 for easy mode and 1-9 and A-C (A=10, B=11, C=12) for hard mode." << endl << endl << endl;
            cout << "\t\t\tConfirmation will be asked for the selected candy. Use the key 'Y' or 'N' to confirm or \n\t\t\tdecline." << endl << endl << endl;
            cout << "\t\t\tUse UP, RIGHT, LEFT or DOWN arrow key to swap the candy. If after swap the candies are matched it \n\t\t\twill give the player points or else, it would be counted as an 'invalid move' and one move will be deducted." << endl << endl << endl;
            cout << "\t\t\tHurdles 'H' are spread throughout the game board 5 for easy mode and 10 for hard mode. A \n\t\t\tHurdle(H) can neither be selected or swapped and will be considered an 'invalid move' deduction one move from total." << endl << endl << endl;
            cout << "\t\t\tIf four or more candies match a bomb 'B' will appear. Swapping the bomb will increase the \n\t\t\tpoints by 30 and rearrange the row and column of that line" << endl << endl << endl;
            cout << "\t\t\tThe only way ro destroy a Hurdle(H) is by using a bomb, all hurdles in the row and column \n\t\t\twill be destroyed by a bomb" << endl << endl << endl;
            cout << "\t\t\Press any key to return to the main page...";
            system("pause>nul");
            break;
        case 4:
            //scores go here
            system("cls");
            cout << "\t\t\t\t\t   _____                         " << endl;
            cout << "\t\t\t\t\t  / ____|                            " << endl;
            cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
            cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
            cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
            cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;
            cout << "\t\t\n\n\n\t\t\t                           -> Easy mode" << endl;
            cout << "\t\t\t\n\t\t\t                              Hard mode" << endl;
            menu3 = 1;

            do {
                menuaddress = _getch();
                if (menuaddress == 224 && menu3 == 1) {
                    switch (_getch()) {
                    case 72:
                        system("cls");

                        cout << "\t\t\t\t\t   _____                         " << endl;
                        cout << "\t\t\t\t\t  / ____|                            " << endl;
                        cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
                        cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
                        cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
                        cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;
                        cout << "\n\n\n\t\t\t                              Easy mode" << endl;
                        cout << "\n\t\t\t                           -> Hard mode" << endl;
                        menu3 = 2;
                        break;
                    case 80:
                        system("cls");

                        cout << "\t\t\t\t\t   _____                         " << endl;
                        cout << "\t\t\t\t\t  / ____|                            " << endl;
                        cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
                        cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
                        cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
                        cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;
                        cout << "\n\n\n\t\t\t                              Easy mode" << endl;
                        cout << "\n\t\t\t                           -> Hard mode" << endl;
                        menu3 = 2;
                        break;
                    }
                }
                else if (menuaddress == 224 && menu3 == 2) {
                    switch (_getch()) {
                    case 72:
                        system("cls");

                        cout << "\t\t\t\t\t   _____                         " << endl;
                        cout << "\t\t\t\t\t  / ____|                            " << endl;
                        cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
                        cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
                        cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
                        cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;
                        cout << "\n\n\n\t\t\t                           -> Easy mode" << endl;
                        cout << "\n\t\t\t                              Hard mode" << endl;
                        menu3 = 1;
                        break;
                    case 80:
                        system("cls");

                        cout << "\t\t\t\t\t   _____                         " << endl;
                        cout << "\t\t\t\t\t  / ____|                            " << endl;
                        cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
                        cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
                        cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
                        cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;
                        cout << "\n\n\n\t\t\t                           -> Easy mode" << endl;
                        cout << "\n\t\t\t                              Hard mode" << endl;
                        menu3 = 1;
                        break;
                    }

                }
            } while (menuaddress != 13);
            switch (menu3) {
            case 1:
                system("cls");
                cout << "\t\t\t\t\t   _____                         " << endl;
                cout << "\t\t\t\t\t  / ____|                            " << endl;
                cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
                cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
                cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
                cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;

                cout << endl << endl << endl;
                {ifstream scoreeasy("points_easy.txt", ios::in);
                while (getline(scoreeasy, line)) {
                    cout << "\t\t" << line << endl;
                    cout << endl << endl << endl;
                }
                }
                scoreeasy.close();
                cout << endl << endl << endl;
                cout << "Press any key to go back to the main page...\n";
                system("pause>nul");

                break;
            case 2:
                system("cls");
                cout << "\t\t\t\t\t   _____                         " << endl;
                cout << "\t\t\t\t\t  / ____|                            " << endl;
                cout << "\t\t\t\t\t | (___   ___ ___  _ __ ___  ___     " << endl;
                cout << "\t\t\t\t\t  \\___ \\ / __/ _ \\| '__/ _ \\/ __|" << endl;
                cout << "\t\t\t\t\t  ____) | (_| (_) | | |  __/\\__ \\  " << endl;
                cout << "\t\t\t\t\t |_____/ \\___\\___/|_|  \\___||___/ " << endl;
                cout << endl << endl << endl;
                {ifstream scorehard("points_hard.txt", ios::in);
                while (getline(scorehard, line)) {
                    cout << "\t\t   " << line << endl;
                    cout << endl << endl << endl;
                }
                }
                scorehard.close();
                cout << endl << endl << endl;
                cout << "Press any key to go back to the main page...\n";
                system("pause>nul");
                break;
            }


            break;
        case 5:
            //exit
            system("cls");
            cout << "\t\t\t\t\t  ______      _ _   " << endl;
            cout << "\t\t\t\t\t |  ____|    (_) |  " << endl;
            cout << "\t\t\t\t\t | |__  __  ___| |_ " << endl;
            cout << "\t\t\t\t\t |  __| \\ \\/ / | __|" << endl;
            cout << "\t\t\t\t\t | |____ >  <| | |_ " << endl;
            cout << "\t\t\t\t\t |______/_/\\_\\_|\\__|" << endl;
            cout << "\n\n\n\t\t\t\t   Are you sure you want to exit?" << endl;
            cout << "\n\t\t\t                   --> Yes" << endl;
            cout << "\n\t\t\t                       No" << endl;
            menu = 1;
            do {
                menuaddress = _getch();
                if (menuaddress == 224 && menu == 1) {
                    switch (_getch()) {
                    case 80:
                        system("cls");
                        cout << "\t\t\t\t\t  ______      _ _   " << endl;
                        cout << "\t\t\t\t\t |  ____|    (_) |  " << endl;
                        cout << "\t\t\t\t\t | |__  __  ___| |_ " << endl;
                        cout << "\t\t\t\t\t |  __| \\ \\/ / | __|" << endl;
                        cout << "\t\t\t\t\t | |____ >  <| | |_ " << endl;
                        cout << "\t\t\t\t\t |______/_/\\_\\_|\\__|" << endl;
                        cout << "\n\n\n\t\t\t\t   Are you sure you want to exit?" << endl;
                        cout << "\n\t\t\t                       Yes" << endl;
                        cout << "\n\t\t\t                   --> No" << endl;
                        menu = 2;
                        break;
                    case 72:
                        system("cls");
                        cout << "\t\t\t\t\t  ______      _ _   " << endl;
                        cout << "\t\t\t\t\t |  ____|    (_) |  " << endl;
                        cout << "\t\t\t\t\t | |__  __  ___| |_ " << endl;
                        cout << "\t\t\t\t\t |  __| \\ \\/ / | __|" << endl;
                        cout << "\t\t\t\t\t | |____ >  <| | |_ " << endl;
                        cout << "\t\t\t\t\t |______/_/\\_\\_|\\__|" << endl;
                        cout << "\n\n\n\t\t\t\t   Are you sure you want to exit?" << endl;
                        cout << "\n\t\t\t                       Yes" << endl;
                        cout << "\n\t\t\t                   --> No" << endl;
                        menu = 2;
                    }
                }
                else if (menuaddress == 224 && menu == 2) {
                    switch (_getch()) {
                    case 80:
                        system("cls");
                        cout << "\t\t\t\t\t  ______      _ _   " << endl;
                        cout << "\t\t\t\t\t |  ____|    (_) |  " << endl;
                        cout << "\t\t\t\t\t | |__  __  ___| |_ " << endl;
                        cout << "\t\t\t\t\t |  __| \\ \\/ / | __|" << endl;
                        cout << "\t\t\t\t\t | |____ >  <| | |_ " << endl;
                        cout << "\t\t\t\t\t |______/_/\\_\\_|\\__|" << endl;
                        cout << "\n\n\n\t\t\t\t   Are you sure you want to exit?" << endl;
                        cout << "\n\t\t\t                   --> Yes" << endl;
                        cout << "\n\t\t\t                       No" << endl;
                        menu = 1;
                        break;
                    case 72:
                        system("cls");
                        cout << "\t\t\t\t\t  ______      _ _   " << endl;
                        cout << "\t\t\t\t\t |  ____|    (_) |  " << endl;
                        cout << "\t\t\t\t\t | |__  __  ___| |_ " << endl;
                        cout << "\t\t\t\t\t |  __| \\ \\/ / | __|" << endl;
                        cout << "\t\t\t\t\t | |____ >  <| | |_ " << endl;
                        cout << "\t\t\t\t\t |______/_/\\_\\_|\\__|" << endl;
                        cout << "\n\n\n\t\t\t\t   Are you sure you want to exit?" << endl;
                        cout << "\n\t\t\t                   --> Yes" << endl;
                        cout << "\n\t\t\t                       No" << endl;
                        menu = 1;
                    }
                }
            } while (menuaddress != 13);
            if (menu == 1) {
                return 0;
            }
            else {
                break;
            }
        }
    }
}
