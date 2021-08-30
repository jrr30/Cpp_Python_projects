/*
 * TexttoMorse.cpp
 *
 *  Created on: Feb 15, 2020
 *      Author: Jesus Rodriguez
 */

#include "TextToMorse.h"

TexttoMorse::TexttoMorse()
{

	   morse_table['a']=".- ";
	   morse_table['b']="-... ";
	   morse_table['c']="-.-. ";
	   morse_table['d']="-.. ";
	   morse_table['e']=". ";
	   morse_table['f']="..-. ";
	   morse_table['g']="--. ";
	   morse_table['h']=".... ";
	   morse_table['i']=".. ";
	   morse_table['j']=".--- ";
	   morse_table['k']="-.- ";
	   morse_table['l']=".-.. ";
	   morse_table['m']="-- ";
	   morse_table['n']="-. ";
	   morse_table['o']="--- ";
	   morse_table['o']="--- ";
	   morse_table['p']=".--. ";
	   morse_table['q']="--.- ";
	   morse_table['r']=".-. ";
	   morse_table['s']="... ";
	   morse_table['t']="- ";
	   morse_table['u']="..- ";
	   morse_table['v']="...- ";
	   morse_table['w']=".-- ";
	   morse_table['x']="-..- ";
	   morse_table['y']="-.-- ";
	   morse_table['z']="--.. ";
	   morse_table[' ']="   ";

}

TexttoMorse::~TexttoMorse()
{
	// TODO Auto-generated destructor stub
}

void TexttoMorse::Catch(void)
{
   std::cout << "Escribe el mensaje que quieres traducir: ";
	std::getline(std::cin,get_text);
}

void TexttoMorse::Translate(void)
{

	std::map<char,std::string>::iterator map_iter;
	std::string::iterator string_iter;

	if(!get_text.empty())

		for(string_iter = get_text.begin(); string_iter < get_text.end(); string_iter ++)
		{
			map_iter = morse_table.find(*string_iter);
			if(map_iter != morse_table.end())
			{
			   out_text += morse_table.find(*string_iter)->second;
			}
			else
			{
			   std::cout << "Error. Code not found" << std::endl;
			}
		}

	else
	{

	}
}

void TexttoMorse::Print(void)
{
	std::cout << out_text;
}
