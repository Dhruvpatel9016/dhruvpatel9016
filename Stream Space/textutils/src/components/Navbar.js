import React from "react";
import propTypes from 'prop-types';

export default function Navbar(props) {
  return (
    <>
      <nav className={`navbar navbar-expand-lg navbar-${props.mode} bg-${props.mode}`}>
        <div className="container-fluid">
          <a className="navbar-brand" href="/">
            {props.tittle}
          </a>
          <button
            className="navbar-toggler"
            type="button"
            data-bs-toggle="collapse"
            data-bs-target="#navbarSupportedContent"
            aria-controls="navbarSupportedContent"
            aria-expanded="false"
            aria-label="Toggle navigation"
          >
            <span className="navbar-toggler-icon"></span>
          </button>
          <div className="collapse navbar-collapse" id="navbarSupportedContent">
            <ul className="navbar-nav me-auto mb-2 mb-lg-0">
              <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="/">
                  Home
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link" href="/">
                  {props.aboutText}
                </a>
              </li>
            </ul>
            {/* <form className="d-flex" role="search">
              <input
                className="form-control me-2"
                type="search"
                placeholder="Search"
                aria-label="Search"
              />
              <button className="btn btn-outline-primary" type="submit">
                Search
              </button>
            </form> */}

            <div className="form-check form-switch">
              <input className="form-check-input " onClick={props.toggleMode} type="checkbox" id="flexSwitchCheckDefault"/>
                <label className={`form-check-label text-${props.mode==='light'?'dark':'light'}`} for="flexSwitchCheckDefault">Enable Darkmode</label>
            </div>

          </div>
        </div>
      </nav>
    </>
  );
}

Navbar.propTypes = {
  tittle: propTypes.string.isRequired,
  aboutText: propTypes.string.isRequired
}
Navbar.defaultProps = {
  tittle: 'Set title here',
  aboutText: 'About text here'
};
