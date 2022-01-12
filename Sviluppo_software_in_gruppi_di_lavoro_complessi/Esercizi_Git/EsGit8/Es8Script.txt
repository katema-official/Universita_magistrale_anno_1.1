git init
printf "start" > start.txt
git add start.txt
git commit -m "uno"
git checkout -b trunk
git branch -d master
git checkout -b develop
printf "\ncontinue" >> start.txt
git add start.txt
git commit -m "edit"
mkdir back
git mv start.txt back/start.txt
git commit -m "moved"
printf "new" > lib.txt
git add lib.txt
git commit -m "lib"
git checkout trunk
git cherry-pick develop
git cherry-pick develop^^
git cherry-pick develop^ --no-commit
printf "back\n" > .gitignore