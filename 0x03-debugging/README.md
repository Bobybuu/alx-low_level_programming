<!DOCTYPE html>
<!-- saved from url=(0042)https://savanna.alxafrica.com/projects/539 -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->
    <meta name="description" content="">
    <meta name="google" content="notranslate">

      <script type="text/javascript" async="" src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/cody-widget.js.download"></script><script type="text/javascript" async="" src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/js"></script><script async="" src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/pendo.js.download"></script><script async="" src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/gtm.js.download"></script><script>
    window.dataLayer = window.dataLayer || [];
    dataLayer.push({"userId":528649,"visitorType":"student","batch":{"id":130,"fullNameWithC":"NBO-0823 (C#19)","schoolLocation":{"id":7,"name":"Nairobi"}},"curriculum":{"id":1,"name":"SE Foundations"}});

    window.gtm_user_custom_event = function (name, options) {
      if (typeof name === 'undefined') {
        return;
      }

      window.dataLayer.push({
        customEventOptions: typeof options !== 'undefined' ? options : {},
        event: name,
      });
    }
  </script>

  <!-- Google Tag Manager -->
  <script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
  new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
  j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
  'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
  })(window,document,'script','dataLayer','GTM-N4C8MF2');</script>
  <!-- End Google Tag Manager -->

      <!-- Pendo -->
  <script>
    (function(apiKey){
      (function(p,e,n,d,o){var v,w,x,y,z;o=p[d]=p[d]||{};o._q=o._q||[];
      v=['initialize','identify','updateOptions','pageLoad','track'];for(w=0,x=v.length;w<x;++w)(function(m){
        o[m]=o[m]||function(){o._q[m===v[0]?'unshift':'push']([m].concat([].slice.call(arguments,0)));};})(v[w]);
        y=e.createElement(n);y.async=!0;y.src='https://cdn.eu.pendo.io/agent/static/'+apiKey+'/pendo.js';
        z=e.getElementsByTagName(n)[0];z.parentNode.insertBefore(y,z);})(window,document,'script','pendo');

        pendo.initialize({"visitor":{"id":"c43057772@gmail.com","email":"c43057772@gmail.com","isLearner":true,"isStaff":false,"prgCohortId":130,"prgCohortName":"NBO-0823 (C#19)","id_svna":528649,"curId_svna":1,"curName_svna":"SE Foundations","curCohortId_svna":130,"curCohortName_svna":"NBO-0823 (C#19)","curCohortSchLocName_svna":"Nairobi","curCohortSchLocId_svna":7}});
    })('3353b3bd-f678-4388-5809-8944627d3f27');
  </script>
  <!-- End Pendo -->


    <title>Project: 0x03. C - Debugging | Nairobi Intranet</title>

      <link rel="stylesheet" href="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/xgz4ilr.css">
      <link rel="stylesheet" media="all" href="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/application_alx-8d65fa287f5ccbd6cbcdea1813c1519f6475c4102a175152f9bc763ef474c263.css">
      <script src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/loader.js.download"></script>
      <script src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/application-911cbbf7948876d080abf3b78f6a1b8e2489af40c8b54eb5c355b8213a77fcc6.js.download"></script>
      <link rel="shortcut icon" type="image/x-icon" href="https://savanna.alxafrica.com/favicon_alx.ico">
      <meta name="csrf-param" content="authenticity_token">
