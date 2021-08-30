/*
 * TexttoMorse.h
 *
 *  Created on: Feb 15, 2020
 *      Author: jesus Rodriguez
 */

#ifndef TEXTTOMORSE_H_
#define TEXTTOMORSE_H_

#include<string>
#include<map>
#include<iostream>

class TexttoMorse {
public:
	TexttoMorse();
	virtual ~TexttoMorse();

    void Print(void);
    void Catch(void);
    void Translate(void);

private:
    std::string get_text;
    std::map<char,std::string> morse_table;
    std::string out_text;
};

#endif /* TEXTTOMORSE_H_ */
