//
// Created by E on 10/1/2019.
//


//Do you encounter any problems? Does it matter what OS you're developing your code on?
    // Coding on windows doesn't read textfile3.txt properly.
// See if transferring these files from, say, a Windows machine to a Linux machine
// alters them by checking their ASCII contents using the Linux od -a command
// (Examples (Links to an external site.) to use the od command).

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void read(string fileName);
int main(){
    cout << "textfile1:" << endl;
    read("textfile1.txt");

    cout << "textfile2:" << endl;
    read("textfile2.txt");

    cout << "textfile3:" << endl;
    read("textfile3.txt");

    return 0;
}
void read(string fileName){
    ifstream inFile;
    inFile.open(fileName);
    int count = 0;
    for (string line; getline(inFile, line);){
        count++;
        cout << "\t" << count << ") " << line << endl;
    }
    inFile.close();
}
