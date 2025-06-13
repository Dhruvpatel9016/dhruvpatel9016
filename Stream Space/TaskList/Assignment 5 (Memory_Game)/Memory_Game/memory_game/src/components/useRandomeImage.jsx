
import thor from '../ass/thor.png'
import hulk from '../ass/hulk.png'
import ironman from '../ass/iron-man.png'
import vision from '../ass/vision.png'
import bbcap from '../ass/bbcap.png'
import marvel from '../ass/marvel.png'
import panther from '../ass/panther.png'
import witch from '../ass/witch.png'
import { useState } from 'react'


function shuffeArray() {
    const inputArray = [
        {
            name: "thor",
            image: thor,
            visible: false,
          },
          {
            name: "hulk",
            image: hulk,
            visible: false,
          },
          {
            name: "ironman",
            image: ironman,
            visible: false,
          },
      
          {
            name: "vision",
            image: vision,
            visible: false,
          },
          {
            name: "bbcap",
            image: bbcap,
            visible: false,
          },
          {
            name: "marvel",
            image: marvel,
            visible: false,
          },
          {
            name: "panther",
            image: panther,
            visible: false,
          },
          {
            name: "witch",
            image: witch,
            visible: false,
          },
          {
            name: "thor",
            image: thor,
            visible: false,
          },
          {
            name: "hulk",
            image: hulk,
            visible: false,
          },
          {
            name: "ironman",
            image: ironman,
            visible: false,
          },
          {
            name: "vision",
            image: vision,
            visible: false,
          },
          {
            name: "bbcap",
            image: bbcap,
            visible: false,
          },
          {
            name: "marvel",
            image: marvel,
            visible: false,
          },
          {
            name: "panther",
            image: panther,
            visible: false,
          },
          {
            name: "witch",
            image: witch,
            visible: false,
          },
    ];
  
    for (var i = 0; i < inputArray.length; i++) {
      let randomIndex = Math.floor(Math.random() * inputArray.length);
  
      let temp = inputArray[i];
      inputArray[i] = inputArray[randomIndex];
      inputArray[randomIndex] = temp;
    }
  
    return inputArray;
  }
  
  export default function useRandomImage() {
    const [images, setImages] = useState(shuffeArray());
  
    return [images, setImages];
  }
  