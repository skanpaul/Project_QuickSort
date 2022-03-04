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
void quicksort(int n[25], int start, int end)
{
	int big;
	int small;
	int pivot;
	int temp;

	if (start < end)
	{
		pivot = start;
		big = start;
		small = end;
		/* -------------------------------------------------- */
		while (big < small)
		{
			/* Go find big number than pivot ---------- */
			while (n[big] <= n[pivot] && big < end)
				big++;
			
			/* Go find small number than pivot -------- */
			while (n[small] > n[pivot])
				small--;

			/* Then swap big and small number --------- */
			if (big < small)
			{
				temp = n[big];
				n[big] = n[small];
				n[small] = temp;
			}
		}
		/* -------------------------------------------------- */
		temp = n[pivot];
		n[pivot] = n[small];
		n[small] = temp;
		quicksort(n, start, small - 1);
		quicksort(n, small + 1, end);
		/* -------------------------------------------------- */
	}
}

/* ************************************************************************** */
// void quicksort(int number[25], int first, int last)
// {
// 	int i; 
// 	int j; 
// 	int pivot; 
// 	int temp;

// 	if (first < last) 
// 	{
// 		pivot = first;
// 		i = first;
// 		j = last;
// 		while (i < j)
// 		{
// 			while (number[i] <= number[pivot] && i < last)
// 				i++;
// 			while (number[j] > number[pivot])
// 				j--;
// 			if (i < j)
// 			{
// 				temp = number[i];
// 				number[i] = number[j];
// 				number[j] = temp;
// 			}
// 		}
// 		temp = number[pivot];
// 		number[pivot] = number[j];
// 		number[j] = temp;
// 		quicksort(number, first, j - 1);
// 		quicksort(number, j + 1, last);
// 	}
// }
