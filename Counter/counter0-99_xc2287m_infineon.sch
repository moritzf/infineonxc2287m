<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="6.5.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="6" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="docu-dummy">
<description>Dummy symbols</description>
<packages>
</packages>
<symbols>
<symbol name="RESISTOR">
<wire x1="-2.54" y1="-0.889" x2="2.54" y2="-0.889" width="0.254" layer="94"/>
<wire x1="2.54" y1="0.889" x2="-2.54" y2="0.889" width="0.254" layer="94"/>
<wire x1="2.54" y1="-0.889" x2="2.54" y2="0" width="0.254" layer="94"/>
<wire x1="2.54" y1="0" x2="2.54" y2="0.889" width="0.254" layer="94"/>
<wire x1="-2.54" y1="-0.889" x2="-2.54" y2="0" width="0.254" layer="94"/>
<wire x1="-2.54" y1="0" x2="-2.54" y2="0.889" width="0.254" layer="94"/>
<wire x1="-5.08" y1="0" x2="-2.54" y2="0" width="0.1524" layer="94"/>
<wire x1="2.54" y1="0" x2="5.08" y2="0" width="0.1524" layer="94"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="R" prefix="R">
<description>&lt;b&gt;RESISTOR&lt;/b&gt;</description>
<gates>
<gate name="G$1" symbol="RESISTOR" x="0" y="0"/>
</gates>
<devices>
<device name="">
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="R2" library="docu-dummy" deviceset="R" device=""/>
<part name="R3" library="docu-dummy" deviceset="R" device=""/>
<part name="R4" library="docu-dummy" deviceset="R" device=""/>
<part name="R5" library="docu-dummy" deviceset="R" device=""/>
<part name="R6" library="docu-dummy" deviceset="R" device="">
<attribute name="100" value="100 K"/>
</part>
<part name="R7" library="docu-dummy" deviceset="R" device=""/>
<part name="R8" library="docu-dummy" deviceset="R" device=""/>
</parts>
<sheets>
<sheet>
<plain>
<rectangle x1="1.27" y1="46.99" x2="16.51" y2="74.93" layer="91" rot="R90"/>
<text x="17.78" y="71.12" size="1.778" layer="91" rot="R180">Display</text>
</plain>
<instances>
<instance part="R2" gate="G$1" x="35.56" y="68.58" rot="R90"/>
<instance part="R3" gate="G$1" x="38.1" y="68.58" rot="R90"/>
<instance part="R4" gate="G$1" x="43.18" y="68.58" rot="R90"/>
<instance part="R5" gate="G$1" x="40.64" y="68.58" rot="R90"/>
<instance part="R6" gate="G$1" x="45.72" y="68.58" rot="R90">
<attribute name="100" x="45.72" y="63.5" size="1.778" layer="96" rot="R180"/>
</instance>
<instance part="R7" gate="G$1" x="48.26" y="68.58" rot="R90"/>
<instance part="R8" gate="G$1" x="50.8" y="68.58" rot="R90"/>
</instances>
<busses>
</busses>
<nets>
<net name="N$1" class="0">
<segment>
<wire x1="-2.54" y1="53.34" x2="-2.54" y2="35.56" width="0.1524" layer="91"/>
<wire x1="-2.54" y1="35.56" x2="-7.62" y2="35.56" width="0.1524" layer="91"/>
<wire x1="-7.62" y1="35.56" x2="-7.62" y2="99.06" width="0.1524" layer="91"/>
<wire x1="-7.62" y1="99.06" x2="45.72" y2="99.06" width="0.1524" layer="91"/>
<wire x1="45.72" y1="99.06" x2="45.72" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$3" class="0">
<segment>
<wire x1="2.54" y1="53.34" x2="2.54" y2="33.02" width="0.1524" layer="91"/>
<wire x1="2.54" y1="33.02" x2="-10.16" y2="33.02" width="0.1524" layer="91"/>
<wire x1="-10.16" y1="33.02" x2="-10.16" y2="104.14" width="0.1524" layer="91"/>
<wire x1="-10.16" y1="104.14" x2="48.26" y2="104.14" width="0.1524" layer="91"/>
<wire x1="48.26" y1="104.14" x2="48.26" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$4" class="0">
<segment>
<wire x1="5.08" y1="53.34" x2="5.08" y2="27.94" width="0.1524" layer="91"/>
<wire x1="5.08" y1="27.94" x2="-12.7" y2="27.94" width="0.1524" layer="91"/>
<wire x1="-12.7" y1="27.94" x2="-12.7" y2="106.68" width="0.1524" layer="91"/>
<wire x1="-12.7" y1="106.68" x2="50.8" y2="106.68" width="0.1524" layer="91"/>
<wire x1="50.8" y1="106.68" x2="50.8" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="P3_04_ANODE" class="0">
<segment>
<wire x1="-2.54" y1="68.58" x2="-2.54" y2="96.52" width="0.1524" layer="91"/>
<wire x1="-2.54" y1="96.52" x2="66.04" y2="96.52" width="0.1524" layer="91"/>
<wire x1="66.04" y1="96.52" x2="66.04" y2="45.72" width="0.1524" layer="91"/>
<label x="66.04" y="66.04" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="N$6" class="0">
<segment>
<wire x1="2.54" y1="68.58" x2="2.54" y2="91.44" width="0.1524" layer="91"/>
<wire x1="2.54" y1="91.44" x2="40.64" y2="91.44" width="0.1524" layer="91"/>
<wire x1="40.64" y1="91.44" x2="40.64" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$7" class="0">
<segment>
<wire x1="5.08" y1="68.58" x2="5.08" y2="88.9" width="0.1524" layer="91"/>
<wire x1="5.08" y1="88.9" x2="38.1" y2="88.9" width="0.1524" layer="91"/>
<wire x1="38.1" y1="88.9" x2="38.1" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$8" class="0">
<segment>
<wire x1="7.62" y1="86.36" x2="7.62" y2="68.58" width="0.1524" layer="91"/>
<wire x1="7.62" y1="86.36" x2="35.56" y2="86.36" width="0.1524" layer="91"/>
<wire x1="35.56" y1="86.36" x2="35.56" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$9" class="0">
<segment>
<wire x1="0" y1="68.58" x2="0" y2="93.98" width="0.1524" layer="91"/>
<wire x1="0" y1="93.98" x2="43.18" y2="93.98" width="0.1524" layer="91"/>
<wire x1="43.18" y1="93.98" x2="43.18" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="P10_0" class="0">
<segment>
<wire x1="35.56" y1="63.5" x2="35.56" y2="38.1" width="0.1524" layer="91"/>
<label x="35.56" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P10_1" class="0">
<segment>
<wire x1="38.1" y1="63.5" x2="38.1" y2="38.1" width="0.1524" layer="91"/>
<label x="38.1" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P10_2" class="0">
<segment>
<wire x1="40.64" y1="63.5" x2="40.64" y2="38.1" width="0.1524" layer="91"/>
<label x="40.64" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P10_3" class="0">
<segment>
<wire x1="43.18" y1="63.5" x2="43.18" y2="38.1" width="0.1524" layer="91"/>
<label x="43.18" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P10_6" class="0">
<segment>
<wire x1="45.72" y1="63.5" x2="45.72" y2="38.1" width="0.1524" layer="91"/>
<label x="45.72" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P10_5" class="0">
<segment>
<wire x1="48.26" y1="63.5" x2="48.26" y2="38.1" width="0.1524" layer="91"/>
<label x="48.26" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P10_4" class="0">
<segment>
<wire x1="50.8" y1="63.5" x2="50.8" y2="38.1" width="0.1524" layer="91"/>
<label x="50.8" y="38.1" size="1.778" layer="95" rot="R90"/>
</segment>
</net>
<net name="P3_03_ANODE" class="0">
<segment>
<wire x1="7.62" y1="53.34" x2="7.62" y2="48.26" width="0.1524" layer="91"/>
<wire x1="7.62" y1="48.26" x2="63.5" y2="48.26" width="0.1524" layer="91"/>
<wire x1="63.5" y1="48.26" x2="63.5" y2="45.72" width="0.1524" layer="91"/>
<label x="45.72" y="48.26" size="1.778" layer="95"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