<meta name="csrf-token" content="KX7ZnoDPGlwTzvoAfdS9KkGXtBCJi8GvVCzRBGi-aeMYgJuCL3yik5eiUfX3kA2L5lwrm15Cqna_3dqoUlmPLQ">

      <link rel="apple-touch-icon" href="https://savanna.alxafrica.com/apple-touch-icon_alx.png">

      <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
      <!--[if lt IE 9]>
        <script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
        <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
      <![endif]-->

      <!-- Store user timezone -->
      <script>
        Cookies.set('timezone', (new Date()).getTimezoneOffset() / -60.0);
      </script>


      <!-- React -->
      <script src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/application-9ae90215f0244a4efc8f.js.download"></script>
      <link rel="stylesheet" media="screen" href="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/application-87456da7.css">


  <style>
            input[data-pendo-field-valid="false"] {
                border-color: red !important;
                outline-color: red !important;
            }
        </style><style>
            input[data-pendo-field-valid="false"] {
                border-color: red !important;
                outline-color: red !important;
            }
        </style><style>
            input[data-pendo-field-valid="false"] {
                border-color: red !important;
                outline-color: red !important;
            }
        </style></head>

  <body class="signed_in env_production notranslate" translate="no" data-theme-suffix="_alx">
      <!-- Google Tag Manager (noscript) -->
  <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-N4C8MF2"
  height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
  <!-- End Google Tag Manager (noscript) -->


      <div data-react-class="header/Header" data-react-props="{&quot;csrfToken&quot;:&quot;TbLewYD4wYDSiUv-fstSmuCMhq5gK9_NCb3YNzPLxzl8TJzdL0t5T1bl4Av0j-I7R0cZJbfitBTiTNObCSwh9w&quot;,&quot;ehubHeaderSdkJsUrl&quot;:null,&quot;logoUrl&quot;:&quot;https://savanna.alxafrica.com/assets/holberton-logo-full-alx-d053727941512ebe04b797ca87d81a195004e9ff2d8a6aedf4004c5365cf8944.png&quot;,&quot;logoutUrl&quot;:&quot;/auth/sign_out&quot;,&quot;logoClickUrl&quot;:&quot;/&quot;,&quot;redirectUrl&quot;:&quot;/auth/sign_in&quot;,&quot;discord&quot;:{&quot;label&quot;:&quot;Discord&quot;,&quot;targetUrl&quot;:&quot;https://discord.com/channels/1148581179084243054&quot;,&quot;linkOpts&quot;:{&quot;target&quot;:&quot;_blank&quot;,&quot;rel&quot;:&quot;noreferrer&quot;}},&quot;user&quot;:{&quot;myProfileUrl&quot;:&quot;/users/my_profile&quot;,&quot;profilePictureUrl&quot;:&quot;https://savanna.alxafrica.com/rails/active_storage/representations/redirect/eyJfcmFpbHMiOnsibWVzc2FnZSI6IkJBaHBBN0tPQnc9PSIsImV4cCI6bnVsbCwicHVyIjoiYmxvYl9pZCJ9fQ==--9f5f9d13c6b0b6bf2c3ae82a81951b61da3fcdf5/eyJfcmFpbHMiOnsibWVzc2FnZSI6IkJBaDdCem9MWm05eWJXRjBTU0lJYW5CbkJqb0dSVlE2RW5KbGMybDZaVjkwYjE5bWFYUmJCMmtCeUdrQnlBPT0iLCJleHAiOm51bGwsInB1ciI6InZhcmlhdGlvbiJ9fQ==--596ca5c9d0091ccfe5374ad3fb3471cc1878f984/mhagdd.jpg&quot;},&quot;listItems&quot;:[{&quot;label&quot;:&quot;My Planning&quot;,&quot;iconName&quot;:&quot;calendar&quot;,&quot;targetUrl&quot;:&quot;/planning/me&quot;},{&quot;label&quot;:&quot;Projects&quot;,&quot;iconName&quot;:&quot;code-fork&quot;,&quot;targetUrl&quot;:&quot;/projects/current&quot;,&quot;id&quot;:&quot;sidebar-current-projects-item&quot;},{&quot;label&quot;:&quot;QA Reviews I can make&quot;,&quot;iconName&quot;:&quot;check&quot;,&quot;targetUrl&quot;:&quot;/corrections/to_review&quot;},{&quot;label&quot;:&quot;Evaluation quizzes&quot;,&quot;iconName&quot;:&quot;question&quot;,&quot;targetUrl&quot;:&quot;/dashboards/my_current_evaluation_quizzes&quot;},{&quot;label&quot;:&quot;My resources&quot;},{&quot;label&quot;:&quot;Curriculums&quot;,&quot;iconName&quot;:&quot;graduation-cap&quot;,&quot;targetUrl&quot;:&quot;/dashboards/my_curriculums&quot;},{&quot;label&quot;:&quot;Concepts&quot;,&quot;iconName&quot;:&quot;file-text&quot;,&quot;targetUrl&quot;:&quot;/concepts&quot;,&quot;id&quot;:&quot;sidebar-concepts-item&quot;},{&quot;label&quot;:&quot;Conference rooms&quot;,&quot;iconName&quot;:&quot;comments&quot;,&quot;targetUrl&quot;:&quot;/dashboards/video_rooms&quot;,&quot;id&quot;:&quot;sidebar-dashboards-video-rooms&quot;},{&quot;label&quot;:&quot;Servers&quot;,&quot;iconName&quot;:&quot;server&quot;,&quot;targetUrl&quot;:&quot;/servers&quot;},{&quot;label&quot;:&quot;Sandboxes&quot;,&quot;iconName&quot;:&quot;terminal&quot;,&quot;targetUrl&quot;:&quot;/user_containers/current&quot;,&quot;id&quot;:&quot;sidebar-dashboards-my-containers&quot;},{&quot;label&quot;:&quot;Tools&quot;,&quot;iconName&quot;:&quot;wrench&quot;,&quot;targetUrl&quot;:&quot;/dashboards/my_tools&quot;},{&quot;label&quot;:&quot;Video on demand&quot;,&quot;iconName&quot;:&quot;film&quot;,&quot;targetUrl&quot;:&quot;/dashboards/videos&quot;},{&quot;label&quot;:&quot;My Campus&quot;},{&quot;label&quot;:&quot;Peers&quot;,&quot;iconName&quot;:&quot;users&quot;,&quot;targetUrl&quot;:&quot;/users/peers&quot;}]}" data-react-cache-id="header/Header-0"><div class="header d-flex align-items-center bg-white border-bottom position-fixed top-0 w-full" style="background-color: white; border-color: rgb(229, 230, 230); z-index: 1000;"><div class="header-left align-items-center d-flex position-fixed px-2" style="z-index: 2;"><div class="hamburger mb-0 p-2" style="cursor: pointer; font-size: 24px;"><i class="fa-solid fa-fas fa-bars"></i></div><a class="logo-container bg-white p-1" href="https://savanna.alxafrica.com/" target=""><div class="logo mx-auto" style="background-image: url(&quot;https://savanna.alxafrica.com/assets/holberton-logo-full-alx-d053727941512ebe04b797ca87d81a195004e9ff2d8a6aedf4004c5365cf8944.png&quot;); background-size: contain; height: 40px; width: 40px;"></div></a></div><div class="header-right d-flex align-items-center flex-grow-1 justify-content-center" style="z-index: 1;"></div></div><div class="sidebar navigation bg-white border-right position-fixed overflow-scroll bottom-0 start-0 expanded" id="sidebar" style="background-color: white; border-color: rgb(238, 238, 238);"><ul class="px-2"><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-home"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Home</div></a></li><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/planning/me" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-calendar"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">My Planning</div></a></li><li class="d-flex align-items-center" id="sidebar-current-projects-item"><a href="https://savanna.alxafrica.com/projects/current" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-code-fork"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Projects</div></a></li><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/corrections/to_review" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-check"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">QA Reviews I can make</div></a></li><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/dashboards/my_current_evaluation_quizzes" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-question"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Evaluation quizzes</div></a></li><hr title="My resources"><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/dashboards/my_curriculums" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-graduation-cap"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Curriculums</div></a></li><li class="d-flex align-items-center" id="sidebar-concepts-item"><a href="https://savanna.alxafrica.com/concepts" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-file-text"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Concepts</div></a></li><li class="d-flex align-items-center" id="sidebar-dashboards-video-rooms"><a href="https://savanna.alxafrica.com/dashboards/video_rooms" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-comments"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Conference rooms</div></a></li><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/servers" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-server"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Servers</div></a></li><li class="d-flex align-items-center" id="sidebar-dashboards-my-containers"><a href="https://savanna.alxafrica.com/user_containers/current" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-terminal"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Sandboxes</div></a></li><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/dashboards/my_tools" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-wrench"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Tools</div></a></li><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/dashboards/videos" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-film"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Video on demand</div></a></li><hr title="My Campus"><li class="d-flex align-items-center"><a href="https://savanna.alxafrica.com/users/peers" target="_self"><div class="icon "><i aria-hidden="true" class="fa-solid fa-users"></i></div><div class="pl-3 overflow-hidden text-nowrap" style="display: block;">Peers</div></a></li><li class="d-flex align-items-center"><a href="https://discord.com/channels/1148581179084243054" target="_blank" rel="noreferrer"><div class="icon"><i aria-hidden="true" class="fa-brands fa-discord"></i></div><div class="text-muted flex-grow-1 pl-3 overflow-hidden text-nowrap" style="display: block;">Discord</div></a></li><li class="d-flex align-items-center bg-white border-top border-right position-fixed p-2 bottom-0 start-0 mb-0" style="background-color: white; border-color: rgb(238, 238, 238);"><a href="https://savanna.alxafrica.com/users/my_profile"><div class="image "><div class="inner" style="background-image: url(&quot;https://savanna.alxafrica.com/rails/active_storage/representations/redirect/eyJfcmFpbHMiOnsibWVzc2FnZSI6IkJBaHBBN0tPQnc9PSIsImV4cCI6bnVsbCwicHVyIjoiYmxvYl9pZCJ9fQ==--9f5f9d13c6b0b6bf2c3ae82a81951b61da3fcdf5/eyJfcmFpbHMiOnsibWVzc2FnZSI6IkJBaDdCem9MWm05eWJXRjBTU0lJYW5CbkJqb0dSVlE2RW5KbGMybDZaVjkwYjE5bWFYUmJCMmtCeUdrQnlBPT0iLCJleHAiOm51bGwsInB1ciI6InZhcmlhdGlvbiJ9fQ==--596ca5c9d0091ccfe5374ad3fb3471cc1878f984/mhagdd.jpg&quot;);"></div></div><div class="text-muted d-none flex-grow-1 pl-3 overflow-hidden text-nowrap" style="display: block;">My Profile</div></a></li></ul></div></div>


    <main class="content" id="content">
        

        <div id="layout-bars">
          
          <div class="px-5 py-3" id="student-switch-curriculum">
  <div class="dropdown d-flex flex-column gap-1">
    <div aria-haspopup="true" aria-expanded="false" class="align-items-center d-flex gap-3" data-toggle="dropdown" id="student-switch-curriculum-dropdown" role="button">
      <div class="d-flex flex-column" style="line-height: 16px">
        <span class="fs-4 fw-600" style="font-size: 15px !important;">
          SE Foundations
        </span>
        <span class="fs-small text-muted">
          Average: <span class="fw-500">92.55%</span>
        </span>
      </div>

      <div class="d-flex flex-column justify-content-center">
        <span style="margin-bottom: -4px">
          <i aria-hidden="true" class="fa-solid fa-angle-up  fa-fw"></i>
        </span>
        <span style="margin-top: -4px">
          <i aria-hidden="true" class="fa-solid fa-angle-down  fa-fw"></i>
        </span>
      </div>
    </div>

    <ul aria-labelledby="student-switch-curriculum-dropdown" class="dropdown-menu fs-5">
        <li>
          <a href="https://savanna.alxafrica.com/curriculums/1/observe">
            <div class="align-items-center d-flex py-2">
              <div class="d-flex flex-column" style="line-height: 16px">
                <span class="fs-4 fw-500" style="font-size: 15px !important;">
                  SE Foundations
                </span>
                <span class="text-muted" style="font-size: 14px !important;">
                  Average: <span class="fw-500">92.55%</span>
                </span>
              </div>

                <span class="fw-600 text-info" style="margin-left: 42px">
                  <i aria-hidden="true" class="fa-solid fa-check "></i>
                </span>
            </div>
