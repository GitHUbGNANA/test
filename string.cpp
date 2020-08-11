#include <iostream>
#include <string>


// added string functions and overloaded operatorsi info
// added sample code data
using namespace std;

static uint32_t s_AllocCount = 0;


void* operator new(size_t size)
{


 s_AllocCount++;

std::cout<< "Allocating"<<size<< "bytes\n";
 return malloc(size);

}

void PrintName(const std::string& name)

{

   std::cout<< name<< std::endl;



}
int main(){


std::string name = "Yan chernikov";

std::cout <<s_AllocCount<< "allocations" <<std::endl;

PrintName(name);
std::cin.get();


}
