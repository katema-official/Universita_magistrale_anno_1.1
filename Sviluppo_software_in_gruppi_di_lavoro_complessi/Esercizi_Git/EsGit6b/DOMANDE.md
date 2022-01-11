Scrivere un *script* (cioè una sequenza di comandi non interattivi) che ricrei,
in un ambiente "vergine" come quello di una macchina virtuale di un sistema di
*continuous integration*, un *repository* nell'analogo stato di quello che si
trova nella cartella allegata `esgit`. Dovranno corrispondere tra le altre cose
gli hash dei *blob* e dei *tree* (non quelli dei commit che dipendono anche da data
e autore), l'*index* e la *working directory*.

I comandi ammessi sono quelli di `git` + `printf`, `mkdir`, `cp`.
Per rendere eseguibile lo script, usare il comando `chmod +x nome_script`
