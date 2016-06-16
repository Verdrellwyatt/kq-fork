/* License
KQ is Copyright (C) 2002 by Josh Bolduc

This file is part of KQ... a freeware RPG.

KQ is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 2, or (at your
option) any later version.

KQ is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with KQ; see the file COPYING.  If not, write to
the Free Software Foundation,
675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __ANIM_SEQUENCE_H
#define __ANIM_SEQUENCE_H

#include "animation.h"
#include "tiledmap.h"

class KAnimSequence {
public:
  KAnimSequence(const KTmxAnimation &);
  KAnimSequence(KAnimSequence &&);

  const KTmxAnimation::animation_frame &current();

  void advance();

public:
  int nexttime;
  size_t index;
  const KTmxAnimation animation;
};

extern KAnimSequence AnimSequence;
#endif // !__ANIM_SEQUENCE_H