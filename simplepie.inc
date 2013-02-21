<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>/lib/simplepie/simplepie.inc - Changes - Tiny Tiny RSS</title>
<meta name="description" content="Redmine" />
<meta name="keywords" content="issue,bug,tracker" />
<meta http-equiv="X-UA-Compatible" content="IE=9; IE=8; IE=7; IE=EDGE" />
<meta name="csrf-param" content="authenticity_token"/>
<meta name="csrf-token" content="Eox/Gyq3gJRrh6oyLW4god7UHByV/eEnlHK2wGteeIM="/>
<link rel='shortcut icon' href='/redmine/favicon.ico?1288882477' />
<link href="/redmine/stylesheets/application.css?1340051070" media="all" rel="stylesheet" type="text/css" />

<script src="/redmine/javascripts/prototype.js?1340051069" type="text/javascript"></script>
<script src="/redmine/javascripts/effects.js?1340051069" type="text/javascript"></script>
<script src="/redmine/javascripts/dragdrop.js?1340051069" type="text/javascript"></script>
<script src="/redmine/javascripts/controls.js?1340051069" type="text/javascript"></script>
<script src="/redmine/javascripts/application.js?1340051069" type="text/javascript"></script>
<script type="text/javascript">
//<![CDATA[
Event.observe(window, 'load', function(){ new WarnLeavingUnsaved('The current page contains unsaved text that will be lost if you leave this page.'); });
//]]>
</script>

<!--[if IE 6]>
    <style type="text/css">
      * html body{ width: expression( document.documentElement.clientWidth < 900 ? '900px' : '100%' ); }
      body {behavior: url(/redmine/stylesheets/csshover.htc?1340051070);}
    </style>
<![endif]-->

<!-- page specific tags -->

  <script src="/redmine/javascripts/repository_navigation.js?1340051069" type="text/javascript"></script>

<link href="/redmine/stylesheets/scm.css?1340051070" media="screen" rel="stylesheet" type="text/css" />
</head>
<body class="controller-repositories action-changes">
<div id="wrapper">
<div id="wrapper2">
<div id="top-menu">
    <div id="account">
        <ul><li><a href="/redmine/login" class="login">Sign in</a></li>
<li><a href="/redmine/account/register" class="register">Register</a></li></ul>    </div>
    
    <ul><li><a href="/redmine/" class="home">Home</a></li>
<li><a href="/redmine/projects" class="projects">Projects</a></li>
<li><a href="http://www.redmine.org/guide" class="help">Help</a></li></ul></div>

<div id="header">
    
    <div id="quick-search">
        <form action="/redmine/projects/tt-rss/search" method="get">
        <input name="changesets" type="hidden" value="1" />
        <label for='q'>
          <a href="/redmine/projects/tt-rss/search" accesskey="4">Search</a>:
        </label>
        <input accesskey="f" class="small" id="q" name="q" size="20" type="text" />
        </form>
        
    </div>
    

    <h1>Tiny Tiny RSS</h1>

    
    <div id="main-menu">
        <ul><li><a href="/redmine/projects/tt-rss" class="overview">Overview</a></li>
<li><a href="/redmine/projects/tt-rss/activity" class="activity">Activity</a></li>
<li><a href="/redmine/projects/tt-rss/roadmap" class="roadmap">Roadmap</a></li>
<li><a href="/redmine/projects/tt-rss/issues" class="issues">Issues</a></li>
<li><a href="/redmine/projects/tt-rss/issues/calendar" class="calendar">Calendar</a></li>
<li><a href="/redmine/projects/tt-rss/wiki" class="wiki">Wiki</a></li>
<li><a href="/redmine/projects/tt-rss/files" class="files">Files</a></li>
<li><a href="/redmine/projects/tt-rss/repository" class="repository selected">Repository</a></li></ul>
    </div>
    
</div>

<div class="nosidebar" id="main">
    <div id="sidebar">
        
        
    </div>

    <div id="content">
        
        

<div class="contextual">
  

<a href="/redmine/projects/tt-rss/repository/statistics" class="icon icon-stats">Statistics</a>

<form action="/redmine/projects/tt-rss/repository/changes/lib/simplepie/simplepie.inc" id="revision_selector" method="get">  <!-- Branches Dropdown -->
      | Branch: 
    <select id="branch" name="branch"><option value=""></option>
