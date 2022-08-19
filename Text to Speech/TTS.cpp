#include "TTS.h"

#include <iostream>

void TTS::Say(const std::string& text)
{
	std::cout << text;
}

TTS& operator<<(TTS& tts, const std::string& text)
{
	tts.Say(text);
	return tts;
}

TTS::TTS() {}