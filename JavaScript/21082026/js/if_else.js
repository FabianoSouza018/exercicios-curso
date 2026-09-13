const frm = document.querySelector("form")
const resp1 = document.querySelector("h3")
const resp2 = document.querySelector("h4")

frm.addEventListener ("submit", (evento)=> {
    evento.preventDefault () //Parar o evento e não seguir para proxiam pagina ou recarregar a mesma.

    const nome = frm.inNome.value //const "constante" ou let "pode ser alterado"
    const nota1 = Number(frm.inNota1.value) //Number "tirar as aspas, deixa de ser um char "string" vira um numero
    const nota2 = Number(frm.inNota2.value)

    const media = (nota1 + nota2) / 2

    resp1.innerText = `Média das Notas ${media.toFixed(2)}` //"toFixed(2)" fixar o número de casas decimais 

    if (media >= 7) {
        resp2.innerText =  `Parabéns ${nome}! Você foi aprovado(a)` //"innerText" criação do texto
        resp2.style.color = "blue" //"style" manipular o CSS da pagina "color" escolher a cor, pode ser feito no html ou no JavaScript
    } else if (media >= 4) {
        resp2.innerText = `Atenção ${nome}. Você está em exame` //"${}" adicionar a variavel 
        resp2.style.color = "green"
    } else {
        resp2.innerText =  `Ops ${nome}... Você foi reprovado(a)`
        resp2.style.color = "red"
    }
})

/*
"innerTExt" irá ler apenas texto puro
"innerHTML" irá ler código HTML ex.: colocar emotion 
*/