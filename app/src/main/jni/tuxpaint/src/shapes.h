/*
  shapes.h

  For Tux Paint
  List of available shapes.

  Copyright (c) 2002-2021 by Bill Kendrick and others
  bill@newbreedsoftware.com
  http://www.tuxpaint.org/

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  (See COPYING.txt)

  June 14, 2002 - January 21, 2022
  $Id$
*/


#ifndef gettext_noop
#define gettext_noop(String) String
#endif


/* What shapes are available: */

enum
{
  SHAPE_SQUARE,
  SHAPE_SQUARE_FILL,
  SHAPE_RECTANGLE,
  SHAPE_RECTANGLE_FILL,
  SHAPE_CIRCLE,
  SHAPE_CIRCLE_FILL,
  SHAPE_ELLIPSE,
  SHAPE_ELLIPSE_FILL,
  SHAPE_TRIANGLE,
  SHAPE_TRIANGLE_FILL,
  SHAPE_PENTAGON,
  SHAPE_PENTAGON_FILL,
  SHAPE_HEXAGON,
  SHAPE_HEXAGON_FILL,
  SHAPE_HEPTAGON,
  SHAPE_HEPTAGON_FILL,
  SHAPE_OCTAGON,
  SHAPE_OCTAGON_FILL,
  SHAPE_RHOMBUS,
  SHAPE_RHOMBUS_FILL,
  SHAPE_TRIANGLE_STAR,
  SHAPE_TRIANGLE_STAR_FILL,
  SHAPE_RHOMBUS_STAR,
  SHAPE_RHOMBUS_STAR_FILL,
  SHAPE_PENTAGON_STAR,
  SHAPE_PENTAGON_STAR_FILL,
  NUM_SHAPES
};


/* How many sides do they have? */

const int shape_sides[NUM_SHAPES] = {
  4,                            /* Square */
  4,                            /* Square */
  4,                            /* Rectangle */
  4,                            /* Rectangle */
  72,                           /* Circle */
  72,                           /* Circle */
  72,                           /* Ellipse */
  72,                           /* Ellipse */
  3,                            /* Triangle */
  3,                            /* Triangle */
  5,                            /* Pentagon */
  5,                            /* Pentagon */
  6,                            /* Hexagon */
  6,                            /* Hexagon */
  7,                            /* Heptagon */
  7,                            /* Heptagon */
  8,                            /* Octagon */
  8,                            /* Octagon */
  4,                            /* Rhombus */
  4,                            /* Rhombus */
  3,                            /* 3 points star */
  3,                            /* 3 points star */
  4,                            /* 4 points star */
  4,                            /* 4 points star */
  5,                            /* 5 points star */
  5                             /* 5 points star */
};


/* Which shapes are 1:1 aspect? */

const int shape_locked[NUM_SHAPES] = {
  1,                            /* Square */
  1,                            /* Square */
  0,                            /* Rectangle */
  0,                            /* Rectangle */
  1,                            /* Circle */
  1,                            /* Circle */
  0,                            /* Ellipse */
  0,                            /* Ellipse */
  0,                            /* Triangle */
  0,                            /* Triangle */
  0,                            /* Pentagon */
  0,                            /* Pentagon */
  0,                            /* Hexagon */
  0,                            /* Hexagon */
  0,                            /* Heptagon */
  0,                            /* Heptagon */
  1,                            /* Octagon */ /* FIXME: Consider unlocking? -bjk 2022.01.21 */
  1,                            /* Octagon */ /* FIXME: Consider unlocking? -bjk 2022.01.21 */
  0,                            /* Rhombus */
  0,                            /* Rhombus */
  0,                            /* 3 points star */
  0,                            /* 3 points star */
  0,                            /* 4 points star */
  0,                            /* 4 points star */
  0,                            /* 5 points star */
  0                             /* 5 points star */
};


/* Which shapes are filled? */

const int shape_filled[NUM_SHAPES] = {
  0,                            /* Square */
  1,                            /* Square */
  0,                            /* Rectangle */
  1,                            /* Rectangle */
  0,                            /* Circle */
  1,                            /* Circle */
  0,                            /* Ellipse */
  1,                            /* Ellipse */
  0,                            /* Triangle */
  1,                            /* Triangle */
  0,                            /* Pentagon */
  1,                            /* Pentagon */
  0,                            /* Hexagon */
  1,                            /* Hexagon */
  0,                            /* Heptagon */
  1,                            /* Heptagon */
  0,                            /* Octagon */
  1,                            /* Octagon */
  0,                            /* Rhombus */
  1,                            /* Rhombus */
  0,                            /* 3 points star */
  1,                            /* 3 points star */
  0,                            /* 4 points star */
  1,                            /* 4 points star */
  0,                            /* 5 points star */
  1                             /* 5 points star */
};



/* Initial angles for shapes: */

