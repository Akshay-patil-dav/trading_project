  // Your JSON data (or load it from an external file using fetch as shown earlier)
  const data = {
    "emplo": [
        { 
          "no": "1",
          "Topic": "Modular Chiller Market Size, Share  Analysis, By Type (...",
           "bio": "The global modular chillers market size was valued at USD 3.82 billion  in 2018 and is projected to reach USD 9.12 billion by 2032, exhibiting a  CAGR of 6% during the fore...",
           "date" : "May, 2024 " ,
           "view": "4,850.00"
        },
        { 
          "no": "2",
          "Topic": "Industrial Lasers Market Size, Share  Analysis, By Prod...",
           "bio": " The global industrial laser market size was valued at USD 1.64 billion  in 2018 and is projected to reach USD 9.00 billion by 2032, exhibiting a  CAGR of 11.9% during the f...",
           "date" : " May, 2024 " ,
           "view": "4,850.00" 
      },
      { 
          "no": "3",
          "Topic": "Water Chiller Market Size, Share Analysis, By Type (Sc...",
           "bio": " The global water chillers market size was valued at USD 5.07 billion in  2018 and is projected to reach USD 9.43 billion by 2032, exhibiting a  CAGR of 4.4% during the fore...",
           "date" : " May, 2024 " ,
           "view": "4,850.00" 
      },
      { 
          "no": "4",
          "Topic": "Grinding Machines Market Size, Share  Analysis, By Prod...",
           "bio": "The global grinding machines market size was valued at USD 4.72 billion  in 2018 and is projected to reach USD 9.01 billion by 2032, exhibiting a  CAGR of 4.4% during the f... ",
           "date" : " May, 2024 " ,
           "view": "4,850.00" 
      }
    ]
};

// Get the div element by ID
document.getElementById('topic1').innerHTML = data.emplo[0].Topic
document.getElementById('text_bios').innerHTML = data.emplo[0].bio
document.getElementById('date').innerHTML = data.emplo[0].date
document.getElementById('date2').innerHTML = data.emplo[0].date
document.getElementById('date3').innerHTML = data.emplo[0].date
document.getElementById('date4').innerHTML = data.emplo[0].date
// document.getElementById('date').innerHTML = data.emplo[0].date