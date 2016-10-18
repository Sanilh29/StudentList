#include <cstring>
#include <iostream>

using namespace std;

void addStudent();
void printStudent();
void deleteStudent();

struct Student {
  float gpa;
  int id;
  char* firstname;
  char* lastname;
};

int main() {
  char command[10];
  cout << "Enter of the commands listed: add, remove, print." << endl;
  cin >> command;
  if (0 == strcmp(command, "add")){
    addStudent();
    }
  if (0==strcmp(command, "remove")){
    printStudent();
    }
  if (0==strcmp(command, "print")){
    deleteStudent();
  }
  return 0;
}

void addStudent(){
  cout <<"hi" << endl;
}


void printStudent(){
  cout << "hi" << endl;
}


void deleteStudent(){
  cout << "hi" << endl;
}