</a>        </li>
        <li>
          <a href="https://savanna.alxafrica.com/curriculums/17/observe">
            <div class="align-items-center d-flex py-2">
              <div class="d-flex flex-column" style="line-height: 16px">
                <span class="fs-4 fw-500" style="font-size: 15px !important;">
                  Short Specializations
                </span>
                <span class="text-muted" style="font-size: 14px !important;">
                  Average: <span class="fw-500">80.35%</span>
                </span>
              </div>

            </div>
</a>        </li>
    </ul>
  </div>
</div>

          
          
          
        </div>

      <article class="">

        
  <div class="d-flex flex-wrap">

    <div class="flex-grow-1" id="curriculum_navigation_content">
      
<div class="project row">
  <div class="col-xs-12 col-lg-10 contains-images">

      <h1 class="gap">
    0x03. C - Debugging
    
  </h1>

  <div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:31,&quot;value&quot;:&quot;Debugging&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0"><div class="align-items-center d-flex flex-wrap gap-3 my-2"><span class="label label-primary" style="font-size: 14px;">C</span><span class="label label-primary" style="font-size: 14px;">Debugging</span></div></div>

  <div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;weight&quot;:1,&quot;has_ai_grader&quot;:false,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-09-12T06:00:00.000+03:00&quot;,&quot;ends_at&quot;:&quot;2023-09-15T06:00:00.000+03:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-09-16T06:00:00.000+03:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0"><ul class="list-group metadata" id="project-metadata"><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-gear fa-fw"></i> Weight: 1</li><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-calendar fa-fw"></i> Project over - took place from <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-09-12 06:00 (GMT+03:00)"><span class="datetime">Sep 12, 2023 6:00 AM</span></span> to <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-09-15 06:00 (GMT+03:00)"><span class="datetime">Sep 15, 2023 6:00 AM</span></span></li><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-square-check fa-fw"></i> An auto review will be launched at the deadline</li></ul></div>

  <div class="sm-gap clean well">
  <h4>In a nutshell…</h4>
  <ul>


      <li>
        <strong>Auto QA review:</strong>
          20.15/40 mandatory
      </li>
    <li>
      <strong>Altogether:</strong>
        &nbsp;<strong>50.37%</strong>
        <ul>
          <li>Mandatory: 50.37%</li>
            <li>Optional: no optional tasks</li>
        </ul>
    </li>
  </ul>

</div>





    <div id="project_id" style="display: none" data-project-id="539"></div>



      

      

      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch:</strong></p>

