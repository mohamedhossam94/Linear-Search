

short linear_Search (short * arr, short st_ind, short end_ind, short num)
{
    /* if number isn't exist in the array or it's out of array larger or less */

    if (end_ind < st_ind)
    {
        printf("Element isn't EXIST.\n");
    }

    else
    {
        /*when find the element */
        if (num == * (arr +((st_ind + end_ind) / 2)))
        {
            return  ((st_ind + end_ind) / 2);
        }

        /*if num is less than it */
        else if (num < * (arr +((st_ind + end_ind) / 2)))
        {
            linear_Search(arr, st_ind, ((st_ind + end_ind) / 2) -1, num);
        }

        /*if num is larger than it */
        else
        {
            linear_Search(arr, ((st_ind + end_ind) / 2) +1, end_ind, num);
        }

    }


}

