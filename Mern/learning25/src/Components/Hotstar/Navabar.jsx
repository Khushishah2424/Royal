import React from 'react'
import { Link } from 'react-router-dom'

export const Navabar = () => {
  return (
    <nav className="navbar navbar-expand-lg navbar-dark bg-dark">
      <Link className="navbar-brand" to="#">Navbar</Link>
      <button className="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent"
        aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
        <span className="navbar-toggler-icon"></span>
      </button>

      <div className="collapse navbar-collapse" id="navbarSupportedContent">
        <ul className="navbar-nav mr-auto flex-wrap">

          <li className="nav-item active">
            <Link className="nav-link" to="/movies">Movies</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/shows">Show</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/useStatedemo">UseState</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/inputdemo1">Inputdemo</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Usememo">Usememo</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Useform">Useform</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Useformdemo2">formdemo2</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Useformdemo3">formdemo3</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Useformdemo4">formdemo4</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Allvalidations">Allvalidations</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Useformdemo5">Useformdemo5</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/Useformdemo6">Useformdemo6</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/bookticket">bookticket</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/apidemo1">apidemo1</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/apidemo2">apidemo2</Link>
          </li>
          <li className="nav-item">
            <Link className="nav-link" to="/apidemo3">apidemo3</Link>
          </li>
           <li className="nav-item">
            <Link className="nav-link" to="/apidemo5">apidemo5</Link>
          </li>
         
         

        </ul>
      </div>
    </nav>
  );
};
