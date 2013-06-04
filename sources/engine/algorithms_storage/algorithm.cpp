#include <algorithms_storage/algorithm.h>

namespace stsc
{
	namespace engine
	{
		namespace algorithms_storage
		{
			algorithm::algorithm( const common::shared_string& name )
				: name_( name )
			{
			}
			//
			algorithm::algorithm( const algorithm& other )
				: name_( other.name_ )
			{
			}
			//
			algorithm::~algorithm()
			{
			}
			
		}
	}
}
