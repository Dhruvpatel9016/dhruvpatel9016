import logo from './logo.svg';
import './App.css';
import Autosuggest from './Compo/Autosuggest';

function App() {
  return (
    <div className="App">
      <h1 className="text-danger mt-4">Autosuggest Component</h1>
      <h3 className="text-danger mt-3">Search Fruit Name..</h3>
      <Autosuggest/>
    </div>
  );
}

export default App;
