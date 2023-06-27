import React from 'react';
import ReactDom from 'react-router-dom';
import '.index.css'
import App from './App';
import reportWebVitals from './reportWebVitals';
import 'bootstrap5/src/css/bootstrap.min.css'
const root = ReactDom.creteRoot(document.getElementById('root'));

root.render(
  <React.StrictMode>
    <App/>
  </React.StrictMode>
)
reportWebVitals();