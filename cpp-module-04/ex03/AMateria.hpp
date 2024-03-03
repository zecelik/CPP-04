#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

# include "ICharacter.hpp"

# include <string>

class ICharacter;

class AMateria {
	public:
		AMateria(const std::string& type);
		virtual ~AMateria();

		const std::string& getType() const; // return the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
	private:
		AMateria();
};

#endif
