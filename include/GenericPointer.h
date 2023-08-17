#ifndef FLAP_GENPTR_H
#define FLAP_GENPTR_H

template <typename T>;
class GenericPointer
{
	private:
	T* pointer;
	
	public:
	GenericPointer(T* pointer)
	{
		this->pointer = pointer;
	}
	
	T& operator*()
	{
		return *reinterpret_cast<T>(pointer);
	}
	
	template <typename S>;
	S* getPointer()
	{
		return reinterpret_cast<S*>(pointer);
	}
	
	void operator= (const GenericPointer<T>& other)
	{
		this->pointer = other.returnPointer<T>();
	}
	
	GenericPointer operator+(const int amount)
	{
		int new_amount = reinterpret_cast<int>(pointer) + amount;
		return GenericPointer(reinterpret_cast<T>(new_amount));
	}
	
	GenericPointer operator+=(const int amount)
	{
		return *this + amount;
	}
	
};

#endif