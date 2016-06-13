#include "otbTestMain.h"
void RegisterTests()
{
  REGISTER_TEST(otbBaselineCalculatorNew);
  REGISTER_TEST(otbBaselineCalculatorTest);
  REGISTER_TEST(otbBaselineFunctorBaseNew);
  REGISTER_TEST(otbHorizontalVerticalBaselineFunctorNew);
  REGISTER_TEST(otbHorizontalVerticalBaselineFunctorTest);
  REGISTER_TEST(otbLengthOrientationBaselineFunctorNew);
  REGISTER_TEST(otbLengthOrientationBaselineFunctorTest);
  REGISTER_TEST(otbParallelPerpendicularBaselineFunctorNew);
  REGISTER_TEST(otbParallelPerpendicularBaselineFunctorTest);
  REGISTER_TEST(otbPlatformPositionToBaselineCalculatorNew);
  REGISTER_TEST(otbPlatformPositionToBaselineCalculatorTest);
  REGISTER_TEST(otbComplexInterpolateImageFunctionNew);
  REGISTER_TEST(otbMultivariateRationalTransformNew);
  REGISTER_TEST(otbMultivariateRationalTransformTest);
  REGISTER_TEST(otbModuloImageFilterTest);
  
  REGISTER_TEST(otbComplexInterpolateImageFunctionNew);
  REGISTER_TEST(otbComplexInterpolateImageFunction);
  //REGISTER_TEST(otbComplexResampleImageFilter);
  REGISTER_TEST(otbRealResampleImageFilter);
  REGISTER_TEST(otbGridIntersectionPointSetSourceTest);
  REGISTER_TEST(otbDiracNormalizeZeroFrequencyCalculatorTest);
}
