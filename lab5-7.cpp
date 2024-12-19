#include <iostream>
#include <vector>
#include <string>
#include<map>
using namespace std;

struct Student
{
  string Name;
  string GroupId;
  vector<int> Ratings;
  vector<string> Subjects;
};

struct Group
{
    string Id;
    vector<Student> Students;
};

vector<Group> Groups(const vector<Student>& students) {
	map<string, Group> group;
	for (auto p : students) {
		if (group.find(p.GroupId) == group.end()){ 
			Group groupnew;
			groupnew.Id = p.GroupId;
			group[p.GroupId] = groupnew;
		}
		group[p.GroupId].Students.push_back(p); 
	}
	vector<Group> grou;
	for (auto l : group) {
		grou.push_back(l.second);
	}
	return grou;
}

int main(){
    Student anna = {"Anna","1",{5, 5},{"math", "eng"}};
    Student ivan = {"Ivan","2",{2, 3},{"math", "eng"}};
    Student sasha = {"Sasha","1",{4, 5},{"math", "eng"}};
    vector<Student> stud = {ivan, anna, sasha};
    vector<Group> gr = Groups(stud);
}