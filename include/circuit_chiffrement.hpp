#ifndef __CIRCUIT_CHIFFREMENT_HPP

#define __CIRCUIT_CHIFFREMENT_HPP

#include <limits.h>		/* for CHAR_BIT */
#include "typedef.h"
#include "BitChiffre.hpp"
#include "BitEvalL1.hpp"
#include "chiffrement.hpp" 
#include "keygen.hpp"
#include "dechiffrement.hpp" 
#include "additionL1.hpp"
#include "multiplicationL1.hpp"
#include "multiplicationL1L2.hpp"
#include "additionL2.hpp"
#include "additionL3.hpp"


void circuit_chiffrement(char lettre, PublicKey public_key, PrivateKey private_key);

#endif /* __CIRCUIT_CHIFFREMENT_HPP */