<ul>
<li><a href="https://savanna.alxafrica.com/rltoken/faGcpiJiejHH6GhqpmbhUw" title="Debugging" target="_blank">Debugging</a></li>
<li><a href="https://savanna.alxafrica.com/rltoken/RaecqJBNkmZ92vLMpNDuGg" title="Rubber Duck Debugging" target="_blank">Rubber Duck Debugging</a></li>
</ul>

<p>Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as <code>gdb</code> or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.</p>

<p><img src="./Project_ 0x03. C - Debugging _ Nairobi Intranet_files/af682f2cbb6d73fd4e42.jpg" alt="" loading="lazy" style=""></p>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://savanna.alxafrica.com/rltoken/b8uX1nIy0A55tWVlIRTaHQ" title="explain to anyone" target="_blank">explain to anyone</a>, without the help of Google:</p>

<h3>General</h3>

<ul>
<li>What is debugging</li>
<li>What are some methods of debugging manually</li>
<li>How to read the error messages</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <code>betty-style.pl</code> and <code>betty-doc.pl</code></li>
<li>A README.md file at the root of the repo, containing a description of the repository</li>
<li>A README.md file, at the root of the folder of this project (i.e. <code>0x03-debugging</code>), describing what this project is about</li>
</ul>

  </div>
</div>


      

        <div class="panel panel-default" id="project-quiz-questions-title">
    <div class="panel-heading">
      <h3 class="panel-title">
        Quiz questions
      </h3>
    </div>

    <div class="panel-body">

        <div class="alert alert-info">
          <strong>Great!</strong>
          You've completed the quiz successfully! Keep going!
          <span id="quiz_questions_collapse_toggle">(Show quiz)</span>
        </div>

      <section class="quiz_questions_show_container" style="display: none;">
          <div class="quiz_question_item_container" data-role="quiz_question864" data-position="2">
            <div class=" clearfix" id="quiz_question-864">

    <h4 class="quiz_question">
        
        Question #0
    </h4>

    <!-- Quiz question Body -->
    <p>The following code gives this incorrect output. Which of the following statements about what is causing the error is true?</p>

<pre><code>carrie@ubuntu:/debugging$ cat main.c                               
#include &lt;stdio.h&gt;                                                                                 

/**                                                                                                
 * main - debugging example                                                                        
 * Return: 0                                                                                       
 */                                                                                                
int main(void)                                                                                     
{                                                                                                  
        int i;                                                                                     
        int j;                                                                                     

        for (i = 0; i &lt; 10; i++)                                                                   
        {                                                                                          
                j = 0;                                                                             
                while (j &lt; 10)                                                                     
                {                                                                                  
                        printf("%d", j);                                                           
                }                                                                                  
                printf("\n");                                                                      
        }                                                                                          

        return (0);                                                                                
}                                                                                                  
carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.c                                                                                                  
carrie@ubuntu:/debugging$ ./a.out
0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 &lt;...&gt;
^Ccarrie@ubuntu:/debugging$
</code></pre>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="864">
                <li class="">

  <input type="checkbox" name="864" id="864-1557782212596" value="1557782212596" data-quiz-answer-id="1557782212596" data-quiz-question-id="864" disabled="disabled">
  <label for="864-1557782212596"><p><code>j</code> is always equal to <code>i</code> so the loop will never end</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="864" id="864-1557782211325" value="1557782211325" data-quiz-answer-id="1557782211325" data-quiz-question-id="864" disabled="disabled" checked="checked">
  <label for="864-1557782211325"><p><code>j</code> never increments so it will always be less than <code>10</code></p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="864" id="864-1557782214161" value="1557782214161" data-quiz-answer-id="1557782214161" data-quiz-question-id="864" disabled="disabled" checked="checked">
  <label for="864-1557782214161"><p><code>j</code> never increments so it is always going to print <code>0</code></p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question863" data-position="1">
            <div class=" clearfix" id="quiz_question-863">

    <h4 class="quiz_question">
        
        Question #1
    </h4>

    <!-- Quiz question Body -->
    <p>Look at the following code.</p>

<pre><code>carrie@ubuntu:/debugging$ cat main.c                                
#include &lt;stdio.h&gt;                                                                                  

/**                                                                                                 
 * main - debugging example                                                                         
 * Return: 0                                                                                        
 */                                                                                                 
int main(void)                                                                                      
{                                                                                                   
        char *hello = "Hello, World!";                                                              

        for (i = 0; hello[i] != '\0'; i++)                                                          
        {                                                                                           
                printf("%c", hello[i]);                                                             
        }                                                                                           

        printf("\n");                                                                               

        return (0);                                                                                 
}                                                                                                   
carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.
c                                                                                                   
main.c: In function ‘main’:                                                                         
main.c:11:7: error: ‘i’ undeclared (first use in this function)                                     
  for (i = 0; hello[i] != '\0'; i++)                                                                
       ^                                                                                            
main.c:11:7: note: each undeclared identifier is reported only once for each function it appears in
main.c:9:8: error: variable ‘hello’ set but not used [-Werror=unused-but-set-variable]              
  char *hello = "Hello, World!";                                                                    
        ^                                                                                           
cc1: all warnings being treated as errors                                                           
carrie@ubuntu:/debugging$                         
</code></pre>

<p>In the <code>main.c</code> file, on what line is the first error that the compiler returns?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="863">
                <li class="">

  <input type="radio" name="863" id="863-1557782067998" value="1557782067998" data-quiz-answer-id="1557782067998" data-quiz-question-id="863" disabled="disabled" checked="checked">
  <label for="863-1557782067998"><p>11</p>
</label>
</li>

                <li class="">

  <input type="radio" name="863" id="863-1557782064790" value="1557782064790" data-quiz-answer-id="1557782064790" data-quiz-question-id="863" disabled="disabled">
  <label for="863-1557782064790"><p>9</p>
</label>
</li>

                <li class="">

  <input type="radio" name="863" id="863-1557782070360" value="1557782070360" data-quiz-answer-id="1557782070360" data-quiz-question-id="863" disabled="disabled">
  <label for="863-1557782070360"><p>7</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->
        <div class="alert alert-info">
            <h4>Tips:</h4>
            <p>You do not have to know exactly what this code does yet (but you will soon!).</p>

        </div>

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question866" data-position="4">
            <div class=" clearfix" id="quiz_question-866">

    <h4 class="quiz_question">
        
        Question #2
    </h4>

    <!-- Quiz question Body -->
    <p>This code doesn’t work as intended. </p>

