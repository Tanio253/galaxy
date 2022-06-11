/*
    * Ho Chi Minh City University of Technology
    * Faculty of Computer Science and Engineering
    * Initial code for Assignment 0
    * Programming Fundamentals Spring 2022
    * Author: Tran Huy
    * Date: 06.01.2022
*/

//The library here is concretely set, students are not allowed to include any other libraries.
#ifndef studyInPink_h
#define studyInPink_h

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

////////////////////////////////////////////////////////////////////////
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////

int firstMeet(int& EXP1, int& EXP2, const int& E1) {
    //Complete this function to gain point on task 
    if (E1 < 0 || E1>999) return -999;
    if (E1 >= 0 && E1 <= 399)
    {
        if (E1 >= 0 && E1 <= 49) EXP2 += 25;
        if (E1 >= 50 && E1 <= 99) EXP2 += 50;
        if (E1 >= 100 && E1 <= 149) EXP2 += 85;
        if (E1 >= 150 && E1 <= 199) EXP2 += 75;
        if (E1 >= 200 && E1 <= 249) EXP2 += 110;
        if (E1 >= 250 && E1 <= 299) EXP2 += 135;
        if (E1 >= 300 && E1 <= 399) EXP2 += 160;
        if (E1 % 2 == 0) EXP1 = ceil((EXP1 - E1 / 5.0));
        else EXP1 = ceil((EXP1 + E1 / 10.0));
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        if (EXP2 > 900) EXP2 = 900;
        if (EXP2 < 0) EXP2 = 0;
    }
    if (E1 >= 400 && E1 <= 999)
    {
        if (E1 >= 400 && E1 <= 499) EXP2 = ceil(EXP2 + E1 / 7.0 + 9);
        if (E1 >= 500 && E1 <= 599) EXP2 = ceil(EXP2 + E1 / 9.0 + 11);
        if (E1 >= 600 && E1 <= 699) EXP2 = ceil(EXP2 + E1 / 5.0 + 6);
        if (E1 >= 700 && E1 <= 799) {
            EXP2 = ceil(EXP2 + E1 / 7.0 + 9);
            if (EXP2 > 200)  EXP2 = ceil(EXP2 + E1 / 9.0 + 11);
        }
        if (E1 >= 800 && E1 <= 899) {
            EXP2 = ceil(EXP2 + E1 / 7.0 + 9 + E1 / 9.0 + 11);
            if (EXP2 > 600) {
                EXP2 = ceil(EXP2 + E1 / 5.0 + 6);
                EXP2 = ceil(EXP2 * 1.15);
            }
        }
        EXP1 = ceil(EXP1 - E1 / 10.0);
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        if (EXP2 > 900) EXP2 = 900;
        if (EXP2 < 0) EXP2 = 0;
    }
    return EXP1 + EXP2;
}



int investigateScene(int& EXP1, int& EXP2, int& HP2, int& M2, const int& E2) {
    //Complete this function to gain point on task 2

    //Complete this function to gain point on task 2
    if (E2 < 0 || E2>999) return -999;
    if (E2 >= 0 && E2 <= 299)
    {
        EXP2 = ceil(EXP2 + E2 / 9.0 + 10);
        EXP1 = ceil(EXP1 + (E2 / 9.0 + 10) / 3);

    }
    if (E2 >= 300 && E2 <= 499)
    {
        EXP2 = ceil(EXP2 + E2 / 9.0 + 10);
        EXP1 = ceil(EXP1 + (E2 / 9.0 + 10) / 3);
        EXP2 = ceil(EXP2 + 0.35 * E2);
        EXP1 = ceil(EXP1 + 0.35 * E2 / 3);
    }
    if (E2 >= 500 && E2 <= 999)
    {
        EXP2 = ceil(EXP2 + E2 / 9.0 + 10);
        EXP1 = ceil(EXP1 + (E2 / 9.0 + 10) / 3);
        EXP2 = ceil(EXP2 + 0.35 * E2);
        EXP1 = ceil(EXP1 + 0.35 * E2 / 3);
        EXP2 = ceil(EXP2 + (E2 / 9.0 + 10 + 0.35 * E2) * 0.17);
        EXP1 = ceil(EXP1 + (E2 / 9.0 + 10 + 0.35 * E2) * 0.17 / 3);
    }
    HP2 = ceil(HP2 - E2 * E2 * E2 / pow(2, 23));
    if (E2 % 2 == 0) {
        M2 = M2 + E2 * E2 / 50;

    }
    if (EXP1 > 900) EXP1 = 900;
    if (EXP1 < 0) EXP1 = 0;
    if (EXP2 > 900) EXP2 = 900;
    if (EXP2 < 0) EXP2 = 0;
    if (HP2 > 999) HP2 = 999;
    if (HP2 < 0) HP2 = 0;
    if (M2 > 2000) M2 = 2000;
    if (M2 < 0) M2 = 0;

    return EXP1 + EXP2 + HP2 + M2;

}




