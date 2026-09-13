const frm = document.querySelector("form");
const resp1 = document.querySelector("#outMedicamento");
const resp2 = document.querySelector("#outPromocao");

frm.addEventListener("submit", (e) => {
    const Medicamento =  frm.inMedicamento.value;
    let valor = Number(frm.inValor.value);

    valor =  Math.floor(valor * 2);

    resp1.innerText = `Promoção de ${Medicamento}`;
    resp2.innerText = `Pague apenas R$ ${valor.toFixed(2)} no Medicamento`;

    e.preventDefault ();
});