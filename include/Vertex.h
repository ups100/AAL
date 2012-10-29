/**
 * @file Vertex.h
 *
 * @brief Implementation of the Class Vertex
 *
 * @details Implementation of project "AAL-9-LS KRYZYS"
 *
 * @date 28-10-2012 18:49:20
 *
 * @author Krzysztof Opasiak
 */

#if !defined(EA_BA80BAED_8D29_40cc_9EFA_BA41DC320CA8__INCLUDED_)
#define EA_BA80BAED_8D29_40cc_9EFA_BA41DC320CA8__INCLUDED_

#include <boost/unordered_set.hpp>

#include "InvalidArgumentsException.h"

namespace CrisisAlgorithmNamespace {

/**
 * @brief Class which represents vertex (city) and it's connections.
 */
class Vertex
{

public:

	/**
	 * @brief Constructor
	 *
	 * @param id of this city
	 *
	 * @param collection of cities. This class does not take the ownership of this object
	 */
	Vertex(int id, Vertex *collection);

	/**
	 * @brief Destructor
	 */
	virtual ~Vertex();

	/**
	 * @brief Removes connection between this vertex and argument
	 *
	 * @details Removes connection and finds alternative one if exist
	 *
	 * @throw InvalidArgumentsException if connection does not exist
	 *
	 * @return
	 * - NULL if alternative connection was found
	 * - collection of vertex which lost connection with capitol
	 */
	boost::unordered_set<int>* removeConnection(int destination);

	/**
	 * @brief Gets id of vertex
	 *
	 * @return id of vertex
	 */
	int getID();

private:

	/**
	 * @brief collection of connections which are currently in use
	 */
	boost::unordered_set<int> m_activeConnections;

	/**
	 * @brief id of this vertex
	 */
	int m_id;

	/**
	 * @brief collections of connections which are currently not in use
	 */
	boost::unordered_multiset<int> m_notActiveConnections;

	/**
	 * @brief Collection of vertex
	 */
	Vertex *m_cities;

};

} //namespace

#endif // !defined(EA_BA80BAED_8D29_40cc_9EFA_BA41DC320CA8__INCLUDED_)
