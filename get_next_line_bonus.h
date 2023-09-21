/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:34:27 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/21 11:45:47 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <string.h>
# include <strings.h>
# include <fcntl.h> 
# include <errno.h> 
# include <sys/types.h>
# include <sys/uio.h>

char	*get_next_line(int fd);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memmove(void *dest, const void *src, size_t n);
#endif
