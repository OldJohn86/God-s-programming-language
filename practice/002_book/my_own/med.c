#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

 
#define ELEMENT_NUM 1000000

typedef unsigned int my_uint32;
typedef double data_type;
 
void dump_element(data_type *buf, my_uint32 start, my_uint32 cnt) 
{
	my_uint32 i;
    for(i = start; i < start+cnt; i++) {
		printf(" [%7u]:%12.1f", i, buf[i]);
        if((i & 3) == 3)
			printf( "\n" );
    }
    printf( "\n" );
}

/* quick_sort() */
void quick_sort(double data[], int left, int right)
{
	int p = (left+right)/2;
	int pivot = data[p];

	int i = left;
	int j = right;

	while(i < j) 
    {
		for(; (i < p)&&(pivot >= data[i]); i++);
		if(i<p) {
			data[p] = data[i];
			p = i;
		}

		for(; (j > p)&&( pivot <= data[j]); j--);
		if(j > p) {
			data[p] = data[j];
			p = j;
		}
	}
	
	data[p] = pivot;
	if(p-left > 1) {
		quick_sort(data, left, p-1);
	}
	if(right-p > 1) {
		quick_sort(data, p+1, right);
	}
}

my_uint32 find_med(data_type *buf, my_uint32 buf_num)
{
	/*……实现你自己的函数，从小到大找到第50万个元素的数组下标…..*/
	printf("Using quick sort alog!\n");
	quick_sort(buf, 0, buf_num - 1);

	return buf_num/2;
}

void main(int argc, char **argv) 
{
	my_uint32 num = 0, i, med_id;
    data_type *element;

	num = ELEMENT_NUM;
 
	element = (data_type*)malloc(sizeof(element[0])*num);
    if(!element){
		printf( "error in malloc %u elements\n", num );
        return;
    }

    printf("generate %u elements ... ", num);
    for(i = 0; i < num; i++)
		element[i] = rand();

    printf("done!\n");

    dump_element(element, 0, 100);
	//med_id = find_med_fast(element, num);
	med_id = find_med(element, num);
    printf("med_id = %u, element[med_id] = %f\n", med_id, element[med_id]);
    dump_element(element, 0, 100);
    dump_element(element, med_id-9, 10);
}

