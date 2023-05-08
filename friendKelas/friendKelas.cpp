#include <iostream>
#include <string>

using namespace std;

class Siswa;

class orang

{
    private:
        string nama;

    public:
        void setNama(string pNama);
        friend class siswa;
};

int main()
{
    std::cout << "Hello World!\n";
}

