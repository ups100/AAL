/**
 * @file CrisisAlgorithm.cpp
 *
 * @brief Implementation of the Class CrisisAlgorithm
 *
 * @details Implementation of project "AAL-9-LS KRYZYS"
 *
 * @date 28-10-2012 18:49:20
 *
 * @author Krzysztof Opasiak
 */

#include "CrisisAlgorithm.h"

namespace CrisisAlgorithmNamespace {

CrisisAlgorithm::~CrisisAlgorithm()
{

}

CrisisAlgorithm::CrisisAlgorithm(int numberOfCities, std::vector<std::pair<int, int> > *connections,
				std::vector<std::pair<int, int> > * toCut, int capitol)
{

}

const std::vector<std::pair<int, int> >& CrisisAlgorithm::execute()
{
	return   *(std::vector<std::pair<int, int> >*)NULL;
}

const std::vector<std::pair<int, int> >* CrisisAlgorithm::getResult()
{
	return  NULL;
}

}// namespace
