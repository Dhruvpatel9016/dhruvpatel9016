import logo from './logo.svg';
import './App.css';
import Navbar from './components/Navbar';
import TextForm from './components/TextForm';
import About from './components/About';
import { useState } from 'react';
// import Alert from './components/Alert';

function App() {

  const [Mode, setMode] = useState('light');
 

  const toggleMode = ()=>{
    if(Mode === 'light'){
      setMode('dark')
      document.body.style.backgroundColor = 'gray';
    }
    else{
      setMode('light')
      document.body.style.backgroundColor = 'white';
    }
  }

  return (
    <>
     <Navbar tittle="Textutils234" mode={Mode} toggleMode={toggleMode}/>
     {/* <Alert alert={alert} /> */}
     <div className="container my-5">
       <TextForm heading="Enter the text to analayse"/>
       {/* <About/> */}
     </div>
    </>
  );

}

export default App;
