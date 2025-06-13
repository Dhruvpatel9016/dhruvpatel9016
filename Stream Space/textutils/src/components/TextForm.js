import React, { useState } from "react";


export default function TextForm(props) {
    const handleUpClick = ()=>{
        console.log("Uppercase was clicked" + text);
        let newtext= text.toUpperCase();
        setText(newtext)
    }
    const handleLoClick = ()=>{
        console.log("Uppercase was clicked" + text);
        let newtext= text.toLowerCase();
        setText(newtext)
    }
    const handleClearClick = ()=>{
        let newtext= '';
        setText(newtext)
    }

    const handleCopy = ()=>{
        var text = document.getElementById("myBox");
        text.select();
        navigator.clipboard.writeText(text.value);
    }
    const handleExtraSpaces = ()=>{
        let newtext= text.split(/[ ]+/);
        setText(newtext.join(" "))
    }
    

    const handleOnChange = (event)=>{
        console.log("On change");
        setText(event.target.value)
    }
    const [text,setText] = useState('Enter text here');
    //   text = "new text"; //Wrong wayb to change the state
    //   setText("new text"); //Currect wayb to change the state
    return (
        <>
        <div className="container" style={{color: props.mode==='dark'?'white':'black'}}>
            <h1>{props.heading}</h1>
            <div className="mb-3">
                <textarea
                    className="form-control"
                    id="myBox"
                    rows="8"
                    style={{backgroundColor: props.mode==='dark'?'gray':'white'}}
                    value={text} onChange={handleOnChange}></textarea>
            </div>
            <button class="btn btn-primary mx-2" onClick={handleUpClick}>Convert to Upercase</button>
            <button class="btn btn-primary mx-2" onClick={handleLoClick}>Convert to Lowercase</button>
            <button class="btn btn-primary mx-2" onClick={handleClearClick}>Clear Text</button>

            <button class="btn btn-primary mx-2" onClick={handleCopy}>Copy Text</button>
            <button class="btn btn-primary mx-2" onClick={handleExtraSpaces}>Remove Extra Spaces</button>
        </div>
        <div className="container my-2">
            <h1>Your text summary</h1>
            <p>{text.split(" ").length} words, {text.length} characters</p>
            <p>{0.008 * text.split(" ").length} Minutes read</p>
            <h2>Preview</h2>
            <p>{text}</p>
            <p>{text.length>0?text:"Enter somthing to preview it here"}</p>
        </div>
        </>
    );
}
