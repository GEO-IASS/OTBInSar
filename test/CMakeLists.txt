otb_module_test()

set(OTBInSarTests
otbInSarTestDriver.cxx
otbBaselineCalculatorNew.cxx
otbBaselineFunctorBaseNew.cxx
otbHorizontalVerticalBaselineFunctorNew.cxx
otbLengthOrientationBaselineFunctorNew.cxx
otbParallelPerpendicularBaselineFunctorNew.cxx
otbPlatformPositionToBaselineCalculatorNew.cxx
otbComplexInterpolateImageFunctionNew.cxx
#otbMultivariateRationalTransform.cxx
)

add_executable(otbInSarTestDriver ${OTBInSarTests})
target_link_libraries(otbInSarTestDriver ${OTBInSar-Test_LIBRARIES})
otb_module_target_label(otbInSarTestDriver)

# Tests Declaration

#otb_add_test(NAME prTuVectorDataProjectionFilterFromGeoToMap COMMAND otbInSarTestDriver
  #otbBaselineCalculatorNew
  #${INPUTDATA}/ToulousePointsWGS.sqlite
  #${INPUTDATA}/QB_Toulouse_Ortho_PAN.tif
  #${TEMP}/prTvVectorDataProjectionFilterFromGeoToMap.shp
  #)
  
otb_add_test(NAME inTuBaselineCalculatorNew COMMAND otbInSarTestDriver
  otbBaselineCalculatorNew)

otb_add_test(NAME inTuBaselineFunctorBaseNew COMMAND otbInSarTestDriver
  otbBaselineFunctorBaseNew)
  
otb_add_test(NAME inTuHorizontalVerticalBaselineFunctorNew COMMAND otbInSarTestDriver
  otbHorizontalVerticalBaselineFunctorNew)
 
otb_add_test(NAME inTuLengthOrientationBaselineFunctorNew COMMAND otbInSarTestDriver
  otbLengthOrientationBaselineFunctorNew)
  
otb_add_test(NAME inTuParallelPerpendicularBaselineFunctorNew COMMAND otbInSarTestDriver
  otbParallelPerpendicularBaselineFunctorNew)
  
otb_add_test(NAME inTuPlatformPositionToBaselineCalculatorNew COMMAND otbInSarTestDriver
  otbPlatformPositionToBaselineCalculatorNew)
  
otb_add_test(NAME inTuComplexInterpolateImageFunctionNew COMMAND otbInSarTestDriver
  otbComplexInterpolateImageFunctionNew)
  
#otb_add_test(NAME inTuMultivariateRationalTransformNew COMMAND otbInSarTestDriver
#  otbMultivariateRationalTransformNew)
