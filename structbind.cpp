#include <iostream>

#include <tuple>

using namespace std;
std::tuple<std::string, int> createperson()
{

 return {"cherno", 24};
}

int main(){

 auto person = createperson();

 std::string& name = std::get<0>(person);
 int age = std::get<1>(person);

 std::cout <<name<<endl;
}