<pre><code>#include "main.h"

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
        int i;

        for (i = 0; i &lt; 100; i++)
        {
                if (i % 2 != 0)
                {
                        continue;
                }
                else
                {
                        break;
                }

                printf("%d\n", i);
        }

        return(0);
}
</code></pre>

<p>Let’s add <code>printf</code> statements to the code. What information do the <code>printf</code> statements tell us about how our code is executed?</p>

<pre><code>#include "main.h"

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
        int i;

        printf("Before loop\n");

        for (i = 0; i &lt; 100; i++)
        {
                if (i % 2 != 0)
                {
                        printf("i is not even so don't print\n");
                        continue;
                }
                else
                {
                        printf("i is even, break to print\n");
                        break;
                }

                printf("Outside of if/else, still inside for loop\n");

                printf("%d\n", i);
        }

        printf("For loop exited\n");

        return(0);
}
</code></pre>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="866">
                <li class="">

  <input type="checkbox" name="866" id="866-1557858429748" value="1557858429748" data-quiz-answer-id="1557858429748" data-quiz-question-id="866" disabled="disabled">
  <label for="866-1557858429748"><p>A <code>printf</code> statement shows exactly how many times the loop executes</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="866" id="866-1557858397111" value="1557858397111" data-quiz-answer-id="1557858397111" data-quiz-question-id="866" disabled="disabled" checked="checked">
  <label for="866-1557858397111"><p>A <code>printf</code> statement shows when the <code>for</code> loop is finished</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="866" id="866-1557858506856" value="1557858506856" data-quiz-answer-id="1557858506856" data-quiz-question-id="866" disabled="disabled" checked="checked">
  <label for="866-1557858506856"><p><code>printf</code> statements shows that <code>break</code> will cause “For loop exited” to print, indicating that the even number is never printed</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="866" id="866-1557858575741" value="1557858575741" data-quiz-answer-id="1557858575741" data-quiz-question-id="866" disabled="disabled">
  <label for="866-1557858575741"><p>A <code>printf</code> statement shows that there is an infinite loop in the code</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question865" data-position="3">
            <div class=" clearfix" id="quiz_question-865">

    <h4 class="quiz_question">
        
        Question #3
    </h4>

    <!-- Quiz question Body -->
    <p>The following code gives this output. What is the error?</p>

<pre><code>carrie@ubuntu:/debugging$ cat main.c                                
#include &lt;stdio.h&gt;                                                                                  

/**                                                                                                 
 * main - debugging example                                                                         
 * Return: 0                                                                                        
 */                                                                                                 
int main(void)                                                                                      
{                                                                                                   
        int i;                                                                                      
        int j;                                                                                      
        int k;                                                                                      

        i = 0;                                                                                      
        j = 1000;                                                                                   
        while (i &lt; j)                                                                               
        {                                                                                           
                k = j / 98;                                                                         
                i = i + k;                                                                          
                printf("%d\n", i);                                                                  
                j == j - 1;                                                                         
        }                                                                                           

        return (0);                                                                                 
}                                                                                                   
carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.
c                                                                                                   
main.c: In function ‘main’:                                                                         
main.c:20:3: error: statement with no effect [-Werror=unused-value]                                 
   j == j - 1;                                                                                      
   ^                                                                                                
cc1: all warnings being treated as errors                                                           
carrie@ubuntu:/debugging$
</code></pre>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="865">
                <li class="">

  <input type="radio" name="865" id="865-1557782393037" value="1557782393037" data-quiz-answer-id="1557782393037" data-quiz-question-id="865" disabled="disabled" checked="checked">
  <label for="865-1557782393037"><p>We want to assign <code>j</code> a new value, not compare it, so it should be <code>j = j - 1</code> instead of <code>j == j - 1</code></p>
</label>
</li>

                <li class="">

  <input type="radio" name="865" id="865-1557782391227" value="1557782391227" data-quiz-answer-id="1557782391227" data-quiz-question-id="865" disabled="disabled">
  <label for="865-1557782391227"><p>We don’t need to assign a new value to <code>j</code> because it doesn’t do anything</p>
