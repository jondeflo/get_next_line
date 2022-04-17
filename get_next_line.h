/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jondeflo <jondeflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 16:41:41 by jondeflo          #+#    #+#             */
/*   Updated: 2020/06/19 17:51:15 by jondeflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		check_n(char *tail);
int		normal_call(char **line, char **tail);
int		last_call(char **line, char **tail);
int		gnl_len(const char *s);
char	*gnl_substr(const char *s, int start, int len);
char	*gnl_strjoin(char *tail, char *buf);
char	*make_line(char *tail);
char	*cut_tail(char *tail);

#endif
