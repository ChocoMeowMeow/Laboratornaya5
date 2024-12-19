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

size_t CountExcellent(const std::vector<Student>& v){
    vector<int> vec (v.size());
    int summ = 0;
    for(int i=0; i<v.size(); ++i){
        vector<int> marks = v[i].Ratings;
        int k = 0;
        for(int j=0; j<marks.size(); ++j){
            if (marks[j]!=5){
                k = 1;
            }
        }
        if (k==0){
            summ ++;
        }
    }
    return summ;
}
int main(){
    Student anna = {"Anna","1",{5, 5},{"math", "eng"}};
    Student ivan = {"Ivan","2",{2, 3},{"math", "eng"}};
    vector<Student> stud = {ivan, anna};
    cout << CountExcellent(stud) << endl;
}