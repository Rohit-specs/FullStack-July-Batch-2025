// .checked = property that determine the checked state of an html checkbox or radio button element

const mycheckbox = document.getElementById("mycheckbox")
const visa = document.getElementById("visa")
const upi = document.getElementById("upi")
const cash = document.getElementById("cash")
const submit = document.getElementById("mysubmit")
const agreement_result = document.getElementById("agreement-result")
const payment_result = document.getElementById("payment-result")

submit.onclick= function(){
    if (mycheckbox.checked){
        agreement_result.textContent = "You are agreed to terms and conditions"
    }
    else{
        agreement_result.textContent = "You aren't agreed to terms and conditions"
    }
    if(visa.checked){
        payment_result.textContent = "You are paying with Visa"
    }
    else if(upi.checked){
        payment_result.textContent = "You are paying with UPI"
    }
    else if(cash.checked){
        payment_result.textContent = "You are paying with Cash"
    }
    else{
        payment_result.textContent = "You must select a payment method"
    }
}