/*----------------------------------------------------------------------*
 * SpeeqS Library			                                            *
 * Gerry Ilagan Mar 2019                                                *
 *                                                                      *
 * SpeeqS Library Copyright (C) 2019 by Gerry Ilagan and  				*
 * licensed under GNU GPL v3.0, https://www.gnu.org/licenses/gpl.html   *
 *----------------------------------------------------------------------*/ 

#ifndef SPEEQS_H_INCLUDED
#define SPEEQS_H_INCLUDED
#if ARDUINO >= 100
#include <Arduino.h> 
#else
#include <WProgram.h> 
#endif

class SpeeqS
{
    public:
        SpeeqS();
        bool begin();

    private:
};
#endif
