#include <iostream> 
using namespace std;
struct student
    {
        char *fullname;
        int age;
        char *address;
    };

int main()
{
    student std1 = {"Le Hoang Khoa", 19, "803/89 Huynh Tan Phat street, Dictrict 7"};
    cout<< std1.fullname <<endl;
    cout<< std1.age<<endl;
    cout<< std1.address<<endl;
    return 0;
}