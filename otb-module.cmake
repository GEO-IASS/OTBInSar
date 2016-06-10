set(DOCUMENTATION "otb insar")

# define the dependencies of the include module and the tests
otb_module(OTBInSar
  DEPENDS
    OTBCommon
    OTBImageIO
    OTBImageBase
    OTBOSSIMAdapters
    OTBImageManipulation
    OTBProjection
    OTBPointSet
    
  TEST_DEPENDS
    OTBTestKernel
    OTBCommandLine

  DESCRIPTION
    "${DOCUMENTATION}"
)
