otb_module_test()

set(OTBInSarTests
otbInSarTestDriver.cxx

#baseline tests
otbBaselineCalculatorNew.cxx
otbBaselineCalculatorTest.cxx
otbBaselineFunctorBaseNew.cxx
otbHorizontalVerticalBaselineFunctorNew.cxx
otbHorizontalVerticalBaselineFunctorTest.cxx
otbLengthOrientationBaselineFunctorNew.cxx
otbLengthOrientationBaselineFunctorTest.cxx
otbParallelPerpendicularBaselineFunctorNew.cxx
otbParallelPerpendicularBaselineFunctorTest.cxx
otbPlatformPositionToBaselineCalculatorNew.cxx
otbPlatformPositionToBaselineCalculatorTest.cxx
otbComplexInterpolateImageFunctionNew.cxx

#basic filter tests
otbModuloImageFilterTest.cxx

#projection
otbMultivariateRationalTransform.cxx


# interpolation
otbComplexInterpolateImageFunctionNew.cxx
otbComplexInterpolateImageFunction.cxx
#otbComplexResampleImageFilter.cxx
otbRealResampleImageFilter.cxx
otbGridIntersectionPointSetSourceTest.cxx
otbDiracNormalizeZeroFrequencyCalculatorTest.cxx

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
  
otb_add_test(NAME inTuHorizontalVerticalBaselineFunctorTest COMMAND otbInSarTestDriver
  otbHorizontalVerticalBaselineFunctorTest)
  
 
otb_add_test(NAME inTuLengthOrientationBaselineFunctorNew COMMAND otbInSarTestDriver
  otbLengthOrientationBaselineFunctorNew)
  
otb_add_test(NAME inTuLengthOrientationBaselineFunctorTest COMMAND otbInSarTestDriver
  otbLengthOrientationBaselineFunctorTest)
  
  
otb_add_test(NAME inTuParallelPerpendicularBaselineFunctorNew COMMAND otbInSarTestDriver
  otbParallelPerpendicularBaselineFunctorNew)
  
otb_add_test(NAME inTuParallelPerpendicularBaselineFunctorTest COMMAND otbInSarTestDriver
  otbParallelPerpendicularBaselineFunctorTest)
  
otb_add_test(NAME inTuPlatformPositionToBaselineCalculatorNew COMMAND otbInSarTestDriver
  otbPlatformPositionToBaselineCalculatorNew)
  
otb_add_test(NAME inTuComplexInterpolateImageFunctionNew COMMAND otbInSarTestDriver
  otbComplexInterpolateImageFunctionNew)
  
otb_add_test(NAME inTuMultivariateRationalTransformNew COMMAND otbInSarTestDriver
  otbMultivariateRationalTransformNew)
  
otb_add_test(NAME inTvMultivariateRationalTransformTest COMMAND otbInSarTestDriver
#  --compare-ascii ${NOTOL}
#  ${BASELINE_FILES}/otbMultivariateRationalTransformOutput.txt
#  ${TEMP}/otbMultivariateRationalTransformOutput.txt
  otbMultivariateRationalTransformTest
${TEMP}/otbMultivariateRationalTransformOutput.txt
0 0
1 1
10 10
-10 -10
)


IF(OTB_DATA_USE_LARGEINPUT)

otb_add_test(NAME inTvPlatformPositionToBaselineCalculatorTest COMMAND otbInSarTestDriver
otbPlatformPositionToBaselineCalculatorTest
	LARGEINPUT{TERRASARX/2008-03-10_GrandCanyon_SSC/TSX1_SAR__SSC______SM_S_SRA_20080310T133220_20080310T133228/IMAGEDATA/IMAGE_HH_SRA_strip_011.cos}
	LARGEINPUT{TERRASARX/2008-03-21_GrandCanyon_SSC/TSX1_SAR__SSC______SM_S_SRA_20080321T133220_20080321T133228/IMAGEDATA/IMAGE_HH_SRA_strip_011.cos}
)

otb_add_test(NAME inTvBaselineCalculatorTest COMMAND otbInSarTestDriver
otbBaselineCalculatorTest
	LARGEINPUT{TERRASARX/2008-03-10_GrandCanyon_SSC/TSX1_SAR__SSC______SM_S_SRA_20080310T133220_20080310T133228/IMAGEDATA/IMAGE_HH_SRA_strip_011.cos}
	LARGEINPUT{TERRASARX/2008-03-21_GrandCanyon_SSC/TSX1_SAR__SSC______SM_S_SRA_20080321T133220_20080321T133228/IMAGEDATA/IMAGE_HH_SRA_strip_011.cos}
)


ENDIF(OTB_DATA_USE_LARGEINPUT)


otb_add_test(NAME inTvModuloImageFilterTest COMMAND otbInSarTestDriver
  otbModuloImageFilterTest)
  
  
otb_add_test(NAME inTvComplexBlackmanWindowInterpolateImageFunction COMMAND otbInSarTestDriver
#     --compare-ascii ${NOTOL}
#                          ${BASELINE_FILES}/coRealBlackmanWindowInterpolateImageFunctionOutput.txt
#                     ${TEMP}/coRealBlackmanWindowInterpolateImageFunctionOutput.txt
          otbComplexInterpolateImageFunction
                ${INPUTDATA}/prison_toulouse.tif
                ${TEMP}/coRealBlackmanWindowInterpolateImageFunctionOutput.txt
				0 # interpolation ID "Blackman"
				3 # radius
                0.01 # normalizeZeroFrequency
                0.5 0.5
                127.33 44.9
                259.67 21.43
                12.13 61.79
                89.5 11
                128 128
                127.255 128.73
                -1 -1
                )
                
otb_add_test(NAME inTvComplexHammingWindowInterpolateImageFunction COMMAND otbInSarTestDriver
#     --compare-ascii ${NOTOL}
#                          ${BASELINE_FILES}/coComplexHammingWindowInterpolateImageFunctionOutput.txt
#                     ${TEMP}/coComplexHammingWindowInterpolateImageFunctionOutput.txt
          otbComplexInterpolateImageFunction
                ${INPUTDATA}/prison_toulouse.tif
                ${TEMP}/coComplexHammingWindowInterpolateImageFunctionOutput.txt
				1 # interpolation ID "Hamming"
				3 # radius
                0.01 # normalizeZeroFrequency
                0.5 0.5 
				127.33 44.9
                259.67 21.43
                12.13 61.79
                89.5 11
                128 128
                127.255 128.73
                -1 -1
                )
                
                
#otb_add_test(NAME inTvComplexHammingWindowResampleImageFilter COMMAND otbInSarTestDriver
##     --compare-ascii ${NOTOL}
##                          ${BASELINE_FILES}/coComplexHammingWindowResampleImageFilterOutput.tif
##                     ${TEMP}/coComplexHammingWindowResampleImageFilterOutput.tif
        #otbComplexResampleImageFilter
                #${INPUTDATA}/prison_toulouse.tif
                #${TEMP}/coComplexHammingWindowResampleImageFilterOutput.tif
				#0 # interpolation ID "Hamming"
				#3 # radius
                #0.00 # normalizeZeroFrequency
                #)
                
otb_add_test(NAME inTvRealHammingWindowResampleImageFilter COMMAND otbInSarTestDriver
#     --compare-ascii ${NOTOL}
#                          ${BASELINE_FILES}/coComplexHammingWindowResampleImageFilterOutput.tif
#                     ${TEMP}/coComplexHammingWindowResampleImageFilterOutput.tif
        otbRealResampleImageFilter
                ${INPUTDATA}/prison_toulouse.tif
                ${TEMP}/coRealHammingWindowResampleImageFilterOutput.tif
				0 # interpolation ID "Hamming"
				3 # radius
				)
                
otb_add_test(NAME inTvGridIntersectionPointSetSource COMMAND otbInSarTestDriver
  otbGridIntersectionPointSetSourceTest)
  
otb_add_test(NAME inTvNormalizeZeroFrequencyCalculator COMMAND otbInSarTestDriver
          otbDiracNormalizeZeroFrequencyCalculatorTest
                2048
				1024
				0.24
				0.325
				)