</label>
</li>

                <li class="">

  <input type="radio" name="865" id="865-1557782394286" value="1557782394286" data-quiz-answer-id="1557782394286" data-quiz-question-id="865" disabled="disabled">
  <label for="865-1557782394286"><p>We want to compare <code>j</code> so we need an <code>if</code> statement before <code>j == j - 1</code></p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>

      </section>
    </div>
  </div>


        
          <h2 class="gap">Tasks</h2>

    <div data-role="task3904" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-3904">
  <span id="user_id" data-id="528649"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Multiple mains
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="528649"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar truncate" data-task-id="3904" data-correction-id="20186816">
        <div class="task_progress_bar" style="width: 0.0%">
          <div class="task_score_bar" style="width: NaN%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">0.0%</span> (<span class="task_progress_value">Checks completed: 0.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>In most projects, we often give you only one main file to test with. For example, this main file is a test for a <code>postitive_or_negative()</code> function similar to the one you worked with in <a href="https://savanna.alxafrica.com/rltoken/lKcOFkG-GCivSDXgWgld2g" title="an earlier C project" target="_blank">an earlier C project</a>:</p>

<pre><code>carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include &lt;stdio.h&gt;

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
</code></pre>

<p>Based on the <code>main.c</code> file above, create a file named <code>0-main.c</code>. This file must test that the function <code>positive_or_negative()</code> gives the correct output when given a case of <code>0</code>.</p>

<p>You are not coding the solution / function, you’re just testing it! However, you can adapt your function from <a href="https://savanna.alxafrica.com/rltoken/lKcOFkG-GCivSDXgWgld2g" title="0x01. C - Variables, if, else, while - Task #0" target="_blank">0x01. C - Variables, if, else, while - Task #0</a> to compile with this main file to test locally.</p>

<ul>
<li>You only need to upload <code>0-main.c</code> and <code>main.h</code> for this task. We will provide our own <code>positive_or_negative()</code> function.</li>
<li>You are not allowed to add or remove lines of code, you may change only <strong>one</strong> line in this task.</li>
</ul>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 
</code></pre>

  </div>

  <div class="list-group">
      <!-- LTI Resource -->

    <!-- Task Files -->

    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x03-debugging</code></li>
            <li>File: <code>0-main.c, main.h</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        <div>
      <button class="btn btn-default btn-sm check-your-task-3904-modal-button" data-task-id="3904" data-toggle="modal" data-target="#task-test-correction-3904-correction-modal" id="task-num-0-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3904}">
          Check submission
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-3904-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">0. Multiple mains</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="3904">Request a new review</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="3904">
        <i aria-hidden="true" class="fa-solid fa-circle-info "></i>
    </button>
    <div class="help-container" data-task-id="3904">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>


      <button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="3904" data-correction-id="20186816">
        Mark submission
        <span class="in_progress_info">: in progress...</span>
        <span class="error_occurred_info">: an error occurred</span>
      </button>

    

      <button class="btn btn-default btn-sm" data-task-id="3904" data-toggle="modal" data-target="#task-qa-review-3904-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3904}">
        View results
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-3904-modal" data-correction-id="20186816" data-task-id="3904">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">0. Multiple mains</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task3905" data-position="2" id="task-num-1">
      <div class="panel panel-default task-card " id="task-3905">
  <span id="user_id" data-id="528649"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. Like, comment, subscribe
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="528649"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar truncate" data-task-id="3905" data-correction-id="20186816">
        <div class="task_progress_bar" style="width: 88.89%">
          <div class="task_score_bar" style="width: 65.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">57.78%</span> (<span class="task_progress_value">Checks completed: 88.89%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.</p>

<ul>
<li>Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.</li>
<li>You do not have to compile with <code>-Wall -Werror -Wextra -pedantic</code> for this task.</li>
</ul>

<pre><code>carrie@ubuntu:/debugging$ cat 1-main.c
#include &lt;stdio.h&gt;

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i &lt; 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>

<p>Your output should look like this:</p>

<pre><code>carrie@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
carrie@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
carrie@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
carrie@ubuntu:/debugging$
</code></pre>

  </div>

  <div class="list-group">
      <!-- LTI Resource -->

    <!-- Task Files -->

    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x03-debugging</code></li>
            <li>File: <code>1-main.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        <div>
      <button class="btn btn-default btn-sm check-your-task-3905-modal-button" data-task-id="3905" data-toggle="modal" data-target="#task-test-correction-3905-correction-modal" id="task-num-1-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3905}">
          Check submission
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-3905-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">1. Like, comment, subscribe</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="3905">Request a new review</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="3905">
        <i aria-hidden="true" class="fa-solid fa-circle-info "></i>
    </button>
    <div class="help-container" data-task-id="3905">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>


      <button class="btn btn-primary btn-sm task_ask_new_correction " data-task-id="3905" data-correction-id="20186816">
        Mark submission
        <span class="in_progress_info">: in progress...</span>
        <span class="error_occurred_info">: an error occurred</span>
      </button>

    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3905}"><i aria-hidden="true" class="fa-solid fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="3905" data-toggle="modal" data-target="#task-qa-review-3905-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3905}">
        View results
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-3905-modal" data-correction-id="20186816" data-task-id="3905">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">1. Like, comment, subscribe</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task3935" data-position="3" id="task-num-2">
      <div class="panel panel-default task-card " id="task-3935">
  <span id="user_id" data-id="528649"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. 0 &gt; 972?
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="528649"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar truncate" data-task-id="3935" data-correction-id="20186816">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 65.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">65.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>This program prints the largest of three integers.</p>

<pre><code>carrie@ubuntu:/debugging$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a &gt; b &amp;&amp; b &gt; c)
    {
        largest = a;
    }
    else if (b &gt; a &amp;&amp; a &gt; c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
</code></pre>

<p>? That’s definitely not right.</p>

<p>Fix the code in <code>2-largest_number.c</code> so that it correctly prints out the largest of three numbers, no matter the case.</p>

<ul>
<li>Line count will not be checked for this task.</li>
</ul>

  </div>

  <div class="list-group">
      <!-- LTI Resource -->

    <!-- Task Files -->

    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x03-debugging</code></li>
            <li>File: <code>2-largest_number.c, main.h</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        <div>
      <button class="btn btn-default btn-sm check-your-task-3935-modal-button" data-task-id="3935" data-toggle="modal" data-target="#task-test-correction-3935-correction-modal" id="task-num-2-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3935}">
          Check submission
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-3935-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">2. 0 &gt; 972?</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="3935">Request a new review</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="3935">
        <i aria-hidden="true" class="fa-solid fa-circle-info "></i>
    </button>
    <div class="help-container" data-task-id="3935">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3935}"><i aria-hidden="true" class="fa-solid fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="3935" data-toggle="modal" data-target="#task-qa-review-3935-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3935}">
        View results
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-3935-modal" data-correction-id="20186816" data-task-id="3935">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">2. 0 &gt; 972?</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task3906" data-position="4" id="task-num-3">
      <div class="panel panel-default task-card " id="task-3906">
  <span id="user_id" data-id="528649"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. Leap year
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="528649"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar truncate" data-task-id="3906" data-correction-id="20186816">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 65.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">65.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.</p>

<pre><code>carrie@ubuntu:/debugging$ cat 3-main_a.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

