#include <stdio.h>
	int getCounterfeitCoin(int coins[]， int first， int last)
	{
int firstSum = 0， lastSum = 0;
int i;
	if(first==last-1) { /*只剩两枚硬币*/
if(coins[first] < coins[last])
	return first;
return last;
}
if((last - first + 1) % 2 =0){	/*偶数枚硬币*/
for(i = first;i <first+(last-first)/2; i++){
		firstSum+= coins[i];
	}
	for(i=first + (last-first) / 2 + 1;i < last +1;i++){
		lastSum += coins[i];
	}
	if（firstSum<lastSum）{
	Return getCounterfeitCoin(coins,first,first+(last-first)/2;)
}else{
	
Return getCounterfeitCoin(coins,first+(last-first)/2+1,last;)
}
}
	else{ 	/*奇数枚硬币*/
		for(i=first;i<first+(last-first)/2;i++){
			firstSum+=coins[i];
		}
		for(i=first+(last-first)/2+1;i<last+1;i++){
			lastSum+=coins[i];
		} 
if(firstSum<lastSum){
		return getCounterfeitCoin(coins,first,first+(last-first)/2-1);
	}else if(firstSum>lastSum){
		return getCounterfeitCoin(coins,first+(last-first)/2-1,last);
	}else{
		return first+(last-first)/2
	}
} 
}  