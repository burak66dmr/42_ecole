/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:38:29 by budemir           #+#    #+#             */
/*   Updated: 2023/03/14 17:24:04 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
char	*ft_get_str(int fd, char *str);

int		ft_strchr(char *str, int c);
int		ft_strlen(char *str);
char	*ft_strjoin(char *str, char *temp_str);
char	*ft_get_line(char *str);
char	*ft_get_new_str(char *str);

#endif