const float shape_init_ang[NUM_SHAPES] = {
  45.0,                         /* Square */
  45.0,                         /* Square */
  45.0,                         /* Rectangle */
  45.0,                         /* Rectangle */
  0.0,                          /* Circle */
  0.0,                          /* Circle */
  0.0,                          /* Ellipse */
  0.0,                          /* Ellipse */
  210.0,                        /* Triangle ((360/3)+90) */
  210.0,                        /* Triangle ((360/3)+90) */
  162.0,                        /* Pentagon ((360/5)+90) */
  162.0,                        /* Pentagon ((360/5)+90) */
  150.0,                        /* Hexagon ((360/6)+90) */
  150.0,                        /* Hexagon ((360/6)+90) */
  141.42857143,                 /* Heptagon ((360/7)+90) */
  141.42857143,                 /* Heptagon ((360/7)+90) */
  22.5,                         /* Octagon ((360/8)/2 = 22.5) */
  22.5,                         /* Octagon ((360/8)/2 = 22.5) */
  0.0,                          /* Rhombus */
  0.0,                          /* Rhombus */
  210.0,                        /* 3 points star ((360/3)+90) */
  210.0,                        /* 3 points star ((360/3)+90) */
  0.0,                          /* 4 points star */
  0.0,                          /* 4 points star */
  162.0,                        /* 5 points star ((360/5)+90) */
  162.0                         /* 5 points star ((360/5)+90) */
};


/* Shapes that don't make sense rotating (e.g., circles): */

const int shape_no_rotate[NUM_SHAPES] = {
  0,                            /* Square */
  0,                            /* Square */
  0,                            /* Rectangle */
  0,                            /* Rectangle */
  1,                            /* Circle */
  1,                            /* Circle */
  0,                            /* Ellipse */
  0,                            /* Ellipse */
  0,                            /* Triangle */
  0,                            /* Triangle */
  0,                            /* Pentagon */
  0,                            /* Pentagon */
  0,                            /* Hexagon */
  0,                            /* Hexagon */
  0,                            /* Heptagon */
  0,                            /* Heptagon */
  0,                            /* Octagon */
  0,                            /* Octagon */
  0,                            /* Rhombus */
  0,                            /* Rhombus */
  0,                            /* 3 points star */
  0,                            /* 3 points star */
  0,                            /* 4 points star */
  0,                            /* 4 points star */
  0,                            /* 5 points star */
  0                             /* 5 points star */
};

/* Valley of stars in percent of size */

const int shape_valley[NUM_SHAPES] = {
  100,                          /* Square */
  100,                          /* Square */
  100,                          /* Rectangle */
  100,                          /* Rectangle */
  100,                          /* Circle */
  100,                          /* Circle */
  100,                          /* Ellipse */
  100,                          /* Ellipse */
  100,                          /* Triangle */
  100,                          /* Triangle */
  100,                          /* Pentagon */
  100,                          /* Pentagon */
  100,                          /* Hexagon */
  100,                          /* Hexagon */
  100,                          /* Heptagon */
  100,                          /* Heptagon */
  100,                          /* Octagon */
  100,                          /* Octagon */
  100,                          /* Rhombus */
  100,                          /* Rhombus */
  20,                           /* 3 points star */
  20,                           /* 3 points star */
  30,                           /* 4 points star */
  30,                           /* 4 points star */
  35,                           /* 5 points star */
  35                            /* 5 points star */
};


/* Shape names: */

const char *const shape_names[NUM_SHAPES] = {
  // Square shape tool (4 equally-lengthed sides at right angles)
  gettext_noop("Square"),
  gettext_noop("Square"),

  // Rectangle shape tool (4 sides at right angles)
  gettext_noop("Rectangle"),
  gettext_noop("Rectangle"),

  // Circle shape tool (X radius and Y radius are the same)
  gettext_noop("Circle"),
  gettext_noop("Circle"),

  // Ellipse shape tool (X radius and Y radius may differ)
  gettext_noop("Ellipse"),
  gettext_noop("Ellipse"),

  // Triangle shape tool (3 sides)
  gettext_noop("Triangle"),
  gettext_noop("Triangle"),

  // Pentagon shape tool (5 sides)
  gettext_noop("Pentagon"),
  gettext_noop("Pentagon"),

  // Hexagon shape tool (6 sides)
  gettext_noop("Hexagon"),
  gettext_noop("Hexagon"),

  // Heptagon (aka septagon) shape tool (7 sides)
  gettext_noop("Heptagon"),
  gettext_noop("Heptagon"),

  // Octagon shape tool (8 sides)
  gettext_noop("Octagon"),
  gettext_noop("Octagon"),

  // Rhombus shape tool (4 sides, not at right angles)
  gettext_noop("Rhombus"),
  gettext_noop("Rhombus"),

  // Triangle star (3 points star)
  gettext_noop("Star"),

  // Triangle star (3 points star)
  gettext_noop("Star"),

  // Rhombus star (4 points star)
  gettext_noop("Star"),

  // Rhombus star (4 points star)
  gettext_noop("Star"),

  // Pentagone star (5 points star)
  gettext_noop("Star"),

  // Pentagone star (5 points star)
  gettext_noop("Star")
};


