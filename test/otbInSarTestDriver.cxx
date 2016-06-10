#include "otbTestMain.h"
void RegisterTests()
{
  REGISTER_TEST(otbBaselineCalculatorNew);
  REGISTER_TEST(otbBaselineFunctorBaseNew);
  REGISTER_TEST(otbHorizontalVerticalBaselineFunctorNew);
  REGISTER_TEST(otbLengthOrientationBaselineFunctorNew);
  REGISTER_TEST(otbParallelPerpendicularBaselineFunctorNew);
  REGISTER_TEST(otbPlatformPositionToBaselineCalculatorNew);
  REGISTER_TEST(otbComplexInterpolateImageFunctionNew);
  //REGISTER_TEST(otbMultivariateRationalTransformNew);
}
