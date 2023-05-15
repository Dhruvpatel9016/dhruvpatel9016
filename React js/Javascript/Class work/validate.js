function Validate(e,spnid)
{
    if(e.value=="")
    {
        document.getElementById(spnid).style.color="red";
        document.getElementById(spnid).innerHTML="Please Enter Data!";
    }
    else{
        document.getElementById(spnid).innerHTML="";
    }
}
function namevalid(e,spnid)
{
    let name=/^[a-zA-Z]+$/
    if(name.test(e.value))
    {
        document.getElementById(spnid).innerHTML="";
    }
    else{
        document.getElementById(spnid).style.color="red";
        document.getElementById(spnid).innerHTML="please Enter only characters!";
    }
}
function emailvalid(e,spnid)
{
    let email=/^([a-z0-9._-])+@+([a-z0-9._-])+\.([a-z]{2,3})$/
    if(email.test(e.value))
    {
        document.getElementById(spnid).innerHTML="";
    }
    else{
        document.getElementById(spnid).style.color="red";
        document.getElementById(spnid).innerHTML="please Enter valid e-mail!";
    }
}
function pwdvalid(e,spnid)
{
    let pwd=/^[a-zA-Z0-9.-_]{3,5}$/
    if(pwd.test(e.value))
    {
        document.getElementById(spnid).innerHTML="";
    }
    else{
        document.getElementById(spnid).style.color="red";
        document.getElementById(spnid).innerHTML="please Enter min 3 and max 5 charas!";
    }
}
function mobilevalid(e,spnid)
{
    let mobile=/^[0-9]{10}$/
    if(mobile.test(e.value))
    {
        document.getElementById(spnid).innerHTML="";
    }
    else{
        document.getElementById(spnid).style.color="red";
        document.getElementById(spnid).innerHTML="please Enter valid mobile!";
    }
}
