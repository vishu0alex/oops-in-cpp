#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "CapgeminiExam";

    string part = s.substr(3); // from index 3 till end
    cout << part << endl; // Output: geminiExam
}
...............................................................................................................

string s = "CapgeminiExam";

string part = s.substr(3, 6); // start at index 3, take 6 chars
cout << part << endl; // Output: gemini

string s = "CapgeminiExam";

string prefix = s.substr(0, 3); // first 3 characters
cout << prefix << endl; // Output: Cap

string s = "CapgeminiExam";

string suffix = s.substr(s.size() - 4); // last 4 characters
cout << suffix << endl; // Output: Exam
.............................................................................................................................

string s = "CapgeminiExam";

string whole = s.substr(); // same as s.substr(0)
cout << whole << endl; // Output: CapgeminiExam

