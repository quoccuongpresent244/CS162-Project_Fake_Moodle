#include "function.h"

using namespace std;


int main()
{
	loadStaff();
	loadLecturer();
	loadStudent();


	delete[]lophoc;
	delete[]giaovu;
	delete[]giaovien;
	delete[]hocsinh;


	return 0;
}