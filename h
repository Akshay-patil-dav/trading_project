<!doctype html>
<html lang="en">

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>Bootstrap demo</title>
  <link rel="stylesheet" href="./css/logo.css">
  <link rel="stylesheet" href="./css/Navigationbar.css">
  <link rel="stylesheet" href="./css/Button.css">
  <link rel="stylesheet" href="./css/Style.css">
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet"
    integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">

  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet"
    integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
</head>

<body>
  <nav class="navbar navbar-expand-lg fixed-top ">
    <div class="container-fluid">
      <img src="./img/Quadiro1 1.png" alt="" class="brand">
      <button style="z-index: 100; color: white;" class="navbar-toggler" type="button" data-bs-toggle="collapse"
        data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false"
        aria-label="Toggle navigation">
        <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor"
          class="bi bi-menu-button-wide-fill" viewBox="0 0 16 16">
          <path
            d="M1.5 0A1.5 1.5 0 0 0 0 1.5v2A1.5 1.5 0 0 0 1.5 5h13A1.5 1.5 0 0 0 16 3.5v-2A1.5 1.5 0 0 0 14.5 0zm1 2h3a.5.5 0 0 1 0 1h-3a.5.5 0 0 1 0-1m9.927.427A.25.25 0 0 1 12.604 2h.792a.25.25 0 0 1 .177.427l-.396.396a.25.25 0 0 1-.354 0zM0 8a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v5a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2zm1 3v2a1 1 0 0 0 1 1h12a1 1 0 0 0 1-1v-2zm14-1V8a1 1 0 0 0-1-1H2a1 1 0 0 0-1 1v2zM2 8.5a.5.5 0 0 1 .5-.5h9a.5.5 0 0 1 0 1h-9a.5.5 0 0 1-.5-.5m0 4a.5.5 0 0 1 .5-.5h6a.5.5 0 0 1 0 1h-6a.5.5 0 0 1-.5-.5" />
        </svg>
      </button>
      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav me-auto mb-2 mb-lg-0 text-menu">
          <li class="nav-item">
            <a class="nav-link active" style="color: rgb(255, 255, 255);" aria-current="page" href="#">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" style="color: rgb(255, 255, 255);" href="#">REPORTS</a>
          </li>

          <li class="nav-item dropdown">
            <a class="nav-link" style="color: rgb(255, 255, 255);" href="#">
              SERVICES
            </a>

          </li>

          <li class="nav-item dropdown">
            <a class="nav-link" style="color: rgb(255, 255, 255);" href="#">
              ABOUT
            </a>

          </li>
          <li class="nav-item dropdown">
            <a class="nav-link" style="color: rgb(255, 255, 255);" href="#">
              CONTACT
            </a>

          </li>
        </ul>
        <form class="d-flex" role="search">
          <div class="serch-box">
            <div class="search-icon"><svg xmlns="http://www.w3.org/2000/svg" style="width: 1vw; "  fill="currentColor" class="bi bi-search" viewBox="0 0 16 16">
              <path d="M11.742 10.344a6.5 6.5 0 1 0-1.397 1.398h-.001q.044.06.098.115l3.85 3.85a1 1 0 0 0 1.415-1.414l-3.85-3.85a1 1 0 0 0-.115-.1zM12 6.5a5.5 5.5 0 1 1-11 0 5.5 5.5 0 0 1 11 0"/>
            </svg></div>
          <input class="serch" type="search" placeholder="Search" aria-label="Search">
          <!-- <button class="btn btn-outline-success" type="submit">Search</button> -->
           </div>
        </form>
      </div>
    </div>
  </nav>
  <!-- ************************************************************************************************** -->
  <div class="content">
    <div class="box-header-right">
      <div class="header-text-section">
        <b class="Bull"> Be the Bull of Your Market </b>
        Chart Impressive Rise
      </div>
      <button class="Explore">Explore more about Us</button>
    </div>
    <div class="box-header-center"></div>
    <div class="box-header-left">

      <div class="play-butt">
        <button id="video-click">
          <svg xmlns="http://www.w3.org/2000/svg" style="color: white;" width="30" height="30" fill="currentColor"
            class="bi bi-play-fill" viewBox="0 0 16 16">
            <path
              d="m11.596 8.697-6.363 3.692c-.54.313-1.233-.066-1.233-.697V4.308c0-.63.692-1.01 1.233-.696l6.363 3.692a.802.802 0 0 1 0 1.393" />
          </svg>
        </button><a href="" class="Play">Play Slides</a>

      </div>
    </div>
  </div>


  <!-- ************************************************************************* -->

  <div class="partners">
    <h2 id="Trusted"> Trusted by our partners</h2>

    <br>
    <div class="partners-logo">
      <div class="img-man"><img src="./img/logo1.png" class="img-log-brand" alt=""></div>
      <div class="img-man"><img src="./img/logo2.png" class="img-log-brand" alt=""></div>
      <div class="img-man"><img src="./img/logo3.png" class="img-log-brand" alt=""></div>
      <div class="img-man"><img src="./img/logo4.png" class="img-log-brand" alt=""></div>
      <div class="img-man"><img src="./img/logo5.png" class="img-log-brand" alt=""></div>
      <div class="img-man"><img src="./img/logo6.png" class="img-log-brand" alt=""></div>

    </div>
  </div>



  <!-- *************************************************************Success Delivered Through Market Insights****************************************** -->

  <div class="Insights-Delivered">
    <h1 class="textheader-Delivered">
      Success Delivered Through <br> Market Insights
    </h1>



    <div class="infogrid">
      <div>
        <img src="./img/Group_chart.svg" class="lo1" alt="">
        <h4 class="text-header-bio">Discover Growth Opportunities</h4>
        <p id="text-header-bio">
          At Fortune Business Insights, we cover both niche and established markets. We identify growth
          opportunities across these markets, irrespective of their age.
        </p>
      </div>
      <div>
        <div>
          <img src="./img/Line Chart2.svg" class="lo1" alt="">
          <h4 class="text-header-bio">Vigilant Business Decisions</h4>
          <p id="text-header-bio">
            When operating in a dynamic environment, future-proofing business decisions is imperative to
            attain a sustainable growth</p>
        </div>
      </div>
      <div>
        <div>
          <img src="./img/PieChart_22.svg" class="lo1" alt="">
          <h4 class="text-header-bio">Insights-driven Reports</h4>
          <p id="text-header-bio">
            We understand the value of being an insights-driven company in a data-driven world. Our reports
            will deliver actionable insights to assist you in achieving exemplary growth </p>
        </div>
      </div>
      <div>
        <div>
          <img src="./img/Group33.svg" class="lo1" alt="">
          <h4 class="text-header-bio">Unhindered Entry and Launches</h4>
          <p id="text-header-bio">
            Besides strengthening position in established markets, we offer exclusive insights, highlighting
            investment feasibility in niche markets. </p>
        </div>
      </div>

    </div>
  </div>
  <!-- *************************************Trending Reports by Industries*********************************************************** -->

  <div class="Reports">

    <div class="Reports-header">
      Trending Reports by Industries
    </div>

  

    <ul class="nav nav-pills nav-fil  " id="pillNav2" role="tablist" style="--bs-nav-link-color: var(--bs-white); --bs-nav-pills-link-active-color: var(--bs-primary); --bs-nav-pills-link-active-bg: var(--bs-white);">
      <li class="nav-item " role="presentation">
        <button class="nav-link  active " id="home-" data-bs-toggle="tab" data-bs-target="#home" type="button" role="tab" aria-selected="true">Healthcare</button>
      </li>
      <li class="nav-item" role="presentation">
        <button class="nav-link" id="profile" data-bs-toggle="tab" data-bs-target="#profile" type="button" role="tab" aria-selected="false">Information & Technology</button>
      </li>
      <li class="nav-item" role="presentation">
        <button class="nav-link " id="contact" data-bs-toggle="tab" data-bs-target="#contact" type="button" role="tab" aria-selected="false">Machinery & Equipment</button>
      </li>
      <li class="nav-item" role="presentation">
        <button class="nav-link " id="contact" data-bs-toggle="tab" data-bs-target="#df" type="button" role="tab" aria-selected="false">Food & Beverages</button>
      </li>
      <li class="nav-item" role="presentation">
        <button class="nav-link " id="contact" data-bs-toggle="tab" data-bs-target="#s" type="button" role="tab" aria-selected="false">Energy & Power</button>
      </li>
      <li class="nav-item" role="presentation">
        <button class="nav-link " id="contact" data-bs-toggle="tab" data-bs-target="#s" type="button" role="tab" aria-selected="false">Agriculture</button>
      </li>
   
    </ul>


    <div class="tab-content" id="myTabContent">
      <!-- *********************************** -->
      <div class="tab-pane fade show active" id="home" role="tabpanel" aria-labelledby="home-tab">

     <!-- ************************************************* -->
      
  <div class="Trending1">
     <div class="box-info-Trending " >
      <div class="Trending">
        <div style="display: flex;">
          <h4 id="topic1">Discover Growth Opportunities</h4>
          <h4 id="Industry">Industry</h4>
        </div>
        <p id="text_bios">
          At Fortune Business Insights, we cover both niche and established markets. We identify growth
          opportunities across these markets, irrespective of their age.
        </p>
        <div style="color: black; display: flex;" class="text-doun">
          <div class="Published">
            <b> Published Date:</b> <b id="date"></b>
          </div>
          <div id="view">
            4,850.00
          </div>
          <button class="redmore">Read More</button>
        </div>
        <div>
        </div>
      </div>
    </div>

    <!-- ************** -->
    <div class="box-info-Trending " >
      <div class="Trending">
        <div style="display: flex;">
          <h4 id="topic1">Discover Growth Opportunities</h4>
          <h4 id="Industry">Industry</h4>
        </div>
        <p id="text_bios">
          At Fortune Business Insights, we cover both niche and established markets. We identify growth
          opportunities across these markets, irrespective of their age.
        </p>
        <div style="color: black; display: flex;" class="text-doun">
          <div class="Published">
            <b> Published Date:</b> <b id="date"></b>
          </div>
          <div id="view">
            4,850.00
          </div>
          <button class="redmore">Read More</button>
        </div>
        <div>
        </div>
      </div>
    </div>
     <!-- ******** -->
          <!-- ************** -->
    <div class="box-info-Trending " >
      <div class="Trending">
        <div style="display: flex;">
          <h4 id="topic1">Discover Growth Opportunities</h4>
          <h4 id="Industry">Industry</h4>
        </div>
        <p id="text_bios">
          At Fortune Business Insights, we cover both niche and established markets. We identify growth
          opportunities across these markets, irrespective of their age.
        </p>
        <div style="color: black; display: flex;" class="text-doun">
          <div class="Published">
            <b> Published Date:</b> <b id="date"></b>
          </div>
          <div id="view">
            4,850.00
          </div>
          <button class="redmore">Read More</button>
        </div>
        <div>
        </div>
      </div>
    </div>
     <!-- ******** -->
          <!-- ************** -->
    <div class="box-info-Trending " >
      <div class="Trending">
        <div style="display: flex;">
          <h4 id="topic1">Discover Growth Opportunities</h4>
          <h4 id="Industry">Industry</h4>
        </div>
        <p id="text_bios">
          At Fortune Business Insights, we cover both niche and established markets. We identify growth
          opportunities across these markets, irrespective of their age.
        </p>
        <div style="color: black; display: flex;" class="text-doun">
          <div class="Published">
            <b> Published Date:</b> <b id="date"></b>
          </div>
          <div id="view">
            4,850.00
          </div>
          <button class="redmore">Read More</button>
        </div>
        <div>
        </div>
      </div>
    </div>
     <!-- ******** -->
  </div>
  <!-- ***/ -->
 </div>
      <!-- ********************************************************* -->
      <div class="tab-pane fade" id="profile" role="tabpanel" aria-labelledby="profile-tab">
             <!-- ************************************************* -->
      
  <div class="Trending1">
    <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>

   <!-- ************** -->
   <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>
    <!-- ******** -->
         <!-- ************** -->
   <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>
    <!-- ******** -->
         <!-- ************** -->
   <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>
    <!-- ******** -->
 </div>
 <!-- ***/ -->

      </div>
      <!-- ***************************************************************** -->
      <div class="tab-pane fade" id="contact" role="tabpanel" aria-labelledby="contact-tab">
             <!-- ************************************************* -->
      
  <div class="Trending1">
    <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>

   <!-- ************** -->
   <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>
    <!-- ******** -->
         <!-- ************** -->
   <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>
    <!-- ******** -->
         <!-- ************** -->
   <div class="box-info-Trending " >
     <div class="Trending">
       <div style="display: flex;">
         <h4 id="topic1">Discover Growth Opportunities</h4>
         <h4 id="Industry">Industry</h4>
       </div>
       <p id="text_bios">
         At Fortune Business Insights, we cover both niche and established markets. We identify growth
         opportunities across these markets, irrespective of their age.
       </p>
       <div style="color: black; display: flex;" class="text-doun">
         <div class="Published">
           <b> Published Date:</b> <b id="date"></b>
         </div>
         <div id="view">
           4,850.00
         </div>
         <button class="redmore">Read More</button>
       </div>
       <div>
       </div>
     </div>
   </div>
    <!-- ******** -->
 </div>
 <!-- ***/ -->
      </div>
    </div>


    <!-- **************************************************************************************** -->