carrie@ubuntu:/debugging$
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) &amp;&amp; !(year % 100 == 0))
    {
        if (month &gt;= 2 &amp;&amp; day &gt;= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 &amp;&amp; day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

carrie@ubuntu:/debugging$ 
</code></pre>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$
</code></pre>

<p>Output looks good for <code>04/01/1997</code>! Let’s make a new main file <code>3-main_b.c</code> to try a case that is a leap year: <code>02/29/2000</code>.</p>

<pre><code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
carrie@ubuntu:/debugging$ ./3-main_b
Date: 02/29/2000
Invalid date: 02/29/2000
carrie@ubuntu:/debugging$
</code></pre>

<p>? That doesn’t seem right.</p>

<p>Fix the <code>print_remaining_days()</code> function so that the output works correctly for <em>all</em> dates and <em>all</em> leap years.</p>

<ul>
<li>Line count will not be checked for this task.</li>
<li>You can assume that all test cases have valid months (i.e. the value of <code>month</code> will never be less than <code>1</code> or greater than <code>12</code>) and valid days (i.e. the value of <code>day</code> will never be less than <code>1</code> or greater than <code>31</code>). </li>
<li>You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).</li>
</ul>

  </div>

  <div class="list-group">
      <!-- LTI Resource -->

    <!-- Task Files -->

    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x03-debugging</code></li>
            <li>File: <code>3-print_remaining_days.c, main.h</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        <div>
      <button class="btn btn-default btn-sm check-your-task-3906-modal-button" data-task-id="3906" data-toggle="modal" data-target="#task-test-correction-3906-correction-modal" id="task-num-3-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3906}">
          Check submission
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-3906-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">3. Leap year</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="3906">Request a new review</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="3906">
        <i aria-hidden="true" class="fa-solid fa-circle-info "></i>
    </button>
    <div class="help-container" data-task-id="3906">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa-solid fa-circle-check "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa-solid fa-circle-xmark "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    

      <button class="btn btn-default btn-sm" data-task-id="3906" data-toggle="modal" data-target="#task-qa-review-3906-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:3906}">
        View results
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-3906-modal" data-correction-id="20186816" data-task-id="3906">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">3. Leap year</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>




          <div class="modal fade" id="container-specs-modal"><div class="modal-dialog modal-lg"><div class="modal-content"><div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button><h4 class="modal-title">Recommended Sandbox</h4></div><div class="modal-body"><div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;available&quot;:true,&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true,&quot;container&quot;:{&quot;container_id&quot;:null,&quot;id&quot;:709780,&quot;restart_uri&quot;:&quot;/user_containers/709780/restart.json&quot;,&quot;status&quot;:&quot;asleep&quot;,&quot;uri&quot;:&quot;/user_containers/709780.json&quot;,&quot;wake_uri&quot;:&quot;/user_containers/709780/wake.json&quot;,&quot;webterm_uri&quot;:&quot;/user_containers/709780/webterm&quot;,&quot;host&quot;:null,&quot;password&quot;:&quot;2961589438dea9304380&quot;,&quot;ports&quot;:{&quot;4000&quot;:33096,&quot;443&quot;:33099,&quot;80&quot;:33100,&quot;8080&quot;:33092,&quot;3000&quot;:33098,&quot;3306&quot;:33097,&quot;5001&quot;:33094,&quot;8000&quot;:33093,&quot;22&quot;:33101,&quot;5000&quot;:33095}}}],&quot;containersLimit&quot;:2,&quot;csrfToken&quot;:&quot;RyopOgFyOOfVggSmtlvuN5CKkvkGeoX1H3Ib2XtgxMB21GsmrsGAKFHur1M8H16WN0ENctGz7iz0gxB1QYciDg&quot;,&quot;startStatusURI&quot;:&quot;/user_containers/start_status.json&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0"><div><div class="d-flex gap-4 sandboxes-filters"><a class="btn btn-outline-primary"><i aria-hidden="true" class="fa-solid fa-filter"></i><span class="ml-2">Running only</span></a><div class="align-items-center d-flex" style="position: relative; width: 100%;"><input class="form-control" placeholder="Search for an image ..." type="search" value=""></div></div><div class="mt-3"><h3>1 image<small class="ml-2">(1/2 Sandboxes spawned)</small></h3></div><div class="mt-3"><div class="panel panel-default"><div class="panel-body border-left-info" style="border-left: 6px solid;"><div class="align-items-center d-flex flex-wrap justify-content-between"><div><h3 class="mt-0"><i aria-hidden="true" class="fa-solid fa-terminal text-info"></i><span class="ml-2">Ubuntu 20.04</span><span class="fs-4 label label-info ml-2">Asleep</span></h3><div class="mt-2 text-muted"><p>Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations</p>
</div></div><div class="d-flex flex-wrap gap-5"><a class="btn btn-success"><i aria-hidden="true" class="fa-solid fa-play"></i><span class="ml-2">Wake</span></a><a class="btn btn-danger"><i aria-hidden="true" class="fa-solid fa-trash"></i><span class="ml-2">Destroy</span></a></div></div></div></div></div></div></div></div></div></div></div>

  </div>
</div>


      
    </div>
  </div>


      </article>

        <div class="copyright">Copyright © 2025 ALX, All rights reserved.</div>

    </main>

        <button class="btn btn-primary atop-help" id="search-button" data-search-active="false" data-toggle="modal" data-target="#search-modal">
  <i aria-hidden="true" class="fa-solid fa-magnifying-glass "></i>
  <i aria-hidden="true" class="fa-solid fa-window-minimize "></i>
</button>

        <div class="modal fade" id="search-modal" tabindex="-1" role="dialog" aria-labelledby="search-modal-label">
    <div class="modal-dialog modal-md">
        <div class="modal-content">
            <div class="modal-header">
                <div id="search-bar-container">
    <input id="search-bar" autocomplete="off" type="text" name="hbtn-search-bar" placeholder="✨Start search by typing in this field✨">
</div>

            </div>
            <div class="modal-body">
                <div id="modal-spinner" class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div id="search-results-container">
</div>

            </div>
        </div>
    </div>
</div>



        <div class="modal fade" id="markdownGuideModal" tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true">
  <div class="modal-dialog modal-md">
    <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
          <h4 class="modal-title">Markdown Guide</h4>
        </div>
        <div class="modal-body">
            <h4>Emphasis</h4>
