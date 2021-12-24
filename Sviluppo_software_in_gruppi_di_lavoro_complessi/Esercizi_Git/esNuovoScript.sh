git init
printf "start" > start.txt
git add start.txt
git commit -m "uno"
git branch develop
git checkout develop
printf "\ncontinue" >> start.txt
git add start.txt
git commit -m "edit"
git checkout master
printf "new" > lib.txt
git add lib.txt
git commit -m "lib"
git checkout -b trunk
git cherry-pick develop
git checkout develop
mkdir back
git mv start.txt back
git commit -m "moved"
git cherry-pick master
git checkout trunk
mkdir back
git mv start.txt back
printf "back" > .gitignore
git branch -d master
