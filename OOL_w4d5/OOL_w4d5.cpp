#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f;
    string path;
    cin >> path;

    int errors = 0;
    bool clbracks = true;
    f.open(path, ios::in);
    if (f) {
        do {
            char ch = '\0';
            f.get(ch);
            if (ch == '<' && clbracks == true) {
                clbracks = false;
            }
            else if (ch == '>' && clbracks == false) {
                clbracks = true;
            }
            else if (ch == '<' && clbracks == false || ch == '>' && clbracks == true) {
                errors++;
            }
            

        } while (f);
        cout << errors;
        f.close();
    }
}
