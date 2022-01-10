git init
printf "pluto\n" > X
printf "pippo\n" > Y
mkdir Z
printf "pippo\n" > Z/Y
git add X Y Z/Y
git commit -m "primo"
printf "pippo\n" > X
printf "pippo e minnie\n" > D
git add X D
git rm Y
git commit -m "successivo"
git branch student
git tag delivered
git mv Z _Z
mkdir Z
git mv _Z D X Z
git mv Z/_Z Z/Z
printf "sbagliato\n" > A
git hash-object A
git add A
git restore --staged A
git commit -m "ultimo?"
git checkout student
git reset master -- Z/Z/Y Z/D
#con git diff si può notare che solo questi ultimi due file
#sono presenti nell'index