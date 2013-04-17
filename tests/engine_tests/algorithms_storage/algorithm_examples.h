#ifndef _STSC_TESTS_ENGINE_ALGORITHM_EXAMPLES_H_
#define _STSC_TESTS_ENGINE_ALGORITHM_EXAMPLES_H_

#include <algorithms_storage/on_stock_algorithm.h>
#include <algorithms_storage/on_bar_algorithm.h>
#include <algorithms_storage/on_period_algorithm.h>

namespace stsc
{
	namespace tests_
	{
		namespace engine
		{
			namespace algorithms_storage
			{
				class on_stock_test_algorithm : public stsc::engine::algorithms_storage::on_stock_algorithm< double >
				{
					typedef stsc::engine::algorithms_storage::on_stock_algorithm< double > typed_algorithm;
				public:
					explicit on_stock_test_algorithm( const std::string& name );
					virtual ~on_stock_test_algorithm();
					/// just for test purpose next methods are public, please use private for real algorithms
					virtual void process( const bar_type& b ); 
					template< typename const_iterator_type >
					void register_stock_list( const_iterator_type& from, const_iterator_type& to )
					{
						return typed_algorithm::register_stock_list( from, to );
					}

				private:
					virtual serie_ptr serie_prototype() const;
				};
				//
				class on_bar_test_algorithm : public stsc::engine::algorithms_storage::on_bar_algorithm< int >
				{
					typedef stsc::engine::algorithms_storage::on_bar_algorithm< int > typed_algorithm;
				public:
					explicit on_bar_test_algorithm( const std::string& name );
					virtual ~on_bar_test_algorithm();
					/// just for test purpose next methods are public, please use private for real algorithms
					virtual void process( const bar_type& b ); 
					void register_serie();
				private:
					virtual serie_ptr serie_prototype() const;
				};			
				//
				class on_period_test_algorithm : public stsc::engine::algorithms_storage::on_period_algorithm< bool >
				{
					typedef stsc::engine::algorithms_storage::on_period_algorithm< bool > typed_algorithm;
				public:
					explicit on_period_test_algorithm( const std::string& name );
					virtual ~on_period_test_algorithm();
					/// just for test purpose next methods are public, please use private for real algorithms
					virtual void process( const bar_type& b ); 
					void register_serie();
				private:
					virtual serie_ptr serie_prototype() const;
				};			

			}
		}
	}
}

#endif // _STSC_TESTS_ALGORITHM_STORAGE_ALGORITHM_EXAMPLES_H_

