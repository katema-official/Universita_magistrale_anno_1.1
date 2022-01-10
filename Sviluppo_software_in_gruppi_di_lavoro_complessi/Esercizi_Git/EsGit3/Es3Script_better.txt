git init
printf "text B\n" > B
printf "text A\n" > A
git add A B
git commit -m "root"
git checkout -b uno
printf "text C\n" > C
git add C
git commit -m "first"
git checkout master
printf "text E\n" > E
git add E
mkdir D
git mv A B E D
git commit -m "bis"
git merge uno