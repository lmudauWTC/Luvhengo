# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmudau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/09 10:33:13 by lmudau            #+#    #+#              #
#    Updated: 2020/07/09 10:41:01 by lmudau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash
( find.-type d $$ find .-type f ) | wc -1 |
