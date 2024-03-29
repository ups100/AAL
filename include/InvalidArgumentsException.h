/**
 * @file InvalidArgumentsException.h
 *
 * @brief Implementation of the Class InvalidArgumentsException
 *
 * @details Implementation of project "AAL-9-LS KRYZYS"
 *
 * @date 28-10-2012 18:49:20
 *
 * @author Krzysztof Opasiak
 */

#if !defined(EA_2286941E_59F7_48b4_8DBD_F7E2596EF640__INCLUDED_)
#define EA_2286941E_59F7_48b4_8DBD_F7E2596EF640__INCLUDED_

#include <exception>
#include <string>

namespace CrisisAlgorithmNamespace {

/**
 * @brief Class of exception which is thrown when arguments of methods are incorrect
 */
class InvalidArgumentsException: public std::exception
{

public:

	/**
	 * @brief Constructor
	 *
	 * @param what description of problem.
	 * This string should contain name of parameter which is incorrect
	 */
	InvalidArgumentsException(std::string& what) throw();

	/**
	 * @brief Destructor
	 */
	virtual ~InvalidArgumentsException() throw();

	/**
	 * @brief Overwritten function which informs what type of error occurred.
	 *
	 * @return Description of error
	 */
	virtual const char* what() const throw();

private:

	/**
	 * @brief Description of error.
	 */
	std::string m_what;

};

}//namespace

#endif // !defined(EA_2286941E_59F7_48b4_8DBD_F7E2596EF640__INCLUDED_)
