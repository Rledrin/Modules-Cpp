#include "seri.hpp"

void *serialize(void)
{
	Data *d = new Data;
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
		srand((time_t)ts.tv_nsec);

	for (int i = 0; i < 8; i++)
	{
		// srand((time_t)ts.tv_nsec);
		d->s1.push_back(alphabet[rand() % 63]);
		// srand((time_t)ts.tv_nsec);
		d->s2.push_back(alphabet[rand() % 63]);
		//std::cout << d->s1 << " et " << d->s2;

	}
	std::cout << "s1 = "<< d->s1 << "\ns2= " << d->s2;
	d->n = rand() % 2147483647;
	std::cout<< "\nn = " << d->n << std::endl;
	return d;
}

Data *deserialize(void *raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main()
{
	void *tmp = serialize();
	Data *d = deserialize(tmp);

	delete d;
	return 0;
}
