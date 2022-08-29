/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:09:22 by malord            #+#    #+#             */
/*   Updated: 2022/08/29 13:31:40 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main ()
{
	int	will = 0;
	int	mal = 0;
	int	dom = 0;
	int	martin = 0;
	float	shots_will = 0;
	float	shots_mal = 0;
	float	shots_dom = 0;
	float	shots_mart = 0;
	int	result[4];
	int	winner = 0;
	
	printf("*******************************************************\n");
	printf("*                                                     *\n");
	printf("*                                                     *\n");
	printf("*                                                     *\n");
	printf("*      QUI SERA LE GRAND GAGNANT DE L'ELITE 2022?     *\n");
	printf("*                                                     *\n");
	printf("*                                                     *\n");
	printf("*                                                     *\n");
	printf("*******************************************************\n");
	printf("\n");
	printf("Entrez le score de William Fecteau-Gilbert : ");
	scanf("%d", &will);
	printf("Entrez le score de Marc-Andre Lord : ");
	scanf("%d", &mal);
	printf("Entrez le score de Dominic Parent : ");
	scanf("%d", &dom);
	printf("Entrez le score de Martin Dube : ");
	scanf("%d", &martin);
	shots_will = 4 *(130 / 113) + (72.6 - 72);
	shots_mal = 9 *(128 / 113) + (71.8 - 72);
	shots_dom = 5 *(130 / 113) + (72.6 - 72);
	shots_mart = 8 *(128 / 113) + (71.8 - 72);
	result[0] = will - shots_will;
	result[1] = mal - shots_mal;
	result[2] = dom - shots_dom;
	result[3] = martin - shots_mart;
	printf("Calcul des scores nets...\n");
	usleep(2000000);
	printf("...\n\n");
	usleep(2000000);
	if (result[0] < result[1] && result[0] < result[2] && result[0] < result[3])
	{
		winner = result[0];
		printf("Le grand gagnant de L'ELITE 2022 est WILLIAM FECTEAU-GILBERT avec un score de %d\n\n", winner);
	}
	else if (result[1] < result[0] && result[1] < result[2] && result[1] < result[3])
	{
		winner = result[1];
		printf("Le grand gagnant de L'ELITE 2022 est MARC-ANDRE LORD avec un score de %d\n\n", winner);
	}
	else if (result[2] < result[0] && result[2] < result[1] && result[2] < result[3])
	{
		winner = result[2];
		printf("Le grand gagnant de L'ELITE 2022 est DOMINIC PARENT avec un score de %d\n\n", winner);
	}
	else if (result[3] < result[0] && result[3] < result[1] && result[3] < result[2])
	{
		winner = result[3];
		printf("Le grand gagnant de L'ELITE 2022 est MARTIN DUBE avec un score de %d\n\n", winner);
	}
	else
	{
		printf("INCROYABLE ! IL Y A EGALITE !\nPlace aux trous de prolongation pour 1000$ !\n");
	}
	printf("CLASSEMENT FINAL : \n\n");
	printf("Score net de William Fecteau-Gilbert : %d\n", result[0]);
	usleep(2000000);
	printf("Score net de Marc-Andre Lord : %d\n", result[1]);
	usleep(2000000);
	printf("Score net de Dominic Parent : %d\n", result[2]);
	usleep(2000000);
	printf("Score net de Martin Dube : %d\n", result[3]);
}