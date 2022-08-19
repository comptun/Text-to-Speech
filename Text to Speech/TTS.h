#pragma once

#include <string>

class TTS
{
private:
	
public:
	void Say(const std::string& text);
	friend TTS& operator<<(TTS& tts, const std::string& text);
	TTS();
};
