/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:37:01 by oozcan            #+#    #+#             */
/*   Updated: 2022/04/12 11:37:05 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define PIDERROR "PID number is not valid"
# define ARGERROR "Incorrect number of arguments"

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

char	*ft_itoa(int n);
void	ft_putstr(char *str);
char	*ft_strjoin(char *s1, char const s2);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);

#endif
