<?php
/**
 * @name         Rapid Assessment Tool
 * @version      01
 * @package      rat
 * @author       Ramindu Deshapriya <rdeshapriya@virtusa.com>
 * @about        Developed in whole or part by the U.S. National Library of Medicine,the Sahana Foundation and Virtusa Corporation
 * @link         https://pl.nlm.nih.gov/about
 * @link         http://sahanafoundation.org
 * @link		 http://www.virtusa.com
 * @license	 	 http://www.gnu.org/licenses/lgpl-2.1.html GNU Lesser General Public License (LGPL)
 * @lastModified 2013.11.21
 */


require_once($global['approot'].'/inc/lib_menu.inc');
require_once($global['approot'].'/inc/handler_db.inc');
require_once($global['approot'].'/inc/lib_xajax.inc');
require_once($global['approot'].'/mod/rat/xajax.inc');

shn_xajax_registerFunction('rat_append_log');
shn_xajax_registerFunction('rat_prepend_log');
shn_xajax_registerFunction('rat_show_message');



function shn_rat_default() {

	global $global;
	shn_xajax_printJavascript();
	echo "
		<div id=\"rezLog\" class=\"logArea\">Loading RAT Data...<br><noscript>THIS MODULE REQUIRES THAT YOU ACTIVATE JAVASCRIPT!</noscript></div>
		<div id=\"rezControl\" class=\"controlArea\">&nbsp;</div>
		<div id=\"rezMain\" class=\"mainArea\"><p>RAT Module under construction</p></div>
		<script>".file_get_contents($global['approot']."/mod/fpa/fpa.js")."</script>
	";


	echo "
		<script type=\"text/javascript\" src=\"res/js/jquery-1.6.4.min.js\" ></script>
		<script type=\"text/javascript\" src=\"res/js/jquery-ui-autocomplete.min.js\" ></script>
		<script type=\"text/javascript\" src=\"res/js/jquery-ui-datepicker.min.js\" ></script>
	";
}












