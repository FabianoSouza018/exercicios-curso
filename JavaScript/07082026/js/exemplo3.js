// cria referência ao form e ao elemento h3 (onde será exibida a respota)
const frm = document.querySelector("form");
const resp1 = document.getElementById("1");
const resp2 = document.getElementById("2");
const resp3 = document.getElementById("3");

frm.addEventListener("submit", (e) => {
    const nome = frm.inNome.value; //obtém o nme digitado no form
    const idade = frm.inIdade.value;
    const cidade = frm.inCidade.value;

    resp1.innerText = `Olá ${nome}`; //exibe a resposta do programa
    resp2.innerText = `Você possui ${idade} `;
    resp3.innerText = `Mora em ${cidade}. `;
    
    e.preventDefault () ; //evita envo do form
}) ;