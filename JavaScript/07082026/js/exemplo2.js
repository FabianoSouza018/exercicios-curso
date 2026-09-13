// cria referência ao form e ao elemento h3 (onde será exibida a respota)
const frm = document.querySelector("form");
const resp = document.querySelector("h3");

frm.addEventListener("submit", (e) => {
    const nome = frm.inNome.value; //obtém o nme digitado no form
    const idade = frm.inIdade.value;
    const cidade = frm.inCidade.value;

    resp.innerText = `Olá ${nome}, você possui ${idade} anos e Mora em ${cidade}. `; //exibe a resposta do programa
    
    e.preventDefault () ; //evita envo do form
}) ;