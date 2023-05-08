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

class siswa 
{
    private:
        int id;

    public:
        void setId(int pId);
        void displayAll(orang &a);
};

void siswa::setId(int pId) 

{
    id = pId;
}