<option value="master" selected="selected">master</option></select>
  
      | Tag: 
    <select id="tag" name="tag"><option value=""></option>
<option value="0.1">0.1</option>
<option value="1.0">1.0</option>
<option value="1.0.1">1.0.1</option>
<option value="1.0.2">1.0.2</option>
<option value="1.0.3">1.0.3</option>
<option value="1.0.3.1">1.0.3.1</option>
<option value="1.0.4">1.0.4</option>
<option value="1.0.5">1.0.5</option>
<option value="1.0.6">1.0.6</option>
<option value="1.0.7">1.0.7</option>
<option value="1.1">1.1</option>
<option value="1.1.1">1.1.1</option>
<option value="1.1.2">1.1.2</option>
<option value="1.1.3">1.1.3</option>
<option value="1.1.4">1.1.4</option>
<option value="1.1.5">1.1.5</option>
<option value="1.2.0">1.2.0</option>
<option value="1.2.1">1.2.1</option>
<option value="1.2.10">1.2.10</option>
<option value="1.2.11">1.2.11</option>
<option value="1.2.11.1">1.2.11.1</option>
<option value="1.2.12">1.2.12</option>
<option value="1.2.13">1.2.13</option>
<option value="1.2.14">1.2.14</option>
<option value="1.2.14.1">1.2.14.1</option>
<option value="1.2.14.2">1.2.14.2</option>
<option value="1.2.15">1.2.15</option>
<option value="1.2.16">1.2.16</option>
<option value="1.2.17">1.2.17</option>
<option value="1.2.18">1.2.18</option>
<option value="1.2.19">1.2.19</option>
<option value="1.2.2">1.2.2</option>
<option value="1.2.20">1.2.20</option>
<option value="1.2.21">1.2.21</option>
<option value="1.2.22">1.2.22</option>
<option value="1.2.22.1">1.2.22.1</option>
<option value="1.2.23-final">1.2.23-final</option>
<option value="1.2.24">1.2.24</option>
<option value="1.2.25">1.2.25</option>
<option value="1.2.26">1.2.26</option>
<option value="1.2.27">1.2.27</option>
<option value="1.2.28">1.2.28</option>
<option value="1.2.29">1.2.29</option>
<option value="1.2.3">1.2.3</option>
<option value="1.2.30">1.2.30</option>
<option value="1.2.4">1.2.4</option>
<option value="1.2.5">1.2.5</option>
<option value="1.2.6">1.2.6</option>
<option value="1.2.7">1.2.7</option>
<option value="1.2.7-1">1.2.7-1</option>
<option value="1.2.7-2">1.2.7-2</option>
<option value="1.2.8">1.2.8</option>
<option value="1.2.8-p1">1.2.8-p1</option>
<option value="1.2.8-p2">1.2.8-p2</option>
<option value="1.2.9">1.2.9</option>
<option value="1.3.0">1.3.0</option>
<option value="1.3.1">1.3.1</option>
<option value="1.3.2">1.3.2</option>
<option value="1.3.3">1.3.3</option>
<option value="1.3.4">1.3.4</option>
<option value="1.4.0">1.4.0</option>
<option value="1.4.1">1.4.1</option>
<option value="1.4.2">1.4.2</option>
<option value="1.4.3">1.4.3</option>
<option value="1.4.3-proper">1.4.3-proper</option>
<option value="1.4.3-proper2">1.4.3-proper2</option>
<option value="1.4.3.1">1.4.3.1</option>
<option value="1.5.0">1.5.0</option>
<option value="1.5.1">1.5.1</option>
<option value="1.5.10">1.5.10</option>
<option value="1.5.11">1.5.11</option>
<option value="1.5.2">1.5.2</option>
<option value="1.5.3">1.5.3</option>
<option value="1.5.3-proper">1.5.3-proper</option>
<option value="1.5.4">1.5.4</option>
<option value="1.5.5">1.5.5</option>
<option value="1.5.6">1.5.6</option>
<option value="1.5.7">1.5.7</option>
<option value="1.5.8">1.5.8</option>
<option value="1.5.8.1">1.5.8.1</option>
<option value="1.5.9">1.5.9</option>
<option value="1.6.0">1.6.0</option>
<option value="1.6.1">1.6.1</option>
<option value="1.6.2">1.6.2</option>
<option value="1.7.0">1.7.0</option>
<option value="20050823-1">20050823-1</option>
<option value="20050824-1">20050824-1</option>
<option value="20050825-1">20050825-1</option>
<option value="20050826-1">20050826-1</option>
<option value="git2svn-syncpoint-master">git2svn-syncpoint-master</option>
<option value="schema_feature_freeze_for_1.1">schema_feature_freeze_for_1.1</option>
<option value="schema_freeze_for_1.1.1">schema_freeze_for_1.1.1</option>
<option value="schema_freeze_for_1.1.2">schema_freeze_for_1.1.2</option>
<option value="schema_freeze_for_1.1.4">schema_freeze_for_1.1.4</option>
<option value="schema_freeze_for_1.2.11">schema_freeze_for_1.2.11</option>
<option value="schema_freeze_for_1.2.2">schema_freeze_for_1.2.2</option>
<option value="schema_freeze_for_1.2.2_(take_2)">schema_freeze_for_1.2.2_(take_2)</option>
<option value="schema_upgrade_passed_(1.1_-&gt;_1.1.1)">schema_upgrade_passed_(1.1_-&gt;_1.1.1)</option></select>
  
  
    | Revision: 
    <input id="rev" name="rev" size="8" type="text" value="master" />
	
