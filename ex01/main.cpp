#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try{
		Bureaucrat bure(1, "obj");
		// std::cout << bure.getName() << std::endl;
		// std::cout << bure.getGrade() <<std::endl;
		Form form("forma", 2, 8);
		form.beSigned(bure);
		bure.signForm(form);
	}
	catch(const std::exception& e){
		std::cerr << "error: "<< e.what() << std::endl;
	}
	return 0;
}