int traceLuggage(int& HP1, int& EXP1, int& M1, const int& E3) {
    //Complete this function to gain point on task 3
    if (E3 < 0 || E3>999) return -999;
    else
    {
        int m = HP1, n = EXP1;


        int  array1[9];
        bool a = 0;
        for (int i = 0; i <= 8; i++) {
            array1[i] = 2 * i + 1;
        }
        for (int i = 0; i <= 8; i++) {

            array1[i] = (array1[i] + E3) % 26 + 65;
            if (array1[i] == 80) {
                i++;
                HP1 = HP1 - 80 * i * 2;
                EXP1 = EXP1 + (1000 - 80 * i) % 101;
                M1 = ceil(M1 - i * E3 / 9.0);

                a = 1;
            }

        }
        if (!a)
            M1 = ceil(M1 - 9 * 9 * E3 / 9.0);


        if (EXP1 < 0) EXP1 = 0;
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        if (HP1 > 999) HP1 = 999;
        if (HP1 < 0) HP1 = 0;
        if (M1 > 2000) M1 = 2000;
        if (M1 < 0) M1 = 0;



        int  array2[7];
        int d = 0;
        for (int i = 2; i <= 20; i++) {
            bool c = 1;

            if (i != 2 && i != 3) for (int j = 2; j <= sqrt(i); j++)

                if (i % j == 0) {
                    c = 0;

                }
            if (c) if (d <= 6) {
                array2[d] = i;
                d++;
            }
        }
        int sum = 0, average;
        bool b = 0;
        for (int i = 0; i <= 6; i++) {

            array2[i] = (array2[i] + E3) % 26;
            sum += array2[i];



        }
        average = ceil(sum / 7.0);
        for (int i = 0; i <= 6; i++) {
            array2[i] = (array2[i] + sum + average) % 26 + 65;
            if (array2[i] == 80) {
                i++;
                HP1 = HP1 - 80 * i * 2;
                EXP1 = EXP1 + (1000 - 80 * i) % 101;
                M1 = ceil(M1 - i * E3 / 9.0);
                b = 1;

            }

        }
        if (!b)
            M1 = ceil(M1 - 7 * 7 * E3 / 9.0);
        if (EXP1 < 0) EXP1 = 0;
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        if (HP1 > 999) HP1 = 999;
        if (HP1 < 0) HP1 = 0;
        if (M1 > 2000) M1 = 2000;
        if (M1 < 0) M1 = 0;




        int array3[20];
        int e = 0, f;
        for (int i = 4; i > 0; i++) {
            if (e <= 19)
            {
                if (i % 2 == 0)
                {
                    f = sqrt(i);
                    if (f * f == i) {
                        array3[e] = i;
                        e++;
                    }
                }
            }
            else break;
        }
        int max = 0;
        for (int i = 0; i <= 19; i++) {

            array3[i] = (array3[i] + E3 * E3) % 113;
            if (array3[i] > max) max = array3[i];
        }
        for (int i = 0; i <= 19; i++) {

            array3[i] = ceil((array3[i] + E3) / max);
            array3[i] = array3[i] % 26 + 65;

        }
        int g;
        for (int i = 0; i <= 19; i++) {
            g = array3[i];
            array3[i] = array3[19 - i];
            array3[19 - i] = g;
        }
        bool h = 0;
        for (int i = 0; i <= 19; i++) {

            if (array3[i] == 80) {
                i++;
                HP1 = HP1 - 80 * i * 3;
                EXP1 = EXP1 + (3500 - 80 * i) % 300;
                M1 = ceil(M1 - i * E3 / 9.0);
                h = 1;

            }

        }
        if (!h)
            M1 = ceil(M1 - 20 * 20 * E3 / 9.0);
        if (EXP1 < 0) EXP1 = 0;
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        if (HP1 > 999) HP1 = 999;
        if (HP1 < 0) HP1 = 0;
        if (M1 > 2000) M1 = 2000;
        if (M1 < 0) M1 = 0;

        int array4[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        int min = 0, id;
        for (int i = 0; i <= 11; i++)
        {
            int x = ceil(E3 / 29.0);
            array4[i] = (array4[i] + x * x * x) % 9;
            if (array4[i] < min) {
                min = array4[i];
                id = ++i;
            }
        }
        for (int i = 0; i <= 11; i++)
        {
            int y = ceil(min / id);
            array4[i] = ((array4[i] + E3) * y) % 26 + 65;
        }

        int k;
        for (int i = 0; i <= 11; i++) {
            k = array4[i];
            array4[i] = array4[11 - i];
            array4[11 - i] = k;
        }

        bool l = 0;
        for (int i = 0; i <= 11; i++) {

            if (array4[i] == 80) {
                i++;
                HP1 = HP1 - 80 * i * 4;
                EXP1 = EXP1 + (4500 - 80 * i) % 400;
                M1 = ceil(M1 - i * E3 / 9.0);
                l = 1;

            }

        }
        if (!l) {
            M1 = ceil(M1 - 20 * 20 * E3 / 9.0);
        }

        if (a == 0 && b == 0 && h == 0 && l == 0) {


            HP1 = m - (59 * E3) % 900;
            EXP1 = n - (79 * E3) % 300;

        }

        if (EXP1 < 0) EXP1 = 0;
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        if (HP1 > 999) HP1 = 999;
        if (HP1 < 0) HP1 = 0;
        if (M1 > 2000) M1 = 2000;
        if (M1 < 0) M1 = 0;
        if (a == 0 && b == 0 && h == 0 && l == 0)
        {
            return -1;
        }
        else return EXP1 + HP1 + M1;


    }
}



////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
