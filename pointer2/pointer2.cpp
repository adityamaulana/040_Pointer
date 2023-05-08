#include <iostream>
using namespace std;

class mahasiswa 

{
	public:
		int nim;
		void showNIM() 
		{
			cout <<"Nomor Induk = " << nim <<endl;
		}
};

int main() 
{
	mahasiswa *mhs = new mahasiswa{1};
	mhs ->nim = 2;
	mhs ->nim showNIM();
	delete mhs;
	
	return 0
}



