/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:55:55 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/08 13:55:56 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a printing character test (space character inclusive).
** The ft_isprint() function tests for any printing character, including space
** (` ').  The value of the argument must be representable as an unsigned char
** or the value of EOF.
**
** In the ASCII character set, this includes the following characters (preceded
** by their numeric values, in octal):
** 040 sp        041 ``!''     042 ``"''     043 ``#''     044 ``$''
** 045 ``%''     046 ``&''     047 ``'''     050 ``(''     051 ``)''
** 052 ``*''     053 ``+''     054 ``,''     055 ``-''     056 ``.''
** 057 ``/''     060 ``0''     061 ``1''     062 ``2''     063 ``3''
** 064 ``4''     065 ``5''     066 ``6''     067 ``7''     070 ``8''
** 071 ``9''     072 ``:''     073 ``;''     074 ``<''     075 ``=''
** 076 ``>''     077 ``?''     100 ``@''     101 ``A''     102 ``B''
** 103 ``C''     104 ``D''     105 ``E''     106 ``F''     107 ``G''
** 110 ``H''     111 ``I''     112 ``J''     113 ``K''     114 ``L''
** 115 ``M''     116 ``N''     117 ``O''     120 ``P''     121 ``Q''
** 122 ``R''     123 ``S''     124 ``T''     125 ``U''     126 ``V''
** 127 ``W''     130 ``X''     131 ``Y''     132 ``Z''     133 ``[''
** 134 ``\''     135 ``]''     136 ``^''     137 ``_''     140 ```''
** 141 ``a''     142 ``b''     143 ``c''     144 ``d''     145 ``e''
** 146 ``f''     147 ``g''     150 ``h''     151 ``i''     152 ``j''
** 153 ``k''     154 ``l''     155 ``m''     156 ``n''     157 ``o''
** 160 ``p''     161 ``q''     162 ``r''     163 ``s''     164 ``t''
** 165 ``u''     166 ``v''     167 ``w''     170 ``x''     171 ``y''
** 172 ``z''     173 ``{''     174 ``|''     175 ``}''     176 ``~''
**
** @param	int	c	- the character to be tested.
**
** @return
** 		- The ft_isprint() function returns zero if the character tests false
** 		and returns non-zero if the character tests true.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
