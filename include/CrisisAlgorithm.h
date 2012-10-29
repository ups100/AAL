/**
 * @file CrisisAlgorithm.h
 *
 * @brief Implementation of the Class CrisisAlgorithm
 *
 * @details Implementation of project "AAL-9-LS KRYZYS"
 *
 * @date 28-10-2012 18:49:19
 *
 * @author Krzysztof Opasiak
 */

#if !defined(EA_FF62F271_BFD7_4d39_8EE4_1C05D94CA5EA__INCLUDED_)
#define EA_FF62F271_BFD7_4d39_8EE4_1C05D94CA5EA__INCLUDED_

#include <vector>
#include <utility> // for std pair

#include "Vertex.h"
#include "InvalidArgumentsException.h"

namespace CrisisAlgorithmNamespace {

/**
 * @brief This class implements the whole algorithm.
 *
 * @see CrisisAlgorithm::execute()
 */
class CrisisAlgorithm
{

public:

	/**
	 * @brief Constructor
	 *
	 * @details Prepares date for execution of algorithm
	 *
	 * @param numberOfCities number of cities in algorithm
	 *
	 * @param connections collection of connections between cities
	 *
	 * @param toCut collections of connections to be deleted in specific order
	 *
	 * @param capitol number of city which is capitol in this algorithm
	 *
	 * @throw InvalidArgumentsException if arguments are incorrect
	 */
	CrisisAlgorithm(int numberOfCities, std::vector<std::pair<int, int> > *connections,
				std::vector<std::pair<int, int> > * toCut, int capitol);

	/**
	 * @brief Destructor
	 */
	virtual ~CrisisAlgorithm();

	/**
	 * @brief Executes implemented algorithm
	 *
	 * @return results of algorithm execution i format:
	 * first - city,
	 * second - number of month when connection with capitol has been lost
	 */
	const std::vector<std::pair<int, int> >& execute();

	/**
	 * @brief Gets the result of algorithm execution.
	 *
	 * @return NULL if execute has not been invoked or results of algorithm
	 * execution in format:
	 * first - city,
	 * second - number of month when connection with capitol has been lost
	 */
	const std::vector<std::pair<int, int> >* getResult();

private:

	/**
	 * @brief Number of city which is capitol
	 */
	int m_capitol;

	/**
	 * @brief Table of cities and connections
	 *
	 * @details m_cities[0] - information about capitol
	 *
	 * @warning Do not use m_cities[0] for other purpose than
	 * obtaining information about capitol
	 */
	Vertex *m_cities;

	/**
	 * @brief Number of months (number of removed connections)
	 * passed from begin of algorithm
	 */
	int m_months;

	/**
	 * @brief Collections of connections to be removed
	 */
	std::vector<std::pair<int, int> > * m_toCut;

};

}//namespace

#endif // !defined(EA_FF62F271_BFD7_4d39_8EE4_1C05D94CA5EA__INCLUDED_)
