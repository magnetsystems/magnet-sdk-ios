Pod::Spec.new do |s|
  s.name               =  'MagnetMobileServer'
  s.version            =  '2.1.0'
  s.license            =  { :type => 'Commercial', :text => 'See http://www.magnet.com/resources/tos.html' }
  s.summary            =  'iOS framework for developing apps using the Magnet platform.'
  s.homepage           =  'http://magnet.com'
  s.author             =  { 'Magnet Systems, Inc.' => 'support@magnet.com' }
  s.source             =  { :git => 'https://github.com/magnetsystems/magnet-sdk-ios.git', :tag => 'v2.1.0', :submodules => true }

  s.platform = :ios, '7.0'
  s.requires_arc = true
  
  s.source_files = 'MMMethodSwizzling.h'
  s.preserve_paths = 'MagnetMobileServer.framework'
  s.public_header_files = "MagnetMobileServer.framework/Headers/*.h"
  s.vendored_frameworks = 'MagnetMobileServer.framework'
  
  s.resource       =  'Bundles/MagnetMobileServer.bundle'
  s.frameworks     =  'CFNetwork', 'CoreData', 'Security', 'MobileCoreServices', 'SystemConfiguration', 'CoreLocation', 'MagnetMobileServer'
  s.xcconfig       =  { 'OTHER_LDFLAGS' => '-ObjC -all_load' } 

end
