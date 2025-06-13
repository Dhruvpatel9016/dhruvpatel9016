import React, { useState } from 'react';
import './PDFviewer.css';
import { Worker, Viewer } from '@react-pdf-viewer/core';
import { defaultLayoutPlugin } from '@react-pdf-viewer/default-layout';
import '@react-pdf-viewer/core/lib/styles/index.css';
import '@react-pdf-viewer/default-layout/lib/styles/index.css';

const Mypage = () => {
  const [pdfFile, setPDFFile] = useState(null);
  const [viewPdf, setViewPdf] = useState(null);
  const fileType = ['application/pdf'];
  const newplugin = defaultLayoutPlugin();

  const handleChange = (e) => {
    let selectedFile = e.target.files[0];
    if (selectedFile) {
      if (fileType.includes(selectedFile.type)) {
        let reader = new FileReader();
        reader.readAsDataURL(selectedFile);
        reader.onload = (e) => {
          setPDFFile(e.target.result);
        };
      } else {
        setPDFFile(null);
        alert("Please select a valid PDF file.");
      }
    } else {
      console.log("Please select a file.");
    }
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    if (pdfFile) {
      setViewPdf(pdfFile);
    } else {
      setViewPdf(null);
    }
  };

  return (
    <div className='container mt-3'>
      <form onSubmit={handleSubmit}>
        <input type='file' className='form-control' onChange={handleChange} />
        <button type='submit' className='btn btn-success mt-3'>View PDF</button>
      </form>

      <h2 className='mt-2'>View PDF</h2>

      <div className='pdf-container mt-2'>
        <Worker workerUrl={`https://cdnjs.cloudflare.com/ajax/libs/pdf.js/3.11.174/pdf.worker.min.js`}>
        {/* <Worker workerUrl={`https://unpkg.com/pdfjs-dist@3.12.0/build/pdf.worker.min.js`}> */}
          {viewPdf ? (
            <Viewer fileUrl={viewPdf} plugins={[newplugin]} />
          ) : (
            <h1>No PDF</h1>
          )}
        </Worker>
      </div>
    </div>
  );
};

export default Mypage;