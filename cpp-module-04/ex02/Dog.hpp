#ifndef DOG_HPP_
# define DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog& operator=(const Dog& other);

		void makeSound() const;

		Brain* getBrain() const;
	private:
		Brain* brain;
};

#endif
