/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    int id;
    int points;

    bool operator<(const Student& other) const {
        if (points == other.points) {
            return id < other.id;
        }
        return points > other.points;
    }
};

int main() {
    int n;
    cin >> n;

    vector <Student> students;
    students.reserve(n);
    for (int i = 0; i < n; ++i) {
        Student p;
        cin >> p.id >> p.points;
        students.push_back(p);
    }

    sort(students.begin(), students.end());
    cout << endl;
    cout << "Результаты участников в порядке убывания баллов:" << endl;
    for (auto &p : students) {
        cout << "Участник " << p.id << ": " << p.points << " баллов" << endl;
    }

    return 0;
}