<pre>**<strong>bold</strong>**
*<em>italics</em>*
~~<strike>strikethrough</strike>~~</pre>
<h4>Headers</h4>
<pre># Big header
## Medium header
### Small header
#### Tiny header</pre>
<h4>Lists</h4>
<pre>* Generic list item
* Generic list item
* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item</pre>
<h4>Links</h4>
<pre>[Text to display](http://www.example.com)</pre>
<h4>Quotes</h4>
<pre>&gt; This is a quote.
&gt; It can span multiple lines!</pre>
<h4>Images</h4>
<p>CSS style available: <code>width, height, opacity</code></p>
<pre>![](http://www.example.com/image.jpg)
![](http://www.example.com/image.jpg | width: 200px)
![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)
</pre>
<h4>Tables</h4>
<pre>| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

<em>Or without aligning the columns...</em>

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |
</pre>
<h4>Displaying code</h4>
<pre>`var example = "hello!";`

<em>Or spanning multiple lines...</em>

```
var example = "hello!";
alert(example);
```</pre>
        </div>
    </div>
  </div>
</div>


        <script id="cody-snippet">
          window.codySettings = { widget_id: "9993bc72-2258-452b-a4bf-b2fe1ad5e0d7" };
          !function(){var t=window,e=document,a=function(){var t=e.createElement("script");t.type="text/javascript",t.async=!0,t.src="https://trinketsofcody.com/cody-widget.js";var a=e.getElementsByTagName("script")[0];a.parentNode.insertBefore(t,a)};"complete"===document.readyState?a():t.attachEvent?t.attachEvent("onload",a):t.addEventListener("load",a,!1)}();
        </script>
  

<div id="cody-wrapper"><style>
  #cody-wrapper .cody-launcher {
    position: var(--position) !important;
    left: var(--left) !important;
    right: var(--right) !important;
    bottom: var(--launcher-bottom) !important;
    border-radius: 9999px !important;
    border: 0 !important;
    padding: 0 !important;
    box-sizing: border-box !important;
    z-index: 999999 !important;
    overflow: hidden !important;
    display: flex !important;
    align-items: center !important;
    justify-content: center !important;
    transition: box-shadow, scale 300ms linear !important;
    animation: cody-launcher-pulse 4s infinite !important;
    background-color: var(--background-color) !important;
    color: var(--text-color) !important;
    cursor: pointer !important;
    --icon-margin: 12px;
    --close-icon-margin: 16px;
  }

    #cody-wrapper {
    --position: fixed;
    --left: unset;
    --right: 20px;
    --launcher-bottom: 20px;
    --frame-bottom: 90px;
    --background-color: #FBD647;
    --text-color: #020617;
    --shadow-color: 251, 214, 71;
  }

  @media screen and (max-width: 512px) {
    #cody-wrapper {
      --left: unset;
      --right: 10px;
    }
  }

  
  #cody-wrapper .cody-launcher:hover {
    scale: 1.1 !important;
  }

  #cody-wrapper .cody-launcher .cody-close-icon {
    display: none !important;
  }

  #cody-wrapper[data-launcher-open] .cody-launcher .cody-icon {
    display: none !important;;
  }

  #cody-wrapper[data-launcher-open] .cody-launcher .cody-close-icon {
    display: block !important;;
  }

  #cody-wrapper .cody-iframe {
    z-index: 99999 !important;
    transition: visibility .5s, opacity .5s linear !important;
    background-color: #fff !important;
    position: fixed !important;
    left: var(--left) !important;
    right: var(--right) !important;
    bottom: var(--frame-bottom) !important;
    height: 75vh !important;
    width: 448px !important;
    border-radius: 10px !important;
    overflow: hidden !important;
    box-shadow: 0 2px 4px rgba(0, 18, 26, .08), 0 3px 12px rgba(0, 18, 26, .16), 0 2px 14px 0 rgba(0, 18, 26, .2) !important;
    border: 0 !important;
    display: none !important;
  }

  @media screen and (max-height: 667px) {
    #cody-wrapper .cody-iframe {
      height: calc(100vh - 110px) !important;
    }
  }

  @media screen and (max-width: 448px) {
    #cody-wrapper .cody-iframe {
      width: calc(100vw - 20px) !important;
    }
  }

  #cody-wrapper[data-launcher-open] .cody-iframe {
    display: block !important;
  }

  @keyframes cody-launcher-pulse {
    0%, 100% {
      box-shadow: 0 0 18px 4px rgba(var(--shadow-color), 0.8);
    }
    50% {
      box-shadow: 0 0 12px 3px rgba(var(--shadow-color), 0.4);
    }
  }
</style>

<button class="cody-launcher" style="width: 56px; height: 56px; font-size: 16px;">
    <svg class="cody-icon" style="aspect-ratio: 1 / 1; width: 100%; height: 100%; margin: var(--icon-margin)" aria-hidden="true" viewBox="5 7 45 45" xml:space="preserve" xmlns="http://www.w3.org/2000/svg">
    <path d="M41.18 17.86a52.75 52.75 0 0 0-19 0c-.54.1-7.9 2.7-7.9 2.7h.01c-2.9 1.01-4.91 3.75-4.91 6.9v4.85c0 2.96 1.78 5.56 4.4 6.7l17.91 8.93v-6.67c3.18 0 6.36-.29 9.5-.86 4.13-.76 7.13-4.36 7.13-8.56v-5.44c-.01-4.19-3.01-7.79-7.14-8.55zm3.47 14c0 2.43-1.74 4.52-4.13 4.95-2.91.53-5.88.8-8.84.8s-5.93-.27-8.84-.8c-2.39-.44-4.13-2.52-4.13-4.95v-5.44c0-2.43 1.74-4.52 4.13-4.95 2.91-.53 5.88-.8 8.84-.8s5.93.27 8.84.8c2.39.44 4.13 2.52 4.13 4.95v5.44z" fill="currentColor"></path>
    <path d="M26.17 32.79c-.84 0-1.53-.68-1.53-1.53v-4.24c0-.84.68-1.53 1.53-1.53s1.53.68 1.53 1.53v4.24c-.01.85-.69 1.53-1.53 1.53zM37.17 32.79c-.84 0-1.53-.68-1.53-1.53v-4.24c0-.84.68-1.53 1.53-1.53s1.53.68 1.53 1.53v4.24c0 .85-.68 1.53-1.53 1.53z" fill="currentColor"></path>
</svg>    <svg style="aspect-ratio: 1/1; width: 100%; height: 100%; margin: var(--close-icon-margin);" class="cody-close-icon" launchercloseicon="chevron-down" aria-hidden="true" viewBox="0 0 512 512" xmlns="http://www.w3.org/2000/svg">
    <path d="M239 401c9.4 9.4 24.6 9.4 33.9 0L465 209c9.4-9.4 9.4-24.6 0-33.9s-24.6-9.4-33.9 0l-175 175L81 175c-9.4-9.4-24.6-9.4-33.9 0s-9.4 24.6 0 33.9L239 401z" fill="currentColor"></path>
</svg></button></div></body></html>