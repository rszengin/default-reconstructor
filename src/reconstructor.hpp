/*
 * reconstructor.hpp
 *
 *  Created on: 26 Eyl 2016
 *      Author: RSZ
 */

#ifndef RECONSTRUCTOR_HPP_
#define RECONSTRUCTOR_HPP_

namespace nonstd {

class default_reconstructor {
public:
	template<typename T>
	inline
	operator T() {
		return T {};
	}
};

default_reconstructor reconst;
#define default reconst // This is dangerous

}

#endif /* RECONSTRUCTOR_HPP_ */
