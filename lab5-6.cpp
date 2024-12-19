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

vector<string> GroupsId(const vector<Student>& v){
    vector<string> grstud;
    for(int i=0; i<v.size(); ++i){
        string group = v[i].GroupId;
        int k = 0;
        for (int j=0; j<grstud.size(); j++){
            if (grstud[j]==group){
                k = 1;
            }
        }
        if (k==0){
            grstud.push_back(group);
        }
    }
    return grstud;
}
int main(){
    Student anna = {"Anna","1",{5, 5},{"math", "eng"}};
    Student ivan = {"Ivan","2",{2, 3},{"math", "eng"}};
    vector<Student> stud = {ivan, anna};
    vector<string> gr = GroupsId(stud);
    for(int i=0; i<gr.size(); ++i){
        cout << gr[i] << endl;
    }
}