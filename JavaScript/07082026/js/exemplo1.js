// cria referência ao form e ao elemento h3 (onde será exibida a respota)
const frm = document.querySelector("form");
const resp = document.querySelector("h3");

frm.addEventListener("submit", (e) => {
    const nome = frm.inNome.value; //obtém o nme digitado no form
    resp.innerText = `Olá ${nome}`; //exibe a resposta do programa
    e.preventDefault () ; //evita envo do form
}) ;