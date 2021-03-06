<?php

/**
 * @file
 * API documentation for Leaflet Markercluster.
 */

/**
 * Add extra options for Leaflet Markercluster, using hooks provided by Leaflet
 *
 * For the default attributes to define in this hook, see leaflet.api.php
 */
function hook_leaflet_map_info_alter(&$maps) {
  // See https://github.com/Leaflet/Leaflet.markercluster for all options
  $maps['OSM Mapnik']['settings'] += array(
    'zoomToBoundsOnClick' => TRUE, // When you mouse over a cluster it shows the bounds of its markers.
    'showCoverageOnHover' => TRUE, // When you click a cluster we zoom to its bounds.
    'spiderfyOnMaxZoom' => TRUE, // When you click a cluster at the bottom zoom level we spiderfy it so you can see all of its markers.
    'animateAddingMarkers' => FALSE, // If set to true then adding individual markers to the MarkerClusterGroup after it has been added to the map will add the marker and animate it in to the cluster. Defaults to false as this gives better performance when bulk adding markers.
    'disableClusteringAtZoom' => FALSE, // If set, at this zoom level and below markers will not be clustered. This defaults to disabled
    'maxClusterRadius' => 80, // The maximum radius that a cluster will cover from the central marker (in pixels). Default 80. Decreasing will make more smaller clusters.
  );

  // Adding a custom cluster icon. This overwrites the standard cluster icons and does not yet support icon clusters
  // depending on the cluster size.
  $maps['OSM Mapnik']['markercluster_icon'] = array(
    'iconUrl'       => '/sites/default/files/icon.png',
    'iconSize'      => array('x' => '20', 'y' => '40'),
    'iconAnchor'    => array('x' => '20', 'y' => '40'),
    'popupAnchor'   => array('x' => '-8', 'y' => '-32'),
    'shadowUrl'     => '/sites/default/files/icon-shadow.png',
    'shadowSize'    => array('x' => '25', 'y' => '27'),
    'shadowAnchor'  => array('x' => '0', 'y' => '27'),
  );
}
