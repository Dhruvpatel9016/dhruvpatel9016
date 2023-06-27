// typing animation

var typed = new Typed(".typing",{
	strings:["","web Designer" , "Web Devloper" , "Backend Devloper"],
	typeSpeed:100,
	backSpeed:60,
	loop:true
})

// aside

const nav = document.querySelector(".nav"),
      navlist = nav.querySelectorAll("li"),
      totalnavList = navlist.length,
      allSection = document.querySelectorAll(".section"),
      totalSection = allSection.length;
      for(let i=0; i<totalnavList; i++)
      {
      	const a = navlist[i].querySelector("a");
      	a.addEventListener("click",function()
      	{
      		
      		removeBackSection();
      		for(let j=0; j<totalnavList; j++)
      		{
      			if(navlist[j].querySelector("a").classList.contains("active"))
      			{
      				addBackSection(j);
      				//allSection[j].classList.add("back-section");
      			}
      			navlist[j].querySelector("a").classList.remove("active");
      		}
      		this.classList.add("active")
      		showSection(this)
      		if(window.innerWidth < 1200)
      		{
      			asideSectionTogglerbtn();
      		}
      	})

      }


      function removeBackSection()
      {
      	for(let i=0; i<totalSection;i++)
	      {
	      	allSection[i].classList.remove("back-section")
	      }
      }

      function addBackSection(num)
      {
      	allSection[num].classList.add("back-section");
      }

      function showSection(element)
      {
      	for(let i=0; i<totalSection;i++)
      	{
      		allSection[i].classList.remove("active")
      	}
      	const target=element.getAttribute("href").split("#")[1];
      	document.querySelector("#"+ target).classList.add("active")
      	
      }

      function updateNav(element)
      {
      	for(let i = 0; i < totalnavList; i++)
      	{
      		navlist[i].querySelector("a").classList.remove("active");
      		const target=element.getAttribute("href").split("#")[1];

      		if (target === navlist[i].querySelector("a").getAttribute("href").split("#")[1]) {
	       	   navlist[i].querySelector('a').classList.add("active");
	             }
      	}

	      
      }
      document.querySelector(".hire-me").addEventListener("click",function(){
      	const sectionIndex = this.getAttribute("data-section-index");
      	console.log(sectionIndex)
      	showSection(this);
      	updateNav(this);
      })
      const navtogglerbtn = document.querySelector(".nav-toggler"),
	  aside = document.querySelector(".aside");
	  navtogglerbtn.addEventListener("click",() =>{
	  	asideSectionTogglerbtn();
	  })
	  function asideSectionTogglerbtn(){
	  	aside.classList.toggle("open");
	  	navtogglerbtn.classList.toggle("open");
	  	for(let i=0; i<totalSection; i++ )
	  	{
	  		allSection[i].classList.toggle("open")
	  	}
	  }      
