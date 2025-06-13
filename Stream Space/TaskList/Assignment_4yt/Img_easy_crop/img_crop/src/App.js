import Cropper from 'react-easy-crop';
import './App.css';
import { useState } from 'react';

function App() {
  const [image, setImage] = useState(null); 
  const [crop, setCrop] = useState({ x: 0, y: 0 }); 
  const [zoom, setZoom] = useState(1); 
  const [croppedAreaPixels, setCroppedAreaPixels] = useState(null); 
  const [croppedImage, setCroppedImage] = useState(null); 

  const onImageChange = (e) => {
    if (e.target.files && e.target.files[0]) {
      const file = e.target.files[0];
      const reader = new FileReader();
      reader.onload = () => setImage(reader.result);
      reader.readAsDataURL(file);
    }
  };

  const onCropComplete = (croppedArea, croppedAreaPixels) => {
    setCroppedAreaPixels(croppedAreaPixels);
  };

  const showCroppedImage = async () => {
    if (!image || !croppedAreaPixels) return;
    const croppedImg = await getCroppedImg(image, croppedAreaPixels);
    setCroppedImage(croppedImg);
  };

  const getCroppedImg = (imageSrc, crop) => {
    return new Promise((resolve, reject) => {
      const image = new Image();
      image.src = imageSrc;
      image.onload = () => {
        const canvas = document.createElement("canvas");
        canvas.width = crop.width;
        canvas.height = crop.height;
        const ctx = canvas.getContext("2d");

        ctx.drawImage(
          image,
          crop.x,
          crop.y,
          crop.width,
          crop.height,
          0,
          0,
          crop.width,
          crop.height
        );

        resolve(canvas.toDataURL("image/png")); 
      };

      image.onerror = (error) => reject(error);
    });
  };

  const downloadImage = () => {
    const link = document.createElement("a");
    link.href = croppedImage;
    link.download = "cropped-image.png";
    link.click();
  };

  // const [aspectRatio, setAspectRatio] = useState(16 / 9);

    return (
      <div className="App container mt-3">

        <h1 className=".App-header">React Easy Crop</h1>
        <input type="file" accept="image/*" required onChange={onImageChange} />

        {image && (
          <div style={{ position: "relative", width: "100%", height: "450px" }} >
            <Cropper
              image={image}
              crop={crop}
              zoom={zoom}
              onCropChange={setCrop}
              onZoomChange={setZoom}
              onCropComplete={onCropComplete}
            // aspectRatio={aspectRatio}
            // onCropComplete={setAreaPixels}
            />
          </div>
        )}
        <button onClick={showCroppedImage} >Crop</button>
        {croppedImage && (
          <div>
            <h3>Cropped Image Preview</h3>
            <img src={croppedImage} style={{ maxWidth: "100%" }} />
            <button onClick={downloadImage}>
              Download Image
            </button>
          </div>
        )}
      </div>
    );
  }
export default App;
