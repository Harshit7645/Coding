BEGIN { print"\t \t \t \t \t Harshit Singh Pakhariya-210101048 \n \n \t \t \t \t \t \t INVENTORY REPORT \n \n Part No.\t \t Price\t \t Quantity On Hand\t \tReorder Point\t  \tMinimum Order\t \tOrder Amount\t \t \n" } #this line is to print the column heads
{#loop starts here
if($3<$4)  #this line is to check the give condition using if else statements. here by using the '$'sign we are accessing the columns.Thus, $3 refers to column 3,$4 refers to column 4 etc.   
tot=$4+$5-$3; #if the if statement is true then this statement is executed. tot variable is used to calculate the order amount
else 
tot=0;#if the if statement is false then the else sattement is executed.
print $1"\t \t \t" $2"\t \t \t " $3"\t \t \t" $4" \t \t \t " $5" \t \t \t" tot" \n " #this line is in the loop so is printed n times where n is the number of rows of data
}#loop ends here
END{print "\n \n \t \t \t \t \t \t END REPORT" }