<!-- 
    <div class="Trending1"> -->

      <!-- ************************************************* -->
      <!-- <div class="box-info-Trending " >
        <div class="Trending">
          <div style="display: flex;">
            <h4 id="topic1">Discover Growth Opportunities</h4>
            <h4 id="Industry">Industry</h4>
          </div>
          <p id="text_bios">
            At Fortune Business Insights, we cover both niche and established markets. We identify growth
            opportunities across these markets, irrespective of their age.
          </p>
          <div style="color: black; display: flex;" class="text-doun">
            <div class="Published">
              <b> Published Date:</b> <b id="date"></b>
            </div>
            <div id="view">
              4,850.00
            </div>
            <button class="redmore">Read More</button>
          </div>
          <div>
          </div>
        </div>
      </div> -->
      <!-- ***************************************************** -->

      <!-- ************************************************* -->
      <!-- <div class="box-info-Trending">
        <div class="Trending">
          <div style="display: flex;">
            <h4 id="topic1">Discover Growth Opportunities</h4>
            <h4 id="Industry">Industry</h4>
          </div>
          <p id="text_bios">
            At Fortune Business Insights, we cover both niche and established markets. We identify growth
            opportunities across these markets, irrespective of their age.
          </p>
          <div style="color: black; display: flex;" class="text-doun">
            <div class="Published">
              <b> Published Date:</b> <b id="date2"></b>
            </div>
            <div id="view">
              4,850.00
            </div>
            <button class="redmore">Read More</button>
          </div>
          <div>
          </div>
        </div>
      </div> -->
      <!-- ***************************************************** -->

      <!-- ************************************************* -->
      <!-- <div class="box-info-Trending">
        <div class="Trending">
          <div style="display: flex;">
            <h4 id="topic1">Discover Growth Opportunities</h4>
            <h4 id="Industry">Industry</h4>
          </div>
          <p id="text_bios">
            At Fortune Business Insights, we cover both niche and established markets. We identify growth
            opportunities across these markets, irrespective of their age.
          </p>
          <div style="color: black; display: flex;" class="text-doun">
            <div class="Published">
              <b> Published Date:</b> <b id="date3"></b>
            </div>
            <div id="view">
              4,850.00
            </div>
            <button class="redmore">Read More</button>
          </div>
          <div>
          </div>
        </div>
      </div> -->
      <!-- ***************************************************** -->

      <!-- ************************************************* -->
      <!-- <div class="box-info-Trending">
        <div class="Trending">
          <div style="display: flex;">
            <h4 id="topic1">Discover Growth Opportunities</h4>
            <h4 id="Industry">Industry</h4>
          </div>
          <p id="text_bios">
            At Fortune Business Insights, we cover both niche and established markets. We identify growth
            opportunities across these markets, irrespective of their age.
          </p>
          <div style="color: black; display: flex;" class="text-doun">
            <div class="Published">
              <b> Published Date:</b> <b id="date4"></b>
            </div>
            <div id="view">
              4,850.00
            </div>
            <button class="redmore">Read More</button>
          </div>
          <div>
          </div>
        </div>
      </div> -->

      <!-- ***************************************************** -->
      <!-- <button id="view-reports">View all Reports</button>
    </div> -->


   
  <!-- ***************************************************************************************** -->

  <script src="./js/json.js"></script>
  <script src="./js/Navbar.js"></script>
  <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js"
    integrity="sha384-I7E8VVD/ismYTF4hNIPjVp/Zjvgyol6VFvRkX/vR+Vc4jQkC+hVqc2pM8ODewa9r"
    crossorigin="anonymous"></script>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.min.js"
    integrity="sha384-0pUGZvbkm6XF6gxjEnlmuGrJXVbNuzT9qBBavbLwCsOGabYfZo0T0to5eqruptLy"
    crossorigin="anonymous"></script>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz"
    crossorigin="anonymous"></script>
</body>

</html>