</form>
</div>

<h2>
  <a href="/redmine/projects/tt-rss/repository/revisions/master/show">root</a>

    / <a href="/redmine/projects/tt-rss/repository/revisions/master/show/lib">lib</a>

    / <a href="/redmine/projects/tt-rss/repository/revisions/master/show/lib/simplepie">simplepie</a>


    / <a href="/redmine/projects/tt-rss/repository/revisions/master/changes/lib/simplepie/simplepie.inc">simplepie.inc</a>


@ master


</h2>

<p>

<p>
History |

    <a href="/redmine/projects/tt-rss/repository/revisions/master/entry/lib/simplepie/simplepie.inc">View</a> |


    <a href="/redmine/projects/tt-rss/repository/revisions/master/annotate/lib/simplepie/simplepie.inc">Annotate</a> |

<a href="/redmine/projects/tt-rss/repository/revisions/master/raw/lib/simplepie/simplepie.inc">Download</a>
(436.4 kB)
</p>


</p>





<form action="/redmine/projects/tt-rss/repository/diff/lib/simplepie/simplepie.inc" method="get">
<table class="list changesets">
<thead><tr>
<th>#</th>
<th></th>
<th></th>
<th>Date</th>
<th>Author</th>
<th>Comment</th>
</tr></thead>
<tbody>



