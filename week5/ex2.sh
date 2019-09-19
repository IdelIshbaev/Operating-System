#1bin/bash
while true
do
    if ln file.txt file1
    then
        var="$(tail -n 1 file.txt)"
        echo $((var+1)) >> file.txt
        rm -f file1
    fi

done


