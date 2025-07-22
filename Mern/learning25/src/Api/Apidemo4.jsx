import axios from 'axios'
import React, { useState } from 'react'
import { useParams } from 'react-router-dom'

export const Apidemo4 = () => {
  const imdbId = useParams.id
  const [detail, setdetail] = useState({})
  const getMovieDetail = async()=>{
        const res = await axios.get(`http://www.omdbapi.com/?apikey=9d57be0b&i=${imdbId}`)
        console.log(res.data)
        setdetail(res.data)
  }
  useEffect(()=>{
        getMovieDetail()
   },[])
  return (
    <div>
        <h1>Apidemo4</h1>
        <div>
        <h1>MOVE DETAIL</h1>
        <h1>TITLE ={detail.Title}</h1>
        <h3>Year = {detail.Year}</h3>
        <img src={detail.Poster}></img>
    </div>
    </div>
  )
}
