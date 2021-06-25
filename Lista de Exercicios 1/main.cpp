//Aluna: Alana Cristina de Carvalho Araujo


//1 QUESTÃO 
tr -sc 'A-Za-z' '\n' < A-Semana-Machado-de-Assis.txt | sort | uniq -c > Contagem-das-palavras
 
//2 QUESTÃO 
tr -sc 'A-Za-z' < A-Semana-Machado-de-Assis.txt | tr '[:upper:]' '[:lower:]' > Downcasing

//3 QUESTÃO 
tr -sc 'A-Za-z' '\n' < A-Semana-Machado-de-Assis.txt |tr 'A-Z' 'a-z' | tr -sc 'aeiou' '\n' | sort | uniq -c > vogais-distintas

//4 QUESTÃO 
tr -sc 'A-Za-z' '\n' < A-Semana-Machado-de-Assis.txt | sort | uniq -c | sort -nr | head -n 50 > 50-palavras-mais-comuns

//5 QUESTÃO 
tr -sc 'A-Za-z' '\n' < A-Semana-Machado-de-Assis.txt | grep 'ar$' | sort | uniq -c > termina-ar

//6 QUESTÃO 
grep -E '[a-zA-Z]{4}$' A-Semana-Machado-de-Assis.txt | wc > palavras-4-letras

//7 QUESTÃO 
grep -v '[AEIOUaeiou]' A-Semana-Machado-de-Assis.txt | sort | uniq | wc > palavras-sem-vogal

//8 QUESTÃO 
tr -sc 'A-Za-z' '\n' < A-Semana-Machado-de-Assis.txt | grep -v '[AEIOUaeiou]' | sort | uniq -c > mostrar-palavras-sem-vogal

//9 QUESTÃO 
tr 'A-Z' 'a-z' < A-Semana-Machado-de-Assis.txt | grep -P '^[^aeiou]*[aeiou]+[^aeiou]*$' | uniq | wc > uma-sequencia-vogais