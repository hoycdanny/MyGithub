#/bin/sh
# $Id: generate_cmp.sh 2179 2013-05-28 22:16:51Z mesnierp $

for i in reactive rtcorba; do
  echo $i ;
  for j in 99 999 9999; do
    paste $i.avg.dat ${i}.${j}.dat |
      awk '{print $1, $4 / $2}' > $i.${j}.cmp.dat
  done
done

