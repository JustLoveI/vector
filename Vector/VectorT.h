#ifndef __FWL_VECTOR__H
#define __FWL_VECTOR__H
#endif

int max(int a, int b) { return  a > b ? a : b; }

template <class T>
class vector
{
public:
	vector(){ m_start = 0; m_finish = 0; m_end_of_storage = 0; }
	typedef T value_type;
	typedef value_type* pointer;
	typedef const value_type* const_pointer;
	typedef value_type* iterator;
	typedef const value_type* const_iterator;
	typedef size_t size_type;
	typedef value_type& reference;
	
	iterator m_start;
	iterator m_finish;
	iterator m_end_of_storage;

	iterator begin(){ return m_start; }
	const_iterator begin()const{ return m_start; }
	iterator end(){ return m_finish; }
	const_iterator end()const{ return m_finish; }
	reference operator[](size_type __n) { return *(begin() + __n); }
	void destroy(iterator &begin)
	{
		delete []begin;
	}

	size_type size() const{ return size_type(end() - begin()); }
	size_type capacity() const{ return size_type(m_end_of_storage - begin()); }


	void allocate(int n)
	{
		const size_type old_size = size();
		const size_type len = old_size + max(old_size, n);

		iterator new_start = new value_type[len];
		iterator new_finish = new_start;

		for (pointer ii = m_start; ii != m_finish; ii++)
		{
			*new_finish = *ii;
			new_finish++;
		}
		destroy(m_start);

		m_start = new_start;
		m_finish = new_finish;
		m_end_of_storage = new_start + len;
		
	}
	void push_back(const T &item) 
	{
		if (m_finish + 1 > m_end_of_storage)
			allocate(1);
		*m_finish = item;
		m_finish++;
	}
};