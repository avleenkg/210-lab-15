//Avleen Gill - 210 Lab 15

#include <iostream>
#include <array>
#include <fstream>
using namespace std;

class Movie {
    private:
    string title; //movie title
    int year; //year released
    string sw; //screenwriter

    public:
    string getTitle() const         { return title; }
    int getYear() const             { return year; }
    string getSW() const            { return sw; }
    string setTitle(string t)       { title = t; }
    int setYear(int y)              { year = y; }
    string setSW(string s)          { sw = s; }

    void print() {
        cout << "Movie name: " << title << endl;
        cout << "\tYear released: " << year << endl;
        cout << "\tScreenwriter: " << sw << endl << endl;
    }
};

int main() {

}