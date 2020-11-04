EVA
===

"Eva" is short for "Entity Views Attachment;" it provides a Views display
plugin that allows the output of a View to be attached to the content of any
Backdrop entity. The body of a node or comment, the profile of a user account,
or the listing page for a Taxonomy term are all examples of entity content.

The placement of the view in the entity's content can be reordered on the
"Field Display" administration page for that entity, like other fields added
using the Field UI module.

In addition, the unique ID of the entity the view is attached to -- as well as
any tokens generated from that entity -- can be passed in as arguments to the
view. For example, you might make a View that displays posts with an 'Author
ID' argument, then use Eva to attach the view to the User entity type. When a
user profile is displayed, the User's ID will be passed in as the argument to
the view magically.

That's right: magically.

Installation
------------

* Install this module using the official Backdrop CMS instructions at
  <https://backdropcms.org/guide/modules>.
* Go to a View and add EVA Field as a display.
* Go to content type (or other entity) and update the display.

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

Maintainers
-----------

Herb v/d Dool <https://github.com/herbdool>

Credit
------

Original author of Drupal 7 module:

* Jeff Eaton "eaton" <http://drupal.org/user/16496>