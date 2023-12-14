#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat bure(159, "obj");
		std::cout << bure.getName() << std::endl;
		std::cout << bure.getGrade() <<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << "error: "<< e.what() << std::endl;
	}
	return 0;
}