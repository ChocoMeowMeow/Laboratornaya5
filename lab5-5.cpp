#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student
{
  string Name;
  string GroupId;
  vector<int> Ratings;
  vector<string> Subjects;
};

vector<Student> VectorMathExcellent(vector<Student>& v){
    vector<Student> math;
    for(int i=0; i<v.size(); ++i){
        vector<string> sub = v[i].Subjects;
        int indexmath;
        for (int j=0; j<sub.size(); ++j){
            if (sub[j]=="math"){
                indexmath = j;
            }
        }
        if ((v[i].Ratings)[indexmath]==5){
            math.push_back(v[i]);
        }
    }
    return math;
}
int main(){
    Student anna = {"Anna","1",{5, 5},{"math", "eng"}};
    Student ivan = {"Ivan","2",{2, 3},{"math", "eng"}};
    vector<Student> stud = {ivan, anna};
    vector<Student> studmath = VectorMathExcellent(stud);
    for(int i=0; i<studmath.size(); ++i){
        cout << studmath[i].Name << endl;
    }
}