<tr class="changeset odd">
<td class="id"><a href="/redmine/projects/tt-rss/repository/revisions/a6e043ffff30ef5cb130bb07583527b1c1dbedb6" title="Revision a6e043ff">a6e043ff</a></td>
<td class="checkbox"><input checked="checked" id="cb-1" name="rev" onclick="$('cbto-2').checked=true;" type="radio" value="a6e043ffff30ef5cb130bb07583527b1c1dbedb6" /></td>
<td class="checkbox"></td>
<td class="committed_on">11/04/2012 05:45 pm</td>
<td class="author">Andrew Dolgov</td>
<td class="comments"><p>update simplepie to 1.3.1 (closes <a href="/redmine/issues/471" class="issue status-5 priority-2 closed" title="Update SimplePie to version 1.3 (Closed)">#471</a>)</p></td>
</tr>


<tr class="changeset even">
<td class="id"><a href="/redmine/projects/tt-rss/repository/revisions/5b085627bdb9a4bab53ee390d39732e1a5d24e42" title="Revision 5b085627">5b085627</a></td>
<td class="checkbox"><input id="cb-2" name="rev" onclick="$('cbto-3').checked=true;" type="radio" value="5b085627bdb9a4bab53ee390d39732e1a5d24e42" /></td>
<td class="checkbox"><input checked="checked" id="cbto-2" name="rev_to" onclick="if ($('cb-2').checked==true) {$('cb-1').checked=true;}" type="radio" value="5b085627bdb9a4bab53ee390d39732e1a5d24e42" /></td>
<td class="committed_on">10/24/2011 11:56 pm</td>
<td class="author">Michael Kuhn</td>
<td class="comments"><p>Update SimplePie to version 1.2.1.</p></td>
</tr>


<tr class="changeset odd">
<td class="id"><a href="/redmine/projects/tt-rss/repository/revisions/86027a078d574b3b88b19c058fd9cb6925ee9ebc" title="Revision 86027a07">86027a07</a></td>
<td class="checkbox"><input id="cb-3" name="rev" onclick="$('cbto-4').checked=true;" type="radio" value="86027a078d574b3b88b19c058fd9cb6925ee9ebc" /></td>
<td class="checkbox"><input id="cbto-3" name="rev_to" onclick="if ($('cb-3').checked==true) {$('cb-2').checked=true;}" type="radio" value="86027a078d574b3b88b19c058fd9cb6925ee9ebc" /></td>
<td class="committed_on">12/27/2010 03:42 pm</td>
<td class="author">Andrew Dolgov</td>
<td class="comments"><p>simplepie: enable digest authentication</p></td>
</tr>


<tr class="changeset even">
<td class="id"><a href="/redmine/projects/tt-rss/repository/revisions/a5ae391500a54c0a94217f4769aa383cc7000b4e" title="Revision a5ae3915">a5ae3915</a></td>
<td class="checkbox"><input id="cb-4" name="rev" onclick="$('cbto-5').checked=true;" type="radio" value="a5ae391500a54c0a94217f4769aa383cc7000b4e" /></td>
<td class="checkbox"><input id="cbto-4" name="rev_to" onclick="if ($('cb-4').checked==true) {$('cb-3').checked=true;}" type="radio" value="a5ae391500a54c0a94217f4769aa383cc7000b4e" /></td>
<td class="committed_on">12/27/2010 03:41 pm</td>
<td class="author">Michael Kuhn</td>
<td class="comments"><p>Update SimplePie to version 1.2.</p></td>
</tr>


<tr class="changeset odd">
<td class="id"><a href="/redmine/projects/tt-rss/repository/revisions/2bc993b52482bb1aaf11c21fd3c68233b567f0ae" title="Revision 2bc993b5">2bc993b5</a></td>
<td class="checkbox"><input id="cb-5" name="rev" onclick="$('cbto-6').checked=true;" type="radio" value="2bc993b52482bb1aaf11c21fd3c68233b567f0ae" /></td>
<td class="checkbox"><input id="cbto-5" name="rev_to" onclick="if ($('cb-5').checked==true) {$('cb-4').checked=true;}" type="radio" value="2bc993b52482bb1aaf11c21fd3c68233b567f0ae" /></td>
<td class="committed_on">04/26/2009 04:48 pm</td>
<td class="author">Andrew Dolgov</td>
<td class="comments"><p>simplepie: do not lowercase authentication information (closes <a href="/redmine/issues/238" class="issue status-5 priority-3 closed" title="Can't fetch feeds that require authentication using SimplePie (Closed)">#238</a>)</p></td>
</tr>


<tr class="changeset even">
<td class="id"><a href="/redmine/projects/tt-rss/repository/revisions/5ef03f1541a13ffaf3a22131a1dd0360d75d576c" title="Revision 5ef03f15">5ef03f15</a></td>
<td class="checkbox"></td>
<td class="checkbox"><input id="cbto-6" name="rev_to" onclick="if ($('cb-6').checked==true) {$('cb-5').checked=true;}" type="radio" value="5ef03f1541a13ffaf3a22131a1dd0360d75d576c" /></td>
<td class="committed_on">01/22/2009 04:31 pm</td>
<td class="author">Andrew Dolgov</td>
<td class="comments"><p>move simplepie/ to lib</p></td>
</tr>


</tbody>
</table>
<input type="submit" value="View differences" />
</form>





        
        <div style="clear:both;"></div>
    </div>
</div>

<div id="ajax-indicator" style="display:none;"><span>Loading...</span></div>
<div id="ajax-modal" style="display:none;"></div>

<div id="footer">
  <div class="bgl"><div class="bgr">
    Powered by <a href="http://www.redmine.org/">Redmine</a> &copy; 2006-2012 Jean-Philippe Lang
  </div></div>
</div>
</div>
</div>

</body>
</html>
