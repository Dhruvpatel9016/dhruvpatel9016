import { useEffect, useState } from 'react';
import { GameContext } from './GameContext';
import './App.css';
import GameBorad from './components/GameBoard';
import useRandomImage from './components/useRandomeImage';


function App() {
  const [score, setScore] = useState(0);
  const [first, setFirst] = useState(-1);
  const [second, setSecond] = useState(-1);
  const [images, setImages] = useRandomImage();


  function flipImage(index) {
    if (second !== -1) {
      alert("Don't Cheat");
      return;
    }
  
    setImages((value) => {
      const temp = [...value];
      temp[index].visible = true;

      return temp;
    });

    if (first === -1) {
      setFirst(index);
    } else {
      setSecond(index);
    }
  }

  useEffect(() => {
    if (second === -1) return;

    if (images[first].name === images[second].name) {
      setScore(score + 10);
      setFirst(-1);
      setSecond(-1);
    } else {
      setTimeout(() => {
        setImages((value) => {
          const temp = [...value];
          temp[first].visible = false;
          temp[second].visible = false;          
          setFirst(-1);
          setSecond(-1);
          return temp;

        });
      }, 800);
    }
    // eslint-disable-next-line
  }, [second]);




  return (
    <GameContext.Provider value={{ images, flipImage, score }}>
      <div className="App container">
        <GameBorad />
      </div>
    </GameContext.Provider>
  );
}

export default App;
