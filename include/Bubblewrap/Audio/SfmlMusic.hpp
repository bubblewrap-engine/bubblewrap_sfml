#ifndef BUBBLEWRAP_SFML_AUDIO_SFMLMUSIC_HPP
#define BUBBLEWRAP_SFML_AUDIO_SFMLMUSIC_HPP

#include "Bubblewrap/Base/Defines.hpp"
#include "Bubblewrap/Base/Base.hpp"
#include "Bubblewrap/Audio/Music.hpp"
#include "SFML/Audio.hpp"
#include "Bubblewrap/Base/SfmlPhysFsInputStream.hpp"

namespace Bubblewrap
{
	namespace Audio
	{
		/*! A wrapper for SFML Music that overrides Music
		*/
		class SfmlMusic :
			public Music
		{
		public:
			SfmlMusic();
			void Initialise( Json::Value Params );
			CREATE_REGISTER_OVERRIDE( SfmlMusic, Music );

			void Update( float dt );
			virtual void OnAttach( );
			virtual void Play();
			virtual void Pause();
			virtual void Stop();
			virtual Sound::Status GetStatus();
		private:
			sf::Music Music_;
			Base::SfmlPhysFsInputStream Stream_;
		};

	}
}


#endif