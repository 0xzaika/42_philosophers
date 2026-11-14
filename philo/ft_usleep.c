#include "philosophers.h"

void	ft_usleep(long long time_in_ms)
{
	long long	start_time;

	start_time = ft_get_time_in_ms();
	while ((ft_get_time_in_ms() - start_time) < time_in_ms)
		usleep(500);
}
