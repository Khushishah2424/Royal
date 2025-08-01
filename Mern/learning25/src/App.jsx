import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
// import './App.css'
import { Header } from './components/Header';
import Contents from './components/Contents';
import { Footer } from './components/Footer';
// import { Mapdemo1 } from './components/Mapdemo1';
// import { Mapdemo2 } from './components/Mapdemo2';
// import { Mapdemo3 } from './Components/Mapdemo3';
import { Routes , Route} from 'react-router-dom';
import { Movies } from './Components/Hotstar/Movies';
import { Shows } from './Components/Hotstar/Shows';
import { Navabar } from './Components/Hotstar/Navabar';
import { Home } from './Components/Hotstar/Home';
import { PlayContent } from './Components/Hotstar/PlayContent';
import { UseStateDemo } from './Components/UseStateDemo';
import { Inputdemo } from './Components/Inputdemo';
import { UseMemoBomb } from './Components/UseMemoBomb';
import { Useformdemo } from './Components/Useformdemo';
import { Useformdemo2 } from './Components/useformdemo2';
import { Useformdemo3 } from './Components/Useformdemo3';
import { Useformdemo4 } from './Components/Useformdemo4';
import { Allvalidations } from './Components/allvalidations';
import { Useformdemo5 } from './Components/Useformdemo5';
import { Useformdemo6 } from './Components/Useformdemo6';
import { Ticketbook } from './form/ticketbook';
import { Apidemo } from './Api/Apidemo';
import { Apidemo2 } from './Api/Apidemo2';
import { Apidemo3 } from './Api/Apidemo3';
import { Apidemo4 } from './Api/Apidemo4';
import { Apidemo5 } from './Api/Apidemo5';
import { Apidemo11 } from './Api/Apidemo11';
import { Apidemo6 } from './Api/Apidemo6';

function App() {


  return (
    <div>
      {/* <Header></Header> */}
      {/* <Contents></Contents> */}
      {/* <Mapdemo1></Mapdemo1> */}
      {/* <Mapdemo2></Mapdemo2> */}
      {/* <Mapdemo3></Mapdemo3>
      <Footer></Footer> */}
      <Navabar></Navabar>
     <Routes>
        <Route path ='/' element={<Home/>}></Route>
        <Route path='movies' element={<Movies/>}></Route>
        <Route path='shows' element={<Shows/>}></Route>
        <Route path='/*' element={<h1>Error</h1>}></Route>
        <Route path = '/playing/:id' element={<PlayContent></PlayContent>}></Route>
       <Route path='/useStatedemo' element={<UseStateDemo></UseStateDemo>}></Route>
     <Route path='/inputdemo1' element={<Inputdemo></Inputdemo>}></Route>
       <Route path='/Usememo' element={<UseMemoBomb></UseMemoBomb>}></Route>
       <Route path='/Useformdemo2' element={<Useformdemo2></Useformdemo2>}></Route>
       <Route path='/Useformdemo3' element={<Useformdemo3></Useformdemo3>}></Route>
       <Route path='/Useformdemo4' element={<Useformdemo4></Useformdemo4>}></Route>
       <Route path='/Allvalidations' element={<Allvalidations></Allvalidations>}></Route>
       <Route path='/Useformdemo5' element={<Useformdemo5></Useformdemo5>}></Route>
       <Route path='/Useformdemo6' element={<Useformdemo6></Useformdemo6>}></Route>
       <Route path='/bookticket' element={<Ticketbook></Ticketbook>}></Route>
       <Route path='/apidemo1' element={<Apidemo></Apidemo>}></Route>
       <Route path='/apidemo2' element={<Apidemo2></Apidemo2>}></Route>
       <Route path='/apidemo3' element={<Apidemo3></Apidemo3>}></Route>
       {/* <Route path='/apidemo4' element={<Apidemo4></Apidemo4>}></Route> */}
        <Route path='/apidemo5' element = {<Apidemo5/>}>apidemo5</Route>
        <Route path='/apidemo6' element = {<Apidemo6/>}>Apidemo6</Route>

        <Route path='/moviedetail/:id' element = {<Apidemo4/>}>moviedetail</Route>
        <Route path='/apidemo11' element = {<Apidemo11/>}>Apidemo11</Route>







       
      


     </Routes>
    </div>
  
   
    

  )
}

export default App
