for file in `ls *_suite.c`
do
c_file=`echo $file | sed 's/_suite.c$/.c/'`
bin_file=`echo $file | sed 's/.c$//'`
echo "--------------------------------------"
echo "--Test Suite: $bin_file"
gcc $file $c_file -o $bin_file  ; ./$bin_file
done
