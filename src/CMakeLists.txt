set(OTBInSar_SRC
  otbBaselineFunctorBase.cxx
  otbHorizontalVerticalBaselineFunctor.cxx
  otbLengthOrientationBaselineFunctor.cxx
  otbParallelPerpendicularBaselineFunctor.cxx
  )

add_library(OTBInSar ${OTBInSar_SRC})
target_link_libraries(OTBInSar 
#  ${OTBVectorDataBase_LIBRARIES}
#  ${OTBGdalAdapters_LIBRARIES}
#  ${OTBImageBase_LIBRARIES}
#  ${OTBTransform_LIBRARIES}
#  ${OTBOSSIMAdapters_LIBRARIES}
#  ${OTBImageManipulation_LIBRARIES}
#  ${OTBMetadata_LIBRARIES}
#  ${OTBBoost_LIBRARIES}
#  ${OTBGDAL_LIBRARIES}
#  ${OTBCommon_LIBRARIES}

 )

otb_module_target(OTBInSar)
