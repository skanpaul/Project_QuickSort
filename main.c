/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_quicksort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:40:02 by ski               #+#    #+#             */
/*   Updated: 2022/03/04 10:40:05 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

/* ************************************************************************** */
int main()
{
	int i;
	int count = 8;
	int number[25] = {9, 8, 0, 1, 35, 12, 7, 6};

	/* MAX ELEMENT ---------------------- */
	// printf("Enter some elements (Max. - 25): ");
	// scanf("%d", &count);
	// printf("Enter %d elements: ", count);

	/* INPUT ALL ELEMENT ---------------- */
	// for (i = 0;i < count;i++)
	// 	scanf("%d", &number[i]);

	/* QUICK SORT ----------------------- */
	quicksort(number, 0, count - 1);

	/* PRINT SORTED LIST ---------------- */
	printf("The Sorted Order is: ");
	for (i = 0;i < count;i++)
		printf(" %d", number[i]);

	/* ---------------------------------- */
	return 0;

}
