#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		~Squad();

		Squad &		operator=( Squad const & rhs );

		virtual int				getCount() const;
		virtual ISpaceMarine*	getUnit(int) const;
		virtual int				push(ISpaceMarine*);

		int						marineIsPresent(ISpaceMarine *unit) const;
		ISpaceMarine**			armyCopy(ISpaceMarine** dst) const;
		void					destroySquad();

		int						get_armySize() const;

	private:
		int				_armySize;
		ISpaceMarine	**_army;
};
#endif /* *********************************************************** SQUAD_H */