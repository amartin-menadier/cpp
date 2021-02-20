#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy(int hp, std::string const & type);
		Enemy( Enemy const & src );
		virtual	~Enemy();

		Enemy &		operator=( Enemy const & rhs );

		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int damage);

	protected:
		int			_hp;
		std::string	_type;

	private:
		Enemy();


};

#endif /* *********************************************************** ENEMY_H */