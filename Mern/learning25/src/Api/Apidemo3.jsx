import axios from 'axios'
import React, { useState } from 'react'
import { Link } from 'react-router-dom'

export const Apidemo3 = () => {
    const[movies,setmovies]= useState([])
    const[moviename,setmoviename]=useState("")

    const getMoviedata = async()=>{
        // const res= await axios.get(`http://www.omdbapi.com/?apikey=9d57be0b&s=12th Fail`)
        const res= await axios.get(`http://www.omdbapi.com/?apikey=9d57be0b&s=${moviename}`)
        console.log(res.data.Search)
        setmovies(res.data.Search)
    }
    return(
    <div>
        <h1>Apidemo3</h1>
        <button onClick={()=>{getMoviedata()}}>Get</button>
        <input type="text" placeholder='Enter a mobie name' onChange={(event)=>{setmoviename(event.target.value)}}/>
        <div className='container'>
            <div className='row' style={{}}>
            
                {
                    movies.map((movies)=>{
                        return <div className='card' style={{margin:"20px",height:"300px",width:"300px"}}>
                                <h1>Name = {movies.Title}</h1>
                                <h2>Year = {movies.Year}</h2>
                                <p>IMDB = {movies.imdbID}</p>
                                <img src={movies.Poster} alt=""  style={{height:"100px", width:"100px"}}/>
                                 <Link to={`/moviedetail/${movies.imdbID}`}>DETAIL</Link>
                        </div>
                    })
                }
            </div>
        </div>

    </div>
    )
}
