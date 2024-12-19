#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student
{
  string Name;
  string GroupId;
  vector<unsigned> Ratings;
  vector<string> Subjects;
};

void SortByName(vector<Student>& v){
    vector<string> vec (v.size());
    for(int i=0; i<v.size(); ++i){
        vec[i] = v[i].Name;
    }
    vector<string> sort;
    string a;
    Student b;
    for(int j=0; j<(vec.size()-1); ++j){
        for(int i=0; i<(vec.size()-1); ++i){
           if (vec[i]>vec[i+1]){
               a = vec[i];
               vec[i] = vec[i+1];
               vec[i+1] = a;
               b = v[i];
               v[i] = v[i+1];
               v[i+1] = b;
           }
        }
    }
}
int main(){
    Student anna = {"Anna","1",{4, 5},{"math", "eng"}};
    Student ivan = {"Ivan","2",{2, 3},{"math", "eng"}};
    vector<Student> stud = {ivan, anna};
    SortByName(stud);
    for(int i=0; i<stud.size(); ++i){
        cout << stud[i].Name << endl;
    }
}

