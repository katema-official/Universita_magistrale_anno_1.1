git flow feature finish -r A1
#vim A
git add A
git commit -m "Merge di A1"
git flow feature finish -r A1
git flow feature finish -r A3
#vim A
git add A
git rebase --continue
git flow feature finish -r A3
git flow feature finish -r A2
git flow release start A_release
printf "Aggiunta ad A2" >> A2
git add A2
git commit -m "Aggiunta roba ad A2"
git flow release finish A_release
git flow feature finish -r B1
git flow feature finish -r B2
git flow release start B_release
git flow release finish B_release


#Proviamo a farlo esplicitando il rebase
git checkout feature/A1
git rebase develop
#vim A
git add A
git rebase --continue
#vim A
git add A
git rebase --continue
git flow feature finish A1
git checkout feature/A2
git rebase develop
git flow feature finish A2
#l'andazzo è questo, comunque funziona