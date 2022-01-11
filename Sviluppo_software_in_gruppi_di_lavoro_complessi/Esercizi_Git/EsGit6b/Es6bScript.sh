git init
printf "primo file" > primo
git add primo
git commit -m "uno"
printf "secondo file" > secondo
git add secondo
git commit -m "due"
git checkout HEAD^
git checkout -b develop
printf "\nmodificato" >> primo
git add primo
git commit -m "sviluppi"
printf "terzo file" > terzo
git add terzo
git commit -m "ok ma da spostare"
git rebase master
git commit --amend -m "tre"