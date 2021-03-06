/*=========================================================================
 *
 *  Copyright UMC Utrecht and contributors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef __elxSupportedImageTypes_h
#define __elxSupportedImageTypes_h

#include "elxMacro.h"

#include "elxInstallFunctions.h"
#include "elxComponentDatabase.h"
#include "elxBaseComponent.h"
#include "elxElastixTemplate.h"
#include "itkImage.h"

namespace elastix
{

  elxPrepareImageTypeSupportMacro();


  /**
   * ******************** SupportedImageTypes *********************
   *
   * Add here the combinations of ImageTypes that elastix should support.
   *
   * Syntax:
   *
   * elxSupportedImageTypeMacro( FixedImagePixelType,
   *                             FixedImageDimension,
   *                             MovingImagePixelType,
   *                             MovingImageDimension,
   *                             Index )
   *
   * Each combination of image types has as 'ID', the Index.
   * Duplicate indices are not allowed. Index 0 is not allowed.
   * The indices must form a "continuous series":
   *    ( index_{i} - index_{i-1} == 1 ).
   *
   * The NrOfSupportedImageTypes must also be set to the right value.
   *
   * elastix, and all its components, must be recompiled after adding
   * a line in this file.
   */

  // CMake will substitute the following line with
  // user-defined image types:
  const unsigned int NrOfSupportedImageTypes = 4;

  elxSupportedImageTypeMacro( float, 2, float, 2, 1 );
  elxSupportedImageTypeMacro( short, 3, short, 3, 2 );
  elxSupportedImageTypeMacro( float, 3, float, 3, 3 );
  elxSupportedImageTypeMacro( short, 4, short, 4, 4 );


} // end namespace elastix

#endif // end #ifndef __elxSupportedImageTypes_h

