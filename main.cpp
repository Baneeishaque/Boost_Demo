#include <iostream>
#include <string>
#include <boost/filesystem.hpp>

using namespace std;
using namespace boost::filesystem;

int main() {

    path p("D:/Data/fayis_mac");
    for (auto i = directory_iterator(p); i != directory_iterator(); i++) {

        if (is_directory(i->path())) {

            cout << "Folder : " + i->path().string() << endl;

        } else if (is_regular_file(i->path())) {

            cout << "File : " + i->path().filename().string() << endl;

        } else continue;

        if (!is_directory(i->path())) //we eliminate directories
        {
            cout << i->path().filename().string() << endl;

        } else
            continue;
    }

    return 0;
}
