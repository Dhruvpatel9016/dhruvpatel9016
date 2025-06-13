import GameCard from "./GameCard";
import { GameContext } from "../GameContext";
import { useContext } from "react";

export default function GameBorad() {
  const { images , score} = useContext(GameContext);

  return (
    <div className="container borddv">
      <div className="infod">
        <h1>Memory Game</h1>
        {/* <button className="btn mt-1 btn-primary" >Start New Game</button> */}
        <h6 className="mt-2">Score : {score}</h6>
      </div>

      <div className="box">
        {images.map((item, index) => (
          <GameCard
            image={item.image}
            visible={item.visible}
            name={item.name}
            key={index}
            index={index}
          />
        ))}
      </div>
    </div>
  );
}
