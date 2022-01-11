git init
printf "uno" > U
printf "due" > Z
git add U Z
git commit -m "primo"
mkdir A
git mv U A/U
printf "tre\n" > B
git add B
git commit -m "bello"
git checkout -b ok
git rm -r .
git commit -m "errore"
git reset --hard HEAD^
printf "\naggiunta" >> Z
git add Z
git commit -m "finale"
git checkout master
printf "studenti" >> B
git add B
printf " promossi" >> B


