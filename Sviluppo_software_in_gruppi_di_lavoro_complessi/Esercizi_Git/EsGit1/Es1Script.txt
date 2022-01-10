git init
"text A\n" > A
printf "text B\n" > B
git add A B
git commit -m "uno"
git branch student
git mv A D
git mv B C
git commit -m "due"
mkdir _c
git mv C D _c
git mv _c C
printf "text C\n" > A
printf "text C\n" > B
git add A B
git commit -m "tre"
