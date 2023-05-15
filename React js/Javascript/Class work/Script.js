function RegAPI()
{
    let uname = document.getElementById('uname').value 
    let email = document.getElementById('email').value 
    let pwd = document.getElementById('pwd').value 
    let mobile = document.getElementById('mobile').value 

    console.log(uname);

    const data = {username:uname,email:email,password:pwd,mobile:mobile}
    console.log(data);
}