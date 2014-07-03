Pod::Spec.new do |s|
  s.name               =  'MagnetMobileServer'
  s.version            =  '2.3.0'
  s.license            =  { :type => 'Commercial', :text => 'See http://www.magnet.com/resources/tos.html' }
  s.summary            =  'iOS framework for developing apps using the Magnet platform.'
  s.homepage           =  'http://magnet.com'
  s.author             =  { 'Magnet Systems, Inc.' => 'support@magnet.com' }
  s.source             =  { :git => 'https://bitbucket.org:magneteng/magnet-sdk-ios-2.3.0.git', :branch=> 'master', :submodules => true }

  s.platform = :ios, '6.0'
  s.requires_arc = true
  
  s.source_files = 'MMMethodSwizzling.h'
  s.preserve_paths = 'MagnetMobileServer.framework'
  s.public_header_files = "MagnetMobileServer.framework/Headers/*.h"
  s.vendored_frameworks = 'MagnetMobileServer.framework'
  
  s.resource       =  'Bundles/MagnetMobileServer.bundle'
  s.frameworks     =  'CFNetwork', 'CoreData', 'Security', 'MobileCoreServices', 'SystemConfiguration', 'CoreLocation', 'MagnetMobileServer'
  s.xcconfig       =  { 'OTHER_LDFLAGS' => '-ObjC -all_load' } 
  s.library        =  'c++'
  s.dependency     'AFNetworking', '~> 2.2'
  s.dependency     'AFNetworkActivityLogger', '~> 2.0.1'
  s.dependency     'Mantle', '~> 1.4'
  s.dependency     'MDMCoreData', '~> 1.0'
  s.dependency     'RNCryptor', '~> 2.2'
  s.dependency     'CocoaLumberjack', '~> 1.8'

end
