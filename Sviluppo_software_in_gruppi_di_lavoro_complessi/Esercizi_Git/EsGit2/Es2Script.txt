git init
printf "text A\n" > A
printf "text B\n" > B
git add A B
git commit -m "uno"
git branch student
mkdir _C
git mv A B _C
git mv _C/A _C/D
git mv _C/B _C/C
git mv _C C
printf "text C\n" > A
printf "text C\n" > B
git add A B
git commit -m "tre"
git rm A B
git mv C _C
git mv _C/C C
git mv _C/D D
#se si vuole rimuovere la cartella vuota: rm -r _C
#infatti git non considera subdirectory vuote, pertanto git rm _C non ha effetto
git commit -m "due"
git checkout student
printf "text D\n" > D
git add D
git restore --staged D
#rm D