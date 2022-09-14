/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:59:05 by slin              #+#    #+#             */
/*   Updated: 2022/01/09 17:01:04 by slin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_strlen(const char *str);
char	*ft_strjoin(char const *str1, char const *str2);
int		ft_strchr(const char *str, int c);
char	*ft_substr(char const *s, int start, int len);
int		ft_str(const char *str);
char	*get_next_line(int fd);

#endif
