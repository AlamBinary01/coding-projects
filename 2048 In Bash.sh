# 2048-In-Bash
declare -A array
Row=4
Col=4
RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"
function draw () {

# this is the menu of the main game the 4x4 board that is shown to the user 

    clear
    echo ""
    echo ""
    echo -e "                  \U0001f1fc \U0001F1EA \U0001F1F1 \U0001F1E8 \U0001F1F4 \U0001F1F2 \U0001F1EA   \U0001F5A4"
    echo ""
    echo -e "${RED}                      20${GREEN}48    ${ENDCOLOR}"
    echo ""
    echo ""
    for ((i=0;i<Row;i++)) 
    do
	echo "                                      "
	for ((j=0;j<Col;j++)) 
	do
		if [ $j -eq 0 ]
		then
			echo -n "            " ${array[$i,$j]} " "
		else
		        echo -n "    " ${array[$i,$j]} " "
		fi
	done
	echo "  "
    done
	echo "                                     "
}

function move_up () {
# upmove drops the array "UP" meaning that all the numbers will shift towards up 
#and the same digits will combine to form a new number
    for ((j=0;j<Col;j++)) 
    do
	for ((i=0;i<Row;i++)) 
	do
	    for ((k=i;k>=1;k--))
	    do
		let "t = $k-1"
		if [ ${array[$t,$j]} = "0" ];
		 then
		    let "array[$t,$j] += ${array[$k,$j]}"
		    let "array[$k,$j] = 0"
		else
		 if [ ${array[$k,$j]} = ${array[$t,$j]} ]; then
		    let "array[$t,$j] *= 2"
		    let "array[$k,$j] = 0"
		    break
		     fi
		fi
		if [ $i -eq $j ]; then
		let "array[$i,$j] += ${array[$i,$j]}"
		break
		fi
	    done
	done
    done
}
function move_right () {
# rightmoves the array "right" meaning that all the numbers will shift towards right 
# and the same digits will combine to form a new number
    for ((i=0;i<Row;i++)) 
    do
	for ((j=Col-1;j>=0;j--)) 
	do
	    for ((k=j;k<Col-1;k++))
	    do
		let "t = $k+1"
		if [ ${array[$i,$t]} = "0" ]; then
		    let "array[$i,$t] = ${array[$i,$k]}"
		    let "array[$i,$k] = 0"
		else 
		
		if [ ${array[$i,$k]} = ${array[$i,$t]} ]; then
		    let "array[$i,$t] *= 2"
		    let "array[$i,$k] = 0"
		    break
		     fi
		fi
	    done
	done
    done
}
function move_down () {
# downmoves drops the array "DOWN" meaning that all the numbers will shift towards down 
# and the same digits will combine to form a new number
    for ((j=0;j<Col;j++)) 
    do
	for ((i=Row-1;i>=0;i--)) 
	do
	    for ((k=i;k<Row-1;k++))
	    do
		let "t = $k+1"
		if [ ${array[$t,$j]} = "0" ]; then
		    let "array[$t,$j] += ${array[$k,$j]}"
		    let "array[$k,$j] = 0"
		else 
		if [ ${array[$k,$j]} = ${array[$t,$j]} ]; then
		    let "array[$t,$j] *= 2"
		    let "array[$k,$j] = 0"
		    break
		     fi
		fi
	    done
	done
    done
}
function move_left () {

#leftmoves the array "left" meaning that all the numbers will shift towards left
# and the same digits will combine to form a new number
    for ((i=0;i<Row;i++)) 
    do
	for ((j=0;j<Col;j++)) 
	do
	    for ((k=j;k>=1;k--))
	    do
		let "t = $k-1"
		if [ ${array[$i,$t]} = "0" ]; then
		    let "array[$i,$t] = ${array[$i,$k]}"
		    let "array[$i,$k] = 0"
		else 
		if [ ${array[$i,$k]} = ${array[$i,$t]} ]; then
		    let "array[$i,$t] *= 2"
		    let "array[$i,$k] = 0"
		    break
		     fi
		fi
	    done
	done
    done
}
function add_Block ()
{
# addblock is a function that randomly generates a multiple of 2 
# when there are different number on screen
    ((i=$RANDOM%$Row))
    ((j=$RANDOM%$Col))
    ((i=2))
    while [ ${array[$i,$j]} -ne "0" ]; do
	((i=$RANDOM%$Row))
	((j=$RANDOM%$Col))
    done
    ((rand=$RANDOM%4))
    if [ $rand -lt 3 ]; then
	array[$i,$j]=2
    else
	array[$i,$j]=4
    fi
}
for ((i=0;i<Row;i++)) 
do
    for ((j=0;j<Col;j++)) 
    do
	((rand=$RANDOM%4))
	if [ $rand -lt 2 ]; then    
            array[$i,$j]=0
	else
	    if [ $rand -lt 3 ]; then
		array[$i,$j]=2
	    else
		array[$i,$j]=4
	    fi
	fi
    done
done


while [ true ]
do
let c=0
    for ((i=0;i<Row;i++)) 
    do

	for ((j=0;j<Col;j++)) 
	do
	if ((${array[$i,$j]} == 0))
	then
	c=$((c+1))
	fi	
	done
	done
	check=0
	for ((i=0;i<Row;i++)) 
    do

	for ((j=0;j<Col;j++)) 
	do
	if ((${array[$i,$j]} == 2048))
	then
	
	check=1
	fi	
	done
	done	
	draw
	if (( $check == 1 ))
	then
	echo -e "\U0001f1fc \U0001F1EE \U0001F1F3 \U0001F3C6 \U0001F3C6 \U0001F3C6  ${ENDCOLOR} " 

	break
	fi
        if (($c > 0))
	then echo ""
	else
	echo ""
	echo -e " \U0001F1F1 \U0001F1F4 \U0001F1F8 \U0001F1F9 \U0001F61E \U0001F61E \U0001F4A3${ENDCOLOR}"
	echo -en "\007"
	break
	fi
    read -n 1 arrow
    if [ $arrow = "w" ]; then
    echo -en "\007"
	move_up
	add_Block
    else 
	if [ $arrow = "d" ]; then
	echo -en "\007"
	     move_right
	     add_Block
	else
	    if [ $arrow = "s" ]; then
	    echo -en "\007"
		move_down
		add_Block		
	    else
		if [ $arrow = "a" ]; then
		echo -en "\007"
		    move_left
		    add_Block		   
		fi
	    fi
	fi
    fi     
done

