//***************************************
// Name: Cooper Vandiver
// Course: CS 155 - Computer Science 1
// Semester: Spring 2021
// Project 3: The Hogwarts Potions Club recently held elections for President, Vice-President,
// Secretary, and  Treasurer.  All  of  the  students’,  teachers’,  ghosts’  and  paintings’
// votes  were  stored  in  a text  file.  You  have  been  tasked  with  writing  a  program
// that  reads  from  that  file  and  figures out who the winners of each election were.
//***************************************
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    int x; //declaring variables
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0; //declaring variables
    double sum1, sum2, sum3, sum4; //declaring variables
    ifstream inFile; //declaring ifstream
    inFile.open("votes2.txt"); //opening input file
    while(inFile >> x){ //establishing switch structure to process and tally votes
        switch(x){
            case 1: //if integer is 1
                a++; //adding vote to first Cedric Diggory's tally
                break;
            case 2: //if integer is 2
                b++; //adding vote to second Harry Potter's tally
                break;
            case 3: //if integer is 3
                c++; //adding vote to Hermione Granger's tally
                break;
            case 4: //if integer is 4
                d++; //adding vote to Vincent Crabbe's tally
                break;
            case 5: //if integer is 5
                e++; //adding vote to Luna Lovegood's tally
                break;
            case 6: //if integer is 6
                f++; //adding vote to Susan Bones's tally
                break;
            case 7: //if integer is 7
                g++; //adding vote to Draco Malfoy's tally
                break;
            case 8: //if integer is 8
                h++; //adding vote to Neville Longbottom's tally
                break;
        }
    }
    inFile.close(); //closing input file
    sum1 = a + b; //sum for Presidential election votes
    sum2 = c + d; //sum for Vice Presidential election votes
    sum3 = e + f; //sum for Secretary votes
    sum4 = g + h; //sum for Treasurer votes
    cout<<"Presidential Election Winner:"<<endl; //outputting description of Presidential election
    if(a>b){ //if statement for Cedric Diggory winning Presidential election
        cout<<"Cedric Diggory - "<<a<<" votes - WINNER ("<<(a/sum1)*100<<"%)"<<endl; //computing and outputting Cedric's results and announcing his win
        cout<<"Harry Potter - "<<b<<" votes - ("<<(b/sum1)*100<<"%)"<<endl; //computing and outputting Harry's results
    }
    else { //statement for Harry Potter winning Presidential election
        cout<<"Harry Potter - "<<b<<" votes - WINNER ("<<(b/sum1)*100<<"%)"<<endl; //computing and outputting Harry's results and announcing his win
        cout<<"Cedric Diggory - "<<a<<" votes ("<<(a/sum1)*100<<"%)"<<endl; //computing and outputting Cedric's results
    }
    cout<<"Vice Presidential Election Winner:"<<endl; //outputting results of Vice Presidential election
    if(c>d){ //if statement for Hermione Granger winning Vice Presidential election
        cout<<"Hermione Granger - "<<c<<" votes - WINNER ("<<(c/sum2)*100<<"%)"<<endl; //computing and outputting Hermione's results and announcing her win
        cout<<"Vincent Crabbe - "<<d<<" votes - ("<<(d/sum2)*100<<"%)"<<endl; //computing and outputting Vincent's results
    }
    else { //statement for Vincent Crabbe winning Vice Presidential election
        cout<<"Vincent Crabbe - "<<d<<" votes - WINNER ("<<(d/sum2)*100<<"%)"<<endl; //computing and outputting Vincent's results and announcing his win
        cout<<"Hermione Granger - "<<c<<" votes ("<<(c/sum2)*100<<"%)"<<endl; //computing and outputting Hermione's results
    }
    cout<<"Secretary Election Winner:"<<endl; //outputting results of Secretary election
    if(e>f){ //if statement for Luna Lovegood winning Secretary election
        cout<<"Luna Lovegood - "<<e<<" votes - WINNER ("<<(e/sum3)*100<<"%)"<<endl; //computing and outputting Luna's results and announcing her win
        cout<<"Susan Bones - "<<f<<" votes - ("<<(f/sum3)*100<<"%)"<<endl; //computing and outputting Susan's results
    }
    else { //statement for Susan Bones winning Secretary election
        cout<<"Susan Bones - "<<f<<" votes - WINNER ("<<(f/sum3)*100<<"%)"<<endl; //computing and outputting Susan's results and announcing her win
        cout<<"Luna Lovegood - "<<e<<" votes ("<<(e/sum3)*100<<"%)"<<endl; //computing and outputting Luna's results
    }
    cout<<"Treasurer Election Winner:"<<endl; //outputting results of Treasurer election
    if(g>h){ //if statement for Draco Malfoy winning Treasurer election
        cout<<"Draco Malfoy - "<<g<<" votes - WINNER ("<<(g/sum4)*100<<"%)"<<endl; //computing and outputting Draco's results and announcing his win
        cout<<"Neville Longbottom - "<<h<<" votes - ("<<(h/sum4)*100<<"%)"<<endl; //computing and outputting Neville's results
    }
    else { //statement for Neville Longbottom winning Treasurer election
        cout<<"Neville Longbottom - "<<h<<" votes - WINNER ("<<(h/sum4)*100<<"%)"<<endl; //computing and outputting Neville's results and announcing his win
        cout<<"Draco Malfoy - "<<g<<" votes ("<<(g/sum4)*100<<"%)"<<endl; //computing and outputting Draco's results
    }

    return 0;
}
