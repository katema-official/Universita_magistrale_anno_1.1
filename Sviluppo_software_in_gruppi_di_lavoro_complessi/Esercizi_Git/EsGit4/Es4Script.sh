git init
mkdir R
printf "linea\n" > R/S
printf "primo\n" > T
git add R/S T
git commit -m "feature RT"
git mv R Z
printf "linea\n" > U
"primo\naggiunta\n" > T
printf "terzo\n" > Terzo
git add T Terzo U
git restore --staged Terzo
git commit -m "feature ZUT"
git branch ZUT
git rm T U Z/S
git comit -m "end"
git tag tmp
git checkout tmp
git tag -d tmp
