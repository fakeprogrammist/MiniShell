/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:45:23 by marvin            #+#    #+#             */
/*   Updated: 2022/11/18 19:45:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTIN_H
# define BUILTIN_H

/* ************************************************************************** */
/* INCLUDES																	  */
/* ************************************************************************** */

# include <stdio.h>

# include "global.h"

/* ************************************************************************** */
/* STRUCTS																	  */
/* ************************************************************************** */

struct s_builtins
{
	char	*name;
	int		(*func)(int argc, char **argv);
};

/* ************************************************************************** */
/* FUNCTION PROTOTYPES														  */
/* ************************************************************************** */

// BUILTIN
int	builtin_check(char **argv);
int	builtin_exec(char **argv, bool subshell, t_list *l_free);

// BUILTIN_CD
int	builtin_cd(int argc, char **argv);

// BUILTIN_ECHO
int	builtin_echo(int argc, char **argv);

// BUILTIN_ENV
int	builtin_env(int argc, char **argv);

// BUILTIN_EXIT
int	builtin_exit(int argc, char **argv, bool subshell, t_list *l_free);

// BUILTIN_EXPORT
int	builtin_export(int argc, char **argv);

// BUILTIN_PWD
int	builtin_pwd(int argc, char **argv);

// BUILTIN_UNSET
int	builtin_unset(int argc, char **argv);

#endif