/* Some text to write when each shape is selected: */

const char *const shape_tips[NUM_SHAPES] = {
  // Description of a square
  gettext_noop("A square is a rectangle with four equal sides."),
  gettext_noop("A square is a rectangle with four equal sides."),

  // Description of a rectangle
  gettext_noop("A rectangle has four sides and four right angles."),
  gettext_noop("A rectangle has four sides and four right angles."),

  // Description of a circle
  gettext_noop("A circle is a curve where all points have the same distance from the center."),
  gettext_noop("A circle is a curve where all points have the same distance from the center."),

  // Description of an ellipse
  gettext_noop("An ellipse is a stretched circle."),
  gettext_noop("An ellipse is a stretched circle."),

  // Description of a triangle
  gettext_noop("A triangle has three sides."),
  gettext_noop("A triangle has three sides."),

  // Description of a pentagon
  gettext_noop("A pentagon has five sides."),
  gettext_noop("A pentagon has five sides."),

  // Description of a hexagon
  gettext_noop("A hexagon has six sides."),
  gettext_noop("A hexagon has six sides."),

  // Description of a heptagon
  gettext_noop("A heptagon has seven sides."),
  gettext_noop("A heptagon has seven sides."),

  // Description of an octagon
  gettext_noop("An octagon has eight equal sides."),
  gettext_noop("An octagon has eight equal sides."),

  // Description of a rhombus
  gettext_noop("A rhombus has four equal sides, and opposite sides are parallel."),
  gettext_noop("A rhombus has four equal sides, and opposite sides are parallel."),

  gettext_noop("A star with 3 points."),
  gettext_noop("A star with 3 points."),
  gettext_noop("A star with 4 points."),
  gettext_noop("A star with 4 points."),
  gettext_noop("A star with 5 points."),
  gettext_noop("A star with 5 points.")
};


/* Shape icon filenames: */

const char *const shape_img_fnames[NUM_SHAPES] = {
  DATA_PREFIX "images/shapes/square.png",
  DATA_PREFIX "images/shapes/square_f.png",
  DATA_PREFIX "images/shapes/rectangle.png",
  DATA_PREFIX "images/shapes/rectangle_f.png",
  DATA_PREFIX "images/shapes/circle.png",
  DATA_PREFIX "images/shapes/circle_f.png",
  DATA_PREFIX "images/shapes/oval.png",
  DATA_PREFIX "images/shapes/oval_f.png",
  DATA_PREFIX "images/shapes/triangle.png",
  DATA_PREFIX "images/shapes/triangle_f.png",
  DATA_PREFIX "images/shapes/pentagon.png",
  DATA_PREFIX "images/shapes/pentagon_f.png",
  DATA_PREFIX "images/shapes/hexagon.png",
  DATA_PREFIX "images/shapes/hexagon_f.png",
  DATA_PREFIX "images/shapes/heptagon.png",
  DATA_PREFIX "images/shapes/heptagon_f.png",
  DATA_PREFIX "images/shapes/octagon.png",
  DATA_PREFIX "images/shapes/octagon_f.png",
  DATA_PREFIX "images/shapes/diamond.png",
  DATA_PREFIX "images/shapes/diamond_f.png",
  DATA_PREFIX "images/shapes/star3p.png",
  DATA_PREFIX "images/shapes/star3p_f.png",
  DATA_PREFIX "images/shapes/star4p.png",
  DATA_PREFIX "images/shapes/star4p_f.png",
  DATA_PREFIX "images/shapes/star5p.png",
  DATA_PREFIX "images/shapes/star5p_f.png"
};


/* Shape controls */

enum
{
  SHAPEMODE_CENTER,
  SHAPEMODE_CORNER,
  NUM_SHAPEMODES
};

const char *const shapemode_img_fnames[NUM_SHAPEMODES] = {
  DATA_PREFIX "images/ui/shapes_center.png",
  DATA_PREFIX "images/ui/shapes_corner.png"
};

/* String shown when Shapes tool is selected;
   one version for normal ("complex shapes"),
   the other for simplified mode ("simple shapes") */
enum {
  SHAPE_COMPLEXITY_NORMAL,
  SHAPE_COMPLEXITY_SIMPLE,
  NUM_SHAPE_COMPLEXITIES
};

const char *const shape_tool_tips[NUM_SHAPE_COMPLEXITIES] = {
  gettext_noop("Pick a shape. Click to start drawing, drag, and let go when it is the size and shape you want. Move around to rotate it, and click again to draw it."),
  gettext_noop("Pick a shape. Click to start drawing, drag, and let go when it is the size and shape you want.")
};

/* Strings shown when switching between "from center"
   and "from corner" modes */
const char *const shapemode_tips[NUM_SHAPES] = {
  gettext_noop("Draw shapes from the center."),
  gettext_noop("Draw shapes from a corner."